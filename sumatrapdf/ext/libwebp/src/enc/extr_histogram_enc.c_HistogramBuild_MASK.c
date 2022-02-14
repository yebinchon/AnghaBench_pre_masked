
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int * cur_pos; } ;
typedef TYPE_1__ VP8LRefsCursor ;
struct TYPE_9__ {int ** histograms; } ;
typedef TYPE_2__ VP8LHistogramSet ;
typedef int VP8LHistogram ;
typedef int VP8LBackwardRefs ;
typedef int PixOrCopy ;


 scalar_t__ FUNC_0 (int const* const) ;
 int FUNC_1 (int *,int const* const,int *,int ) ;
 int FUNC_2 (TYPE_2__* const) ;
 TYPE_1__ FUNC_3 (int const* const) ;
 int FUNC_4 (TYPE_1__*) ;
 scalar_t__ FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (int,int) ;
 int FUNC_7 (int) ;

__attribute__((used)) static void FUNC_8(
    int VAR_0, int VAR_1, const VP8LBackwardRefs* const VAR_2,
    VP8LHistogramSet* const VAR_3) {
  int VAR_4 = 0, VAR_5 = 0;
  const int VAR_6 = FUNC_6(VAR_0, VAR_1);
  VP8LHistogram** const VAR_7 = VAR_3->histograms;
  VP8LRefsCursor VAR_8 = FUNC_3(VAR_2);
  FUNC_7(VAR_1 > 0);
  FUNC_2(VAR_3);
  while (FUNC_5(&VAR_8)) {
    const PixOrCopy* const VAR_9 = VAR_8.cur_pos;
    const int VAR_10 = (VAR_5 >> VAR_1) * VAR_6 + (VAR_4 >> VAR_1);
    FUNC_1(VAR_7[VAR_10], VAR_9, ((void*)0), 0);
    VAR_4 += FUNC_0(VAR_9);
    while (VAR_4 >= VAR_0) {
      VAR_4 -= VAR_0;
      ++VAR_5;
    }
    FUNC_4(&VAR_8);
  }
}
