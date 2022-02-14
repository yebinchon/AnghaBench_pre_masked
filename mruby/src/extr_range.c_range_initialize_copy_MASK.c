
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct RRange {int dummy; } ;
typedef int mrb_value ;
typedef int mrb_state ;


 int VAR_0 ;
 int FUNC_0 (struct RRange*) ;
 int FUNC_1 (struct RRange*) ;
 int FUNC_2 (struct RRange*) ;
 int FUNC_3 (int *,char*,int *) ;
 int FUNC_4 (int *,int ) ;
 scalar_t__ FUNC_5 (int *,int ,int ) ;
 int FUNC_6 (int *,int ,int ) ;
 int FUNC_7 (int *,int ,char*) ;
 struct RRange* FUNC_8 (int *,int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int *,int ,int ,int ,int ) ;

__attribute__((used)) static mrb_value
FUNC_11(mrb_state *VAR_1, mrb_value VAR_2)
{
  mrb_value VAR_3;
  struct RRange *VAR_4;

  FUNC_3(VAR_1, "o", &VAR_3);

  if (FUNC_5(VAR_1, VAR_2, VAR_3)) return VAR_2;
  if (!FUNC_6(VAR_1, VAR_3, FUNC_4(VAR_1, VAR_2))) {
    FUNC_7(VAR_1, VAR_0, "wrong argument class");
  }

  VAR_4 = FUNC_8(VAR_1, VAR_3);
  FUNC_10(VAR_1, FUNC_9(VAR_2), FUNC_0(VAR_4), FUNC_1(VAR_4), FUNC_2(VAR_4));

  return VAR_2;
}
