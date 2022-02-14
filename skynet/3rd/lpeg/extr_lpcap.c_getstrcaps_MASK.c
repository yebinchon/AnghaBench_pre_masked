
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_15__ {int s; } ;
struct TYPE_14__ {TYPE_6__* cap; } ;
struct TYPE_11__ {int e; int s; } ;
struct TYPE_12__ {TYPE_1__ s; TYPE_6__* cp; } ;
struct TYPE_13__ {int isstring; TYPE_2__ u; } ;
typedef TYPE_3__ StrAux ;
typedef TYPE_4__ CapState ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_6__*) ;
 int FUNC_1 (TYPE_6__*) ;
 int FUNC_2 (TYPE_6__*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_4__*) ;

__attribute__((used)) static int FUNC_5 (CapState *VAR_2, StrAux *VAR_3, int VAR_4) {
  int VAR_5 = VAR_4++;
  VAR_3[VAR_5].isstring = 1;
  VAR_3[VAR_5].u.s.s = VAR_2->cap->s;
  if (!FUNC_3(VAR_2->cap++)) {
    while (!FUNC_2(VAR_2->cap)) {
      if (VAR_4 >= VAR_1)
        FUNC_4(VAR_2);
      else if (FUNC_0(VAR_2->cap) == VAR_0)
        VAR_4 = FUNC_5(VAR_2, VAR_3, VAR_4);
      else {
        VAR_3[VAR_4].isstring = 0;
        VAR_3[VAR_4].u.cp = VAR_2->cap;
        FUNC_4(VAR_2);
        VAR_4++;
      }
    }
    VAR_2->cap++;
  }
  VAR_3[VAR_5].u.s.e = FUNC_1(VAR_2->cap - 1);
  return VAR_4;
}
