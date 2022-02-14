
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval {scalar_t__ tv_sec; } ;
struct sockaddr_in6 {int dummy; } ;
struct sock_args {scalar_t__ type; scalar_t__ password; scalar_t__ bind_test_only; scalar_t__ has_grp; } ;
typedef int socklen_t ;
typedef int fd_set ;
typedef int addr ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int,int *) ;
 int FUNC_1 (int,int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ VAR_1 ;
 int FUNC_3 (int,void*,int*) ;
 int FUNC_4 (int,struct sock_args*) ;
 int FUNC_5 (int) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_6 (char*) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (struct sock_args*) ;
 int FUNC_9 (int ,int,void*,int,struct sock_args*) ;
 int FUNC_10 (struct sock_args*) ;
 scalar_t__ VAR_4 ;
 int FUNC_11 (int,int *,int *,int *,struct timeval*) ;
 int FUNC_12 (int,struct sock_args*) ;
 scalar_t__ FUNC_13 (int,struct sock_args*) ;

__attribute__((used)) static int FUNC_14(struct sock_args *VAR_5)
{
 struct timeval VAR_6 = { .tv_sec = VAR_4 }, *VAR_7 = ((void*)0);
 unsigned char VAR_8[sizeof(struct sockaddr_in6)] = {};
 socklen_t VAR_9 = sizeof(VAR_8);
 int VAR_10, VAR_11 = -1;

 fd_set VAR_12;
 int VAR_13;

 if (VAR_4)
  VAR_7 = &VAR_6;

 if (VAR_5->has_grp)
  VAR_10 = FUNC_10(VAR_5);
 else
  VAR_10 = FUNC_8(VAR_5);

 if (VAR_10 < 0)
  return 1;

 if (VAR_5->bind_test_only) {
  FUNC_5(VAR_10);
  return 0;
 }

 if (VAR_5->type != VAR_1) {
  VAR_13 = FUNC_9(0, VAR_10, (void *) VAR_8, VAR_9, VAR_5);
  FUNC_5(VAR_10);
  return VAR_13;
 }

 if (VAR_5->password && FUNC_13(VAR_10, VAR_5)) {
  FUNC_5(VAR_10);
  return -1;
 }

 while (1) {
  FUNC_7("\n");
  FUNC_7("waiting for client connection.\n");
  FUNC_2(&VAR_12);
  FUNC_1(VAR_10, &VAR_12);

  VAR_13 = FUNC_11(VAR_10+1, &VAR_12, ((void*)0), ((void*)0), VAR_7);
  if (VAR_13 == 0) {
   VAR_13 = 2;
   break;
  }

  if (VAR_13 < 0) {
   if (VAR_2 == VAR_0)
    continue;

   FUNC_6("select failed");
   break;
  }

  if (FUNC_0(VAR_10, &VAR_12)) {

   VAR_11 = FUNC_3(VAR_10, (void *) VAR_8, &VAR_9);
   if (VAR_11 < 0) {
    FUNC_6("accept failed");
    break;
   }

   VAR_13 = FUNC_12(VAR_11, VAR_5);
   if (VAR_13)
    break;

   VAR_13 = FUNC_4(VAR_11, VAR_5);
   if (VAR_13)
    break;
  }

  VAR_13 = FUNC_9(0, VAR_11, (void *) VAR_8, VAR_9, VAR_5);
  FUNC_5(VAR_11);

  if (!VAR_3)
   break;
 }

 FUNC_5(VAR_10);

 return VAR_13;
}
