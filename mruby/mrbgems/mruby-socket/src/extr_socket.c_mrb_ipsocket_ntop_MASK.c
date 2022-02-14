
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mrb_value ;
typedef int mrb_state ;
typedef scalar_t__ mrb_int ;
typedef int buf ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int * FUNC_0 (int,char*,char*,int) ;
 int FUNC_1 (int *,char*,scalar_t__*,char**,scalar_t__*) ;
 int FUNC_2 (int *,int ,char*) ;
 int FUNC_3 (int *,char*) ;

__attribute__((used)) static mrb_value
FUNC_4(mrb_state *VAR_3, mrb_value VAR_4)
{
  mrb_int VAR_5, VAR_6;
  char *VAR_7, VAR_8[50];

  FUNC_1(VAR_3, "is", &VAR_5, &VAR_7, &VAR_6);
  if ((VAR_5 == VAR_0 && VAR_6 != 4) || (VAR_5 == VAR_1 && VAR_6 != 16))
    FUNC_2(VAR_3, VAR_2, "invalid address");
  if (FUNC_0((int)VAR_5, VAR_7, VAR_8, sizeof(VAR_8)) == ((void*)0))
    FUNC_2(VAR_3, VAR_2, "invalid address");
  return FUNC_3(VAR_3, VAR_8);
}
