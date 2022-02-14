
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct RObject {int dummy; } ;
typedef int mrb_value ;
typedef int mrb_state ;


 int FUNC_0 (int *,int ,int ) ;
 struct RObject* FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (int *,char*,int *) ;
 int FUNC_4 (int *,char*) ;
 int FUNC_5 (int *,int ,int ) ;
 int FUNC_6 (int *,struct RObject*,int ,int ) ;
 int FUNC_7 (struct RObject*) ;

__attribute__((used)) static mrb_value
FUNC_8(mrb_state *VAR_0, mrb_value VAR_1)
{
  struct RObject *VAR_2;
  mrb_value VAR_3 = FUNC_5(VAR_0, VAR_1, FUNC_4(VAR_0, "_owner"));
  mrb_value VAR_4 = FUNC_5(VAR_0, VAR_1, FUNC_4(VAR_0, "_name"));
  mrb_value VAR_5 = FUNC_5(VAR_0, VAR_1, FUNC_4(VAR_0, "_proc"));
  mrb_value VAR_6 = FUNC_5(VAR_0, VAR_1, FUNC_4(VAR_0, "_klass"));
  mrb_value VAR_7;

  FUNC_3(VAR_0, "o", &VAR_7);
  FUNC_0(VAR_0, VAR_7, VAR_3);
  VAR_2 = FUNC_1(VAR_0, FUNC_2(VAR_0, "Method"));
  FUNC_6(VAR_0, VAR_2, FUNC_4(VAR_0, "_owner"), VAR_3);
  FUNC_6(VAR_0, VAR_2, FUNC_4(VAR_0, "_recv"), VAR_7);
  FUNC_6(VAR_0, VAR_2, FUNC_4(VAR_0, "_name"), VAR_4);
  FUNC_6(VAR_0, VAR_2, FUNC_4(VAR_0, "_proc"), VAR_5);
  FUNC_6(VAR_0, VAR_2, FUNC_4(VAR_0, "_klass"), VAR_6);

  return FUNC_7(VAR_2);
}
