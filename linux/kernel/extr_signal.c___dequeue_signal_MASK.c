
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sigpending {int dummy; } ;
typedef int sigset_t ;
typedef int kernel_siginfo_t ;


 int FUNC_0 (int,struct sigpending*,int *,int*) ;
 int FUNC_1 (struct sigpending*,int *) ;

__attribute__((used)) static int FUNC_2(struct sigpending *VAR_0, sigset_t *VAR_1,
   kernel_siginfo_t *VAR_2, bool *VAR_3)
{
 int VAR_4 = FUNC_1(VAR_0, VAR_1);

 if (VAR_4)
  FUNC_0(VAR_4, VAR_0, VAR_2, VAR_3);
 return VAR_4;
}
