
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msghdr {int msg_iovlen; void* msg_controllen; void* msg_control; int msg_namelen; void* msg_name; struct iovec* msg_iov; } ;
struct iovec {int iov_len; int iov_base; } ;
struct in_pktinfo {int ipi_ifindex; } ;
struct in6_pktinfo {int ipi6_ifindex; } ;
struct cmsghdr {void* cmsg_len; int cmsg_type; int cmsg_level; } ;
typedef int socklen_t ;
typedef int cmsgbuf ;
typedef void* caddr_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct cmsghdr*) ;
 void* FUNC_1 (int) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (unsigned char*,int ,int) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_4 (int,struct msghdr*,int ) ;
 int FUNC_5 (int) ;
 scalar_t__ VAR_10 ;

__attribute__((used)) static int FUNC_6(int VAR_11, void *VAR_12, socklen_t VAR_13,
    int VAR_14, int VAR_15)
{
 unsigned char VAR_16[64];
 struct iovec VAR_17[2];
 struct cmsghdr *VAR_18;
 struct msghdr VAR_19;
 int VAR_20;

 VAR_17[0].iov_base = VAR_8;
 VAR_17[0].iov_len = VAR_9;
 VAR_19.msg_iov = VAR_17;
 VAR_19.msg_iovlen = 1;
 VAR_19.msg_name = (caddr_t)VAR_12;
 VAR_19.msg_namelen = VAR_13;

 FUNC_3(VAR_16, 0, sizeof(VAR_16));
 VAR_18 = (struct cmsghdr *)VAR_16;
 VAR_19.msg_control = (caddr_t)VAR_18;

 if (VAR_15 == VAR_0) {
  struct in_pktinfo *VAR_21;

  VAR_18->cmsg_level = VAR_5;
  VAR_18->cmsg_type = VAR_4;
  VAR_18->cmsg_len = FUNC_1(sizeof(struct in_pktinfo));
  VAR_21 = (struct in_pktinfo *)(FUNC_0(VAR_18));
  VAR_21->ipi_ifindex = VAR_14;

  VAR_19.msg_controllen = VAR_18->cmsg_len;

 } else if (VAR_15 == VAR_1) {
  struct in6_pktinfo *VAR_22;

  VAR_18->cmsg_level = VAR_6;
  VAR_18->cmsg_type = VAR_3;
  VAR_18->cmsg_len = FUNC_1(sizeof(struct in6_pktinfo));

  VAR_22 = (struct in6_pktinfo *)(FUNC_0(VAR_18));
  VAR_22->ipi6_ifindex = VAR_14;

  VAR_19.msg_controllen = VAR_18->cmsg_len;
 }

again:
 VAR_20 = FUNC_4(VAR_11, &VAR_19, 0);
 if (VAR_20 < 0) {
  if (VAR_7 == VAR_2 && VAR_10) {
   VAR_10 = 0;
   if (!FUNC_5(VAR_11))
    goto again;
   VAR_7 = VAR_2;
  }

  FUNC_2("sendmsg failed");
  return 1;
 }

 return 0;
}
