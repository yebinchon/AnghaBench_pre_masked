
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int dummy; } ;
typedef int mrb_value ;
typedef int mrb_state ;


 int FUNC_0 () ;
 int FUNC_1 (int *,char*,int *) ;
 scalar_t__ FUNC_2 (int *,int ,struct stat*) ;
 int FUNC_3 () ;

mrb_value
FUNC_4(mrb_state *VAR_0, mrb_value VAR_1)
{
  struct stat VAR_2;
  mrb_value VAR_3;

  FUNC_1(VAR_0, "o", &VAR_3);
  if (FUNC_2(VAR_0, VAR_3, &VAR_2) < 0)
    return FUNC_0();

  return FUNC_3();
}
