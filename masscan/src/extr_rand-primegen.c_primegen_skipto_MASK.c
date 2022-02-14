
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct TYPE_4__ {int num; scalar_t__* p; int pos; scalar_t__ base; int L; } ;
typedef TYPE_1__ primegen ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;

void FUNC_1(primegen *VAR_2,uint64_t VAR_3)
{
  for (;;) {
    int VAR_4;
    while (VAR_2->num) {
      if (VAR_2->p[VAR_2->num - 1] >= VAR_3) return;
      --VAR_2->num;
    }

    VAR_4 = VAR_2->pos;
    while ((VAR_4 < VAR_1) && (VAR_2->base + 1920 < VAR_3)) {
      VAR_2->base += 1920;
      ++VAR_4;
    }
    VAR_2->pos = VAR_4;
    if (VAR_4 == VAR_1)
      while (VAR_2->base + VAR_0 * 60 < VAR_3) {
        VAR_2->L += VAR_0;
        VAR_2->base += VAR_0 * 60;
      }

    FUNC_0(VAR_2);
  }
}
