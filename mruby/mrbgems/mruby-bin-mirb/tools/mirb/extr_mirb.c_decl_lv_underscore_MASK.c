
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mrb_parser_state {int dummy; } ;
struct RProc {int dummy; } ;
typedef int mrbc_context ;
typedef int mrb_state ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (int *) ;
 struct RProc* FUNC_3 (int *,struct mrb_parser_state*) ;
 struct mrb_parser_state* FUNC_4 (int *,char*,int *) ;
 int FUNC_5 (struct mrb_parser_state*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,struct RProc*,int ,int ) ;
 int VAR_1 ;

void FUNC_8(mrb_state *VAR_2, mrbc_context *VAR_3)
{
  struct RProc *VAR_4;
  struct mrb_parser_state *VAR_5;

  VAR_5 = FUNC_4(VAR_2, "_=nil", VAR_3);
  if (VAR_5 == ((void*)0)) {
    FUNC_1("create parser state error\n", VAR_1);
    FUNC_2(VAR_2);
    FUNC_0(VAR_0);
  }

  VAR_4 = FUNC_3(VAR_2, VAR_5);
  FUNC_7(VAR_2, VAR_4, FUNC_6(VAR_2), 0);

  FUNC_5(VAR_5);
}
