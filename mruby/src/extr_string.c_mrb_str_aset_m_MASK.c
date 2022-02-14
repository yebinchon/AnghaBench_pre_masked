
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mrb_value ;
typedef int mrb_state ;


 int FUNC_0 (int *,char*,int *,int *,int *) ;
 int FUNC_1 (int *,int ,int ,int ,int ) ;
 int FUNC_2 () ;

__attribute__((used)) static mrb_value
FUNC_3(mrb_state *VAR_0, mrb_value VAR_1)
{
  mrb_value VAR_2, VAR_3, VAR_4;

  switch (FUNC_0(VAR_0, "oo|S!", &VAR_2, &VAR_3, &VAR_4)) {
    case 2:
      VAR_4 = VAR_3;
      VAR_3 = FUNC_2();
      break;
    case 3:
      break;
  }
  FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4);
  return VAR_1;
}
