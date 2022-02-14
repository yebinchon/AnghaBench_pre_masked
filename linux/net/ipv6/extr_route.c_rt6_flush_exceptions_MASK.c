
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fib6_info {int fib6_nh; scalar_t__ nh; } ;


 int FUNC_0 (int ,struct fib6_info*) ;
 int FUNC_1 (scalar_t__,int ,struct fib6_info*) ;
 int VAR_0 ;

void FUNC_2(struct fib6_info *VAR_1)
{
 if (VAR_1->nh)
  FUNC_1(VAR_1->nh, VAR_0,
      VAR_1);
 else
  FUNC_0(VAR_1->fib6_nh, VAR_1);
}
