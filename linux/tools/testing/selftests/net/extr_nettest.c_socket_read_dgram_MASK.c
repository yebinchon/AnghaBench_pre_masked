
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct in6_addr {int s6_addr; } ;
struct sockaddr_in6 {int sin6_scope_id; struct in6_addr sin6_addr; } ;
struct in_addr {int s_addr; } ;
struct sockaddr_in {int sin_family; struct in_addr sin_addr; } ;
struct sockaddr {scalar_t__ sa_family; } ;
struct sock_args {int expected_ifindex; scalar_t__ version; scalar_t__ dev; } ;
struct msghdr {void* msg_name; int msg_namelen; int msg_iovlen; int msg_controllen; void* msg_control; struct iovec* msg_iov; } ;
struct iovec {int iov_len; void* iov_base; } ;
struct cmsghdr {int dummy; } ;
typedef int socklen_t ;
typedef int cmsgbuf ;
typedef void* caddr_t ;
typedef int buf ;
typedef int addr ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (struct in6_addr*) ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (struct msghdr*) ;
 int VAR_4 ;
 int FUNC_2 (char*,struct sockaddr*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*,int,int) ;
 int FUNC_5 (char*,...) ;
 int FUNC_6 (unsigned char*,int ,int) ;
 int FUNC_7 (int,struct msghdr*,int ) ;
 scalar_t__ FUNC_8 (int,unsigned char*,int,int,int ) ;
 int FUNC_9 (int,struct msghdr*,int ) ;
 scalar_t__ FUNC_10 (int,char*,int,int ,void*,int) ;
 scalar_t__ VAR_5 ;
 int FUNC_11 (int) ;
 char* FUNC_12 (scalar_t__) ;
 scalar_t__ VAR_6 ;

__attribute__((used)) static int FUNC_13(int VAR_7, struct sock_args *VAR_8)
{
 unsigned char VAR_9[sizeof(struct sockaddr_in6)];
 struct sockaddr *VAR_10 = (struct sockaddr *) VAR_9;
 socklen_t VAR_11 = sizeof(VAR_9);
 struct iovec VAR_12[2];
 struct msghdr VAR_13 = {
  .msg_name = (caddr_t)VAR_9,
  .msg_namelen = VAR_11,
  .msg_iov = VAR_12,
  .msg_iovlen = 1,
 };
 unsigned char VAR_14[256];
 struct cmsghdr *VAR_15 = (struct cmsghdr *)VAR_14;
 char VAR_16[16*1024];
 int VAR_17;
 int VAR_18;

 VAR_12[0].iov_base = (caddr_t)VAR_16;
 VAR_12[0].iov_len = sizeof(VAR_16);

 FUNC_6(VAR_14, 0, sizeof(VAR_14));
 VAR_13.msg_control = (caddr_t)VAR_15;
 VAR_13.msg_controllen = sizeof(VAR_14);

 VAR_18 = FUNC_7(VAR_7, &VAR_13, 0);
 if (VAR_18 == 0) {
  FUNC_5("peer closed connection.\n");
  return 0;
 } else if (VAR_18 < 0) {
  FUNC_5("failed to read message: %d: %s\n",
   VAR_3, FUNC_12(VAR_3));
  return -1;
 }

 VAR_16[VAR_18] = '\0';

 FUNC_2("Message from:", VAR_10);
 FUNC_5("    %.24s%s\n", VAR_16, VAR_18 > 24 ? " ..." : "");

 VAR_17 = FUNC_1(&VAR_13);
 if (VAR_8->expected_ifindex) {
  if (VAR_8->expected_ifindex != VAR_17) {
   FUNC_4("Device index mismatch: expected %d have %d\n",
      VAR_8->expected_ifindex, VAR_17);
   return -1;
  }
  FUNC_5("Device index matches: expected %d have %d\n",
   VAR_8->expected_ifindex, VAR_17);
 }

 if (!VAR_4 && VAR_5) {
  if (VAR_10->sa_family == VAR_1) {
   struct sockaddr_in6 *VAR_19 = (struct sockaddr_in6 *) VAR_10;
   struct in6_addr *VAR_20 = &VAR_19->sin6_addr;

   if (FUNC_0(VAR_20)) {
    const uint32_t *VAR_21 = (uint32_t *) &VAR_20->s6_addr;
    struct in_addr VAR_22;
    struct sockaddr_in *VAR_23;

    VAR_23 = (struct sockaddr_in *) VAR_9;
    VAR_21 += 3;
    VAR_22 = *VAR_21;
    VAR_23->sin_addr = VAR_22;
    VAR_23->sin_family = VAR_0;
    if (FUNC_8(VAR_7, VAR_9, VAR_11,
        VAR_17, VAR_0) < 0)
     goto out_err;
   }
  }
again:
  VAR_12[0].iov_len = VAR_18;

  if (VAR_8->version == VAR_1) {
   struct sockaddr_in6 *VAR_24 = (struct sockaddr_in6 *) VAR_10;

   if (VAR_8->dev) {

    if (FUNC_10(VAR_7, VAR_16, VAR_18, 0,
        (void *) VAR_9, VAR_11) < 0)
     goto out_err;
   } else {




    VAR_24->sin6_scope_id = VAR_17;
    if (FUNC_9(VAR_7, &VAR_13, 0) < 0)
     goto out_err;
   }
  } else {
   int VAR_25;

   VAR_25 = FUNC_9(VAR_7, &VAR_13, 0);
   if (VAR_25 < 0) {
    if (VAR_3 == VAR_2 && VAR_6) {
     VAR_6 = 0;
     if (!FUNC_11(VAR_7))
      goto again;
     VAR_3 = VAR_2;
    }
    goto out_err;
   }
  }
  FUNC_5("Sent message:\n");
  FUNC_5("    %.24s%s\n", VAR_16, VAR_18 > 24 ? " ..." : "");
 }

 return 1;
out_err:
 FUNC_3("failed to send msg to peer");
 return -1;
}
