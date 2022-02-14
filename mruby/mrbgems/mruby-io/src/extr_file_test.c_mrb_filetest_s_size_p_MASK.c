
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {scalar_t__ st_size; } ;
typedef int mrb_value ;
typedef int mrb_state ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int *,char*,int *) ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 (int *,int ,struct stat*) ;

mrb_value
FUNC_4(mrb_state *VAR_0, mrb_value VAR_1)
{
  struct stat VAR_2;
  mrb_value VAR_3;

  FUNC_1(VAR_0, "o", &VAR_3);

  if (FUNC_3(VAR_0, VAR_3, &VAR_2) < 0)
    return FUNC_2();
  if (VAR_2.st_size == 0)
    return FUNC_2();

  return FUNC_0(VAR_2.st_size);
}
