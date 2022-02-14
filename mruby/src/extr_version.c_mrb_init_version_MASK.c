
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mrb_value ;
typedef int mrb_state ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *,char*,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,int ) ;

void
FUNC_3(mrb_state* VAR_7)
{
  mrb_value VAR_8 = FUNC_2(VAR_7, VAR_6);

  FUNC_0(VAR_7, "RUBY_VERSION", FUNC_2(VAR_7, VAR_5));
  FUNC_0(VAR_7, "RUBY_ENGINE", FUNC_2(VAR_7, VAR_4));
  FUNC_0(VAR_7, "RUBY_ENGINE_VERSION", VAR_8);
  FUNC_0(VAR_7, "MRUBY_VERSION", VAR_8);
  FUNC_0(VAR_7, "MRUBY_RELEASE_NO", FUNC_1(VAR_3));
  FUNC_0(VAR_7, "MRUBY_RELEASE_DATE", FUNC_2(VAR_7, VAR_2));
  FUNC_0(VAR_7, "MRUBY_DESCRIPTION", FUNC_2(VAR_7, VAR_1));
  FUNC_0(VAR_7, "MRUBY_COPYRIGHT", FUNC_2(VAR_7, VAR_0));
}
