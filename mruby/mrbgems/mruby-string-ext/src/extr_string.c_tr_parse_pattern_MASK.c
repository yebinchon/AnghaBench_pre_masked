
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {char* ch; int start_pos; } ;
struct tr_pattern {scalar_t__ type; int flag_on_heap; char n; struct tr_pattern* next; TYPE_1__ val; void* flag_reverse; } ;
typedef int mrb_value ;
struct TYPE_9__ {int nomem_err; } ;
typedef TYPE_2__ mrb_state ;
typedef int mrb_int ;
typedef void* mrb_bool ;


 int VAR_0 ;
 void* VAR_1 ;
 int FUNC_0 (int const) ;
 char* FUNC_1 (int const) ;
 void* VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (TYPE_2__*,int ) ;
 scalar_t__ FUNC_3 (TYPE_2__*,int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (TYPE_2__*,int ,char*) ;
 int FUNC_6 (TYPE_2__*,struct tr_pattern*) ;

__attribute__((used)) static struct tr_pattern*
FUNC_7(mrb_state *VAR_7, struct tr_pattern *VAR_8, const mrb_value VAR_9, mrb_bool VAR_10)
{
  const char *VAR_11 = FUNC_1(VAR_9);
  mrb_int VAR_12 = FUNC_0(VAR_9);
  mrb_bool VAR_13 = VAR_1;
  struct tr_pattern *VAR_14;
  mrb_int VAR_15 = 0;

  if(VAR_10 && VAR_12 >= 2 && VAR_11[0] == '^') {
    VAR_13 = VAR_2;
    VAR_15++;
  }

  while (VAR_15 < VAR_12) {

    mrb_bool const VAR_16 = (VAR_8->type == VAR_5);
    VAR_14 = VAR_16
           ? VAR_8
           : (struct tr_pattern*)FUNC_3(VAR_7, sizeof(struct tr_pattern));
    if ((VAR_15+2) < VAR_12 && VAR_11[VAR_15] != '\\' && VAR_11[VAR_15+1] == '-') {
      if (VAR_14 == ((void*)0) && VAR_8) {
      nomem:
        FUNC_6(VAR_7, VAR_8);
        FUNC_2(VAR_7, FUNC_4(VAR_7->nomem_err));
        return ((void*)0);
      }
      VAR_14->type = VAR_4;
      VAR_14->flag_reverse = VAR_13;
      VAR_14->flag_on_heap = !VAR_16;
      VAR_14->n = VAR_11[VAR_15+2] - VAR_11[VAR_15] + 1;
      VAR_14->next = ((void*)0);
      VAR_14->val.ch[0] = VAR_11[VAR_15];
      VAR_14->val.ch[1] = VAR_11[VAR_15+2];
      VAR_15 += 3;
    }
    else {

      mrb_int VAR_17 = VAR_15++;
      mrb_int VAR_18;

      while (VAR_15 < VAR_12) {
 if ((VAR_15+2) < VAR_12 && VAR_11[VAR_15] != '\\' && VAR_11[VAR_15+1] == '-')
          break;
 VAR_15++;
      }

      VAR_18 = VAR_15 - VAR_17;
      if (VAR_18 > VAR_6) {
        FUNC_5(VAR_7, VAR_0, "tr pattern too long (max 65536)");
      }
      if (VAR_14 == ((void*)0) && VAR_8) {
        goto nomem;
      }
      VAR_14->type = VAR_3;
      VAR_14->flag_reverse = VAR_13;
      VAR_14->flag_on_heap = !VAR_16;
      VAR_14->n = VAR_18;
      VAR_14->next = ((void*)0);
      VAR_14->val.start_pos = VAR_17;
    }

    if (VAR_8 == ((void*)0) || VAR_16) {
      VAR_8 = VAR_14;
    }
    else {
      struct tr_pattern *VAR_19 = VAR_8;
      while (VAR_19->next != ((void*)0)) {
        VAR_19 = VAR_19->next;
      }
      VAR_19->next = VAR_14;
    }
  }

  return VAR_8;
}
