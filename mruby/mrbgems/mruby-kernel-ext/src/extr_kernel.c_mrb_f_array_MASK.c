
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mrb_value ;
typedef int mrb_state ;


 int VAR_0 ;
 int FUNC_0 (int *,int,int *) ;
 int FUNC_1 (int *,int ,int ,char*,char*) ;
 int FUNC_2 (int *,char*,int *) ;
 scalar_t__ FUNC_3 (int ) ;

__attribute__((used)) static mrb_value
FUNC_4(mrb_state *VAR_1, mrb_value VAR_2)
{
  mrb_value VAR_3, VAR_4;

  FUNC_2(VAR_1, "o", &VAR_3);
  VAR_4 = FUNC_1(VAR_1, VAR_3, VAR_0, "Array", "to_a");
  if (FUNC_3(VAR_4)) {
    return FUNC_0(VAR_1, 1, &VAR_3);
  }

  return VAR_4;
}
