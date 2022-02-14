
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mrb_value ;
typedef int mrb_state ;
typedef int mrb_bool ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,char*,int *,int *) ;
 int FUNC_4 () ;
 int FUNC_5 (int *,int ,char*,int ) ;

__attribute__((used)) static mrb_value
FUNC_6(mrb_state *VAR_4, mrb_value VAR_5)
{
  mrb_value VAR_6;
  mrb_bool VAR_7;

  FUNC_3(VAR_4, "|S?", &VAR_6, &VAR_7);
  if (!VAR_7 ||
      FUNC_0(VAR_6, VAR_0) ||
      FUNC_0(VAR_6, VAR_1)) {
    return FUNC_1(VAR_4, VAR_5);
  }





  else {
    FUNC_5(VAR_4, VAR_3, "unknown encoding name - %v", VAR_6);
  }

  return FUNC_4();
}
