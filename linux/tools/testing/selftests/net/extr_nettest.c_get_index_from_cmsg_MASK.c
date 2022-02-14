
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msghdr {scalar_t__ msg_controllen; } ;
struct in_pktinfo {int ipi_ifindex; int ipi_addr; } ;
struct in6_pktinfo {int ipi6_ifindex; int ipi6_addr; } ;
struct cmsghdr {scalar_t__ cmsg_level; scalar_t__ cmsg_type; } ;
typedef int buf ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct cmsghdr*) ;
 scalar_t__ FUNC_1 (struct msghdr*) ;
 scalar_t__ FUNC_2 (struct msghdr*,struct cmsghdr*) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_3 (int ,int *,char*,int) ;
 int FUNC_4 (char*,int,char*) ;

__attribute__((used)) static int FUNC_5(struct msghdr *VAR_6)
{
 struct cmsghdr *VAR_7;
 int VAR_8 = 0;
 char VAR_9[64];

 for (VAR_7 = (struct cmsghdr *)FUNC_1(VAR_6);
      VAR_6->msg_controllen != 0 && VAR_7;
      VAR_7 = (struct cmsghdr *)FUNC_2(VAR_6, VAR_7)) {

  if (VAR_7->cmsg_level == VAR_4 &&
      VAR_7->cmsg_type == VAR_3) {
   struct in_pktinfo *VAR_10;

   VAR_10 = (struct in_pktinfo *)(FUNC_0(VAR_7));
   FUNC_3(VAR_0, &VAR_10->ipi_addr, VAR_9, sizeof(VAR_9));
   VAR_8 = VAR_10->ipi_ifindex;
  } else if (VAR_7->cmsg_level == VAR_5 &&
      VAR_7->cmsg_type == VAR_2) {
   struct in6_pktinfo *VAR_11;

   VAR_11 = (struct in6_pktinfo *)(FUNC_0(VAR_7));
   FUNC_3(VAR_1, &VAR_11->ipi6_addr, VAR_9, sizeof(VAR_9));
   VAR_8 = VAR_11->ipi6_ifindex;
  }
 }

 if (VAR_8) {
  FUNC_4("    pktinfo: ifindex %d dest addr %s\n",
   VAR_8, VAR_9);
 }
 return VAR_8;
}
