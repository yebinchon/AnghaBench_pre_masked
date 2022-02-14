
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int val ;
struct timeval {scalar_t__ tv_sec; } ;
typedef int socklen_t ;
typedef int fd_set ;


 int FUNC_0 (int,int *) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (int,int ,int ,int*,int *) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*,...) ;
 scalar_t__ VAR_3 ;
 int FUNC_5 (int ,int *,int *,int *,struct timeval*) ;
 int FUNC_6 (int) ;

__attribute__((used)) static int FUNC_7(int VAR_4)
{
 struct timeval VAR_5 = { .tv_sec = VAR_3 }, *VAR_6 = ((void*)0);
 fd_set VAR_7;
 int VAR_8 = 0, VAR_9 = sizeof(VAR_8);
 int VAR_10;

 FUNC_1(&VAR_7);
 FUNC_0(VAR_4, &VAR_7);

 if (VAR_3)
  VAR_6 = &VAR_5;

 VAR_10 = FUNC_5(VAR_0, ((void*)0), &VAR_7, ((void*)0), VAR_6);
 if (VAR_10 == 0) {
  FUNC_4("connect timed out\n");
  return -2;
 } else if (VAR_10 < 0) {
  FUNC_3("select failed");
  return -3;
 }

 if (FUNC_2(VAR_4, VAR_1, VAR_2, &VAR_8, (socklen_t *)&VAR_9) < 0) {
  FUNC_3("getsockopt(SO_ERROR) failed");
  return -4;
 }

 if (VAR_8 != 0) {
  FUNC_4("connect failed: %d: %s\n", VAR_8, FUNC_6(VAR_8));
  return -1;
 }

 return 0;
}
