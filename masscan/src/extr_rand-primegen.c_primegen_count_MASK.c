
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
typedef int uint32_t ;
struct TYPE_5__ {int num; scalar_t__* p; int pos; scalar_t__ base; int** buf; int L; } ;
typedef TYPE_1__ primegen ;


 int VAR_0 ;
 int VAR_1 ;
 int* VAR_2 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;

uint64_t FUNC_2(primegen *VAR_3,uint64_t VAR_4)
{
  uint64_t VAR_5 = 0;

  for (;;) {
    register int VAR_6;
    register int VAR_7;
    register uint32_t VAR_8;
    register uint32_t VAR_9;
    while (VAR_3->num) {
      if (VAR_3->p[VAR_3->num - 1] >= VAR_4) return VAR_5;
      ++VAR_5;
      --VAR_3->num;
    }

    VAR_9 = 0;
    VAR_6 = VAR_3->pos;
    while ((VAR_6 < VAR_1) && (VAR_3->base + 1920 < VAR_4)) {
      for (VAR_7 = 0;VAR_7 < 16;++VAR_7) {
    VAR_8 = ~VAR_3->buf[VAR_7][VAR_6];
    VAR_9 += VAR_2[VAR_8 & 255]; VAR_8 >>= 8;
    VAR_9 += VAR_2[VAR_8 & 255]; VAR_8 >>= 8;
    VAR_9 += VAR_2[VAR_8 & 255]; VAR_8 >>= 8;
    VAR_9 += VAR_2[VAR_8 & 255];
      }
      VAR_3->base += 1920;
      ++VAR_6;
    }
    VAR_3->pos = VAR_6;
    VAR_5 += VAR_9;

    if (VAR_6 == VAR_1)
      while (VAR_3->base + VAR_0 * 60 < VAR_4) {
        FUNC_1(VAR_3);
        VAR_3->L += VAR_0;

    VAR_9 = 0;
        for (VAR_7 = 0;VAR_7 < 16;++VAR_7)
      for (VAR_6 = 0;VAR_6 < VAR_1;++VAR_6) {
        VAR_8 = ~VAR_3->buf[VAR_7][VAR_6];
        VAR_9 += VAR_2[VAR_8 & 255]; VAR_8 >>= 8;
        VAR_9 += VAR_2[VAR_8 & 255]; VAR_8 >>= 8;
        VAR_9 += VAR_2[VAR_8 & 255]; VAR_8 >>= 8;
        VAR_9 += VAR_2[VAR_8 & 255];
      }
        VAR_5 += VAR_9;
        VAR_3->base += VAR_0 * 60;
      }

    FUNC_0(VAR_3);
  }
}
