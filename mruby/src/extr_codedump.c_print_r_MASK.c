
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int mrb_sym ;
typedef int mrb_state ;
struct TYPE_5__ {size_t nlocals; TYPE_1__* lv; } ;
typedef TYPE_2__ mrb_irep ;
struct TYPE_4__ {size_t r; int name; } ;


 char* FUNC_0 (int *,int ) ;
 int FUNC_1 (char*,int,char*) ;

__attribute__((used)) static void
FUNC_2(mrb_state *VAR_0, mrb_irep *VAR_1, size_t VAR_2)
{
  size_t VAR_3;

  if (VAR_2 == 0) return;

  for (VAR_3=0; VAR_3+1<VAR_1->nlocals; VAR_3++) {
    if (VAR_1->lv[VAR_3].r == VAR_2) {
      mrb_sym VAR_4 = VAR_1->lv[VAR_3].name;
      FUNC_1(" R%d:%s", (int)VAR_2, FUNC_0(VAR_0, VAR_4));
      break;
    }
  }
}
