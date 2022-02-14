
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int start_pos; int* ch; } ;
struct tr_pattern {scalar_t__ flag_reverse; scalar_t__ type; int n; struct tr_pattern* next; TYPE_1__ val; } ;
typedef scalar_t__ mrb_int ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int) ;

__attribute__((used)) static inline mrb_int
FUNC_1(const struct tr_pattern *VAR_4, const char *VAR_5, int VAR_6)
{
  mrb_int VAR_7 = -1;
  mrb_int VAR_8 = 0;
  mrb_int VAR_9 = VAR_4 ? VAR_4->flag_reverse : 0;

  while (VAR_4 != ((void*)0)) {
    if (VAR_4->type == VAR_1) {
      int VAR_10;
      for (VAR_10 = 0; VAR_10 < VAR_4->n; VAR_10++) {
 if (VAR_5[VAR_4->val.start_pos + VAR_10] == VAR_6) VAR_7 = VAR_8 + VAR_10;
      }
    }
    else if (VAR_4->type == VAR_2) {
      if (VAR_4->val.ch[0] <= VAR_6 && VAR_6 <= VAR_4->val.ch[1])
        VAR_7 = VAR_8 + VAR_6 - VAR_4->val.ch[0];
    }
    else {
      FUNC_0(VAR_4->type == VAR_3);
    }
    VAR_8 += VAR_4->n;
    VAR_4 = VAR_4->next;
  }

  if (VAR_9) {
    return (VAR_7 < 0) ? VAR_0 : -1;
  }
  return VAR_7;
}
