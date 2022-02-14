
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct tr_pattern {int dummy; } ;
typedef int mrb_value ;
typedef int mrb_state ;
typedef size_t mrb_int ;


 size_t FUNC_0 (int ) ;
 char* FUNC_1 (int ) ;
 struct tr_pattern VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (size_t) ;
 int FUNC_3 (int *,char*,int *) ;
 int FUNC_4 () ;
 scalar_t__ FUNC_5 (int *,char) ;
 int FUNC_6 (struct tr_pattern*,int ,int *) ;
 int FUNC_7 (int *,struct tr_pattern*) ;
 int FUNC_8 (int *,struct tr_pattern*,int ,int ) ;

__attribute__((used)) static mrb_value
FUNC_9(mrb_state *VAR_2, mrb_value VAR_3)
{
  mrb_value VAR_4 = FUNC_4();
  mrb_int VAR_5;
  char *VAR_6;
  mrb_int VAR_7;
  mrb_int VAR_8 = 0;
  struct tr_pattern VAR_9 = VAR_0;
  uint8_t VAR_10[32];

  FUNC_3(VAR_2, "S", &VAR_4);
  FUNC_8(VAR_2, &VAR_9, VAR_4, VAR_1);
  FUNC_6(&VAR_9, VAR_4, VAR_10);
  FUNC_7(VAR_2, &VAR_9);

  VAR_6 = FUNC_1(VAR_3);
  VAR_7 = FUNC_0(VAR_3);
  for (VAR_5 = 0; VAR_5 < VAR_7; VAR_5++) {
    if (FUNC_5(VAR_10, VAR_6[VAR_5])) VAR_8++;
  }
  return FUNC_2(VAR_8);
}
