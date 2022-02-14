
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mrb_value ;
typedef int mrb_state ;
typedef int mrb_bool ;


 int FUNC_0 (int *,int,int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,char*,int *) ;
 int FUNC_3 (int *,int ,int ,int *) ;
 int VAR_0 ;

__attribute__((used)) static mrb_value
FUNC_4(mrb_state *VAR_1, mrb_value VAR_2)
{
  mrb_value VAR_3;
  mrb_value VAR_4[2];
  mrb_bool VAR_5;
  FUNC_2(VAR_1, "&", &VAR_3);
  VAR_4[0] = FUNC_3(VAR_1, VAR_0, VAR_3, &VAR_5);
  VAR_4[1] = FUNC_1(VAR_5);
  return FUNC_0(VAR_1, 2, VAR_4);
}
