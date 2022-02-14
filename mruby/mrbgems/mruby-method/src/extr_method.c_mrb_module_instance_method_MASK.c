
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct RProc {int dummy; } ;
typedef struct RProc RObject ;
typedef struct RProc RClass ;
typedef int mrb_value ;
typedef int mrb_sym ;
typedef int mrb_state ;


 int VAR_0 ;
 struct RProc* FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,char*,int *) ;
 int FUNC_4 (int *,char*) ;
 int FUNC_5 () ;
 int FUNC_6 (int *,struct RProc*,int ,int ) ;
 int FUNC_7 (struct RProc*) ;
 int FUNC_8 (int *,int ,int ,int ,struct RProc**,struct RProc**,int ) ;
 int FUNC_9 (int ) ;

__attribute__((used)) static mrb_value
FUNC_10(mrb_state *VAR_1, mrb_value VAR_2)
{
  struct RClass *VAR_3;
  struct RProc *VAR_4;
  struct RObject *VAR_5;
  mrb_sym VAR_6;

  FUNC_3(VAR_1, "n", &VAR_6);

  FUNC_8(VAR_1, FUNC_2(VAR_2), VAR_2, VAR_6, &VAR_3, &VAR_4, VAR_0);

  VAR_5 = FUNC_0(VAR_1, FUNC_1(VAR_1, "UnboundMethod"));
  FUNC_6(VAR_1, VAR_5, FUNC_4(VAR_1, "_owner"), FUNC_7(VAR_3));
  FUNC_6(VAR_1, VAR_5, FUNC_4(VAR_1, "_recv"), FUNC_5());
  FUNC_6(VAR_1, VAR_5, FUNC_4(VAR_1, "_name"), FUNC_9(VAR_6));
  FUNC_6(VAR_1, VAR_5, FUNC_4(VAR_1, "_proc"), VAR_4 ? FUNC_7(VAR_4) : FUNC_5());
  FUNC_6(VAR_1, VAR_5, FUNC_4(VAR_1, "_klass"), VAR_2);

  return FUNC_7(VAR_5);
}
