
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mrb_value ;
typedef int mrb_state ;
typedef int mrb_int ;


 int VAR_0 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *,int ,int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int *,char*,int *,int *,int *) ;
 int FUNC_4 () ;
 int FUNC_5 (int *,int ,char*) ;
 int FUNC_6 (int *,char*) ;
 int FUNC_7 (int ,int ,int ,int*) ;

__attribute__((used)) static mrb_value
FUNC_8(mrb_state *VAR_1, mrb_value VAR_2)
{




  mrb_value VAR_3;
  mrb_int VAR_4, VAR_5, VAR_6;
  int VAR_7[2];

  FUNC_3(VAR_1, "iii", &VAR_4, &VAR_5, &VAR_6);
  if (FUNC_7(VAR_4, VAR_5, VAR_6, VAR_7) == -1) {
    FUNC_6(VAR_1, "socketpair");
  }

  VAR_3 = FUNC_0(VAR_1, 2);
  FUNC_1(VAR_1, VAR_3, FUNC_2(VAR_7[0]));
  FUNC_1(VAR_1, VAR_3, FUNC_2(VAR_7[1]));
  return VAR_3;

}
