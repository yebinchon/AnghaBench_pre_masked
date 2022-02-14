
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval {int tv_sec; scalar_t__ tv_usec; } ;
struct sockaddr_storage {int dummy; } ;
struct msghdr {char* iov_base; int iov_len; int msg_namelen; int msg_iovlen; struct msghdr* msg_iov; struct sockaddr_storage* msg_name; } ;
struct iovec {char* iov_base; int iov_len; int msg_namelen; int msg_iovlen; struct iovec* msg_iov; struct sockaddr_storage* msg_name; } ;
typedef int iov ;
typedef int hdr ;
typedef int fd_set ;
typedef int data ;


 int FUNC_0 (int,int *) ;
 int FUNC_1 (int,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct msghdr*,int ,int) ;
 int FUNC_4 (int,struct msghdr*,int ) ;
 scalar_t__ FUNC_5 (int,int *,int *,int *,struct timeval*) ;

__attribute__((used)) static int FUNC_6(int VAR_0, struct sockaddr_storage *VAR_1)
{
 struct timeval VAR_2;
 struct msghdr VAR_3;
 struct iovec VAR_4;
 char VAR_5[64];
 fd_set VAR_6;

 FUNC_2(&VAR_6);
 FUNC_1(VAR_0, &VAR_6);

 VAR_2.tv_sec = 2;
 VAR_2.tv_usec = 0;

 if (FUNC_5(VAR_0 + 1, &VAR_6, ((void*)0), ((void*)0), &VAR_2) <= 0 ||
     !FUNC_0(VAR_0, &VAR_6))
  return -1;

 FUNC_3(&VAR_4, 0, sizeof(VAR_4));
 VAR_4.iov_base = VAR_5;
 VAR_4.iov_len = sizeof(VAR_5);

 FUNC_3(&VAR_3, 0, sizeof(VAR_3));
 VAR_3.msg_name = VAR_1;
 VAR_3.msg_namelen = sizeof(struct sockaddr_storage);
 VAR_3.msg_iov = &VAR_4;
 VAR_3.msg_iovlen = 1;

 return FUNC_4(VAR_0, &VAR_3, 0);
}
