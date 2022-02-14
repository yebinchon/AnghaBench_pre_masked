
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_storage {int dummy; } ;
struct sockaddr_in6 {int dummy; } ;
struct sockaddr_in {int dummy; } ;
struct sockaddr {int dummy; } ;
struct msghdr {int msg_iovlen; char* msg_control; int msg_controllen; int msg_flags; struct iovec* msg_iov; scalar_t__ msg_namelen; int * msg_name; } ;
struct iovec {char* iov_base; int iov_len; } ;
struct cmsghdr {scalar_t__ cmsg_level; scalar_t__ cmsg_type; } ;
typedef int pthread_t ;
typedef int one ;
typedef int cmsgbuf ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct cmsghdr*) ;
 struct cmsghdr* FUNC_1 (struct msghdr*) ;
 struct cmsghdr* FUNC_2 (struct msghdr*,struct cmsghdr*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int,struct sockaddr const*,int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int,struct sockaddr const*,int) ;
 int VAR_12 ;
 int FUNC_7 (int,int ,char*) ;
 int FUNC_8 (int) ;
 int VAR_13 ;
 int FUNC_9 (int ,char*,int) ;
 int FUNC_10 (char*) ;
 int FUNC_11 (int,char**,char*) ;
 int FUNC_12 (int,int) ;
 char* FUNC_13 (int) ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_14 (char*) ;
 scalar_t__ FUNC_15 (int *,int *,int ,void*) ;
 int FUNC_16 (int,struct msghdr*,int ) ;
 scalar_t__ FUNC_17 (int,scalar_t__,int ,int*,int) ;
 int FUNC_18 (int ,struct sockaddr_storage*) ;
 int FUNC_19 (int ,int ,int ) ;
 int VAR_16 ;
 int VAR_17 ;

int FUNC_20(int VAR_18, char *VAR_19[])
{
 struct sockaddr_storage VAR_20, VAR_21;
 int VAR_22, VAR_23 = 1, VAR_24 = -1;
 pthread_t VAR_25;
 char VAR_26[VAR_1];
 struct iovec VAR_27[1];
 struct cmsghdr *VAR_28;
 struct msghdr VAR_29;
 int VAR_30, VAR_31;
 char *VAR_32;

 while ((VAR_22 = FUNC_11(VAR_18, VAR_19, "46p:")) != -1) {
  switch (VAR_22) {
  case '4':
   VAR_13 = VAR_3;
   VAR_11 = sizeof(struct sockaddr_in);
   break;
  case '6':
   VAR_13 = VAR_4;
   VAR_11 = sizeof(struct sockaddr_in6);
   break;
  case 'p':
   VAR_15 = FUNC_3(VAR_14);
   break;
  }
 }

 VAR_30 = FUNC_19(VAR_13, VAR_5, 0);
 if (VAR_30 < 0)
  FUNC_7(1, VAR_12, "server socket");
 FUNC_18(VAR_13, &VAR_20);
 if (FUNC_17(VAR_30, VAR_6, VAR_8,
         &VAR_23, sizeof(VAR_23)) != 0)
  FUNC_7(1, VAR_12, "setsockopt(SO_REUSEADDR)");
 if (FUNC_4(VAR_30, (const struct sockaddr *)&VAR_20,
   VAR_11) == -1)
  FUNC_7(1, VAR_12, "bind");
 if (FUNC_12(VAR_30, 128) == -1)
  FUNC_7(1, VAR_12, "listen");
 if (FUNC_15(&VAR_25, ((void*)0), VAR_16,
      (void *)(unsigned long)VAR_30) != 0)
  FUNC_7(1, VAR_12, "pthread_create");

 VAR_31 = FUNC_19(VAR_13, VAR_5, 0);
 if (VAR_31 < 0)
  FUNC_7(1, VAR_12, "client socket");
 FUNC_18(VAR_13, &VAR_21);
 if (FUNC_6(VAR_31, (const struct sockaddr *)&VAR_21, VAR_11) == -1)
  FUNC_7(1, VAR_12, "connect");
 if (FUNC_17(VAR_31, VAR_7, VAR_10, &VAR_23, sizeof(VAR_23)) != 0)
  FUNC_7(1, VAR_12, "setsockopt(TCP_INQ)");

 VAR_29.msg_name = ((void*)0);
 VAR_29.msg_namelen = 0;
 VAR_29.msg_iov = VAR_27;
 VAR_29.msg_iovlen = 1;
 VAR_29.msg_control = VAR_26;
 VAR_29.msg_controllen = sizeof(VAR_26);
 VAR_29.msg_flags = 0;

 VAR_32 = FUNC_13(VAR_0);
 VAR_27[0].iov_base = VAR_32;
 VAR_27[0].iov_len = VAR_0 / 2;

 if (FUNC_16(VAR_31, &VAR_29, 0) != VAR_27[0].iov_len)
  FUNC_7(1, VAR_12, "recvmsg");
 if (VAR_29.msg_flags & VAR_2)
  FUNC_7(1, 0, "control message is truncated");

 for (VAR_28 = FUNC_1(&VAR_29); VAR_28; VAR_28 = FUNC_2(&VAR_29, VAR_28))
  if (VAR_28->cmsg_level == VAR_7 && VAR_28->cmsg_type == VAR_9)
   VAR_24 = *((int *) FUNC_0(VAR_28));

 if (VAR_24 != VAR_0 - VAR_27[0].iov_len) {
  FUNC_9(VAR_17, "unexpected inq: %d\n", VAR_24);
  FUNC_8(1);
 }

 FUNC_14("PASSED\n");
 FUNC_10(VAR_32);
 FUNC_5(VAR_31);
 return 0;
}
