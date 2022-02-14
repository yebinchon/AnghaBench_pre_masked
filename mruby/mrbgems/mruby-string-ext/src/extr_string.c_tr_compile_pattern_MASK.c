
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_2__ {int start_pos; int* ch; } ;
struct tr_pattern {scalar_t__ type; int n; struct tr_pattern* next; TYPE_1__ val; scalar_t__ flag_reverse; } ;
typedef int mrb_value ;
typedef scalar_t__ mrb_int ;


 char* FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int*,char const) ;

__attribute__((used)) static void
FUNC_3(const struct tr_pattern *VAR_3, mrb_value VAR_4, uint8_t VAR_5[32])
{
  const char *VAR_6 = FUNC_0(VAR_4);
  mrb_int VAR_7 = VAR_3 ? VAR_3->flag_reverse : 0;
  int VAR_8;

  for (VAR_8=0; VAR_8<32; VAR_8++) {
    VAR_5[VAR_8] = 0;
  }
  while (VAR_3 != ((void*)0)) {
    if (VAR_3->type == VAR_0) {
      for (VAR_8 = 0; VAR_8 < VAR_3->n; VAR_8++) {
        FUNC_2(VAR_5, VAR_6[VAR_3->val.start_pos + VAR_8]);
      }
    }
    else if (VAR_3->type == VAR_1) {
      for (VAR_8 = VAR_3->val.ch[0]; VAR_8 < VAR_3->val.ch[1]; VAR_8++) {
        FUNC_2(VAR_5, VAR_8);
      }
    }
    else {
      FUNC_1(VAR_3->type == VAR_2);
    }
    VAR_3 = VAR_3->next;
  }

  if (VAR_7) {
    for (VAR_8=0; VAR_8<32; VAR_8++) {
      VAR_5[VAR_8] ^= 0xff;
    }
  }
}
