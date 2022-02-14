
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock_fprog {unsigned short len; struct sock_filter* filter; } ;
struct sock_filter {int dummy; } ;


 scalar_t__ FUNC_0 (struct sock_filter*) ;
 int VAR_0 ;
 int VAR_1 ;
 struct sock_filter FUNC_1 (int,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (int) ;
 unsigned long long FUNC_3 () ;
 long FUNC_4 (int ,int,struct sock_fprog*,...) ;
 int FUNC_5 (char*,...) ;
 unsigned long long FUNC_6 (char*,int *,int ) ;
 unsigned long long FUNC_7 (int ,unsigned long long) ;

int FUNC_8(int VAR_7, char *VAR_8[])
{
 struct sock_filter VAR_9[] = {
  FUNC_1(VAR_1|VAR_0, VAR_6),
 };
 struct sock_fprog VAR_10 = {
  .len = (unsigned short)FUNC_0(VAR_9),
  .filter = VAR_9,
 };
 long VAR_11;
 unsigned long long VAR_12;
 unsigned long long VAR_13, VAR_14;

 if (VAR_7 > 1)
  VAR_12 = FUNC_6(VAR_8[1], ((void*)0), 0);
 else
  VAR_12 = FUNC_3();

 FUNC_5("Benchmarking %llu samples...\n", VAR_12);

 VAR_13 = FUNC_7(VAR_2, VAR_12) / VAR_12;
 FUNC_5("getpid native: %llu ns\n", VAR_13);

 VAR_11 = FUNC_4(VAR_3, 1, 0, 0, 0);
 FUNC_2(VAR_11 == 0);

 VAR_11 = FUNC_4(VAR_4, VAR_5, &VAR_10);
 FUNC_2(VAR_11 == 0);

 VAR_14 = FUNC_7(VAR_2, VAR_12) / VAR_12;
 FUNC_5("getpid RET_ALLOW: %llu ns\n", VAR_14);

 FUNC_5("Estimated seccomp overhead per syscall: %llu ns\n",
  VAR_14 - VAR_13);

 if (VAR_14 == VAR_13)
  FUNC_5("Trying running again with more samples.\n");

 return 0;
}
