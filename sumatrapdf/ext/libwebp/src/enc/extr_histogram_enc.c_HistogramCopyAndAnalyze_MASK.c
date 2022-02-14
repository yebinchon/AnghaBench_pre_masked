
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_9__ {int max_size; TYPE_2__** histograms; } ;
typedef TYPE_1__ VP8LHistogramSet ;
struct TYPE_10__ {int * is_used_; } ;
typedef TYPE_2__ VP8LHistogram ;


 int FUNC_0 (TYPE_2__* const,TYPE_2__*) ;
 int FUNC_1 (TYPE_1__* const,int,int* const) ;
 int FUNC_2 (TYPE_2__* const) ;
 int FUNC_3 (int) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_4(VP8LHistogramSet* const VAR_1,
                                    VP8LHistogramSet* const VAR_2,
                                    int* const VAR_3,
                                    uint16_t* const VAR_4) {
  int VAR_5, VAR_6;
  int VAR_7 = *VAR_3;
  VP8LHistogram** const VAR_8 = VAR_1->histograms;
  VP8LHistogram** const VAR_9 = VAR_2->histograms;
  FUNC_3(VAR_2->max_size == VAR_1->max_size);
  for (VAR_6 = 0, VAR_5 = 0; VAR_5 < VAR_1->max_size; ++VAR_5) {
    VP8LHistogram* const VAR_10 = VAR_8[VAR_5];
    FUNC_2(VAR_10);



    if (!VAR_10->is_used_[0] && !VAR_10->is_used_[1] && !VAR_10->is_used_[2]
        && !VAR_10->is_used_[3] && !VAR_10->is_used_[4]) {



      FUNC_3(VAR_5 > 0);
      FUNC_1(VAR_2, VAR_5, VAR_3);
      FUNC_1(VAR_1, VAR_5, &VAR_7);
      VAR_4[VAR_5] = VAR_0;
    } else {

      FUNC_0(VAR_10, VAR_9[VAR_5]);
      VAR_4[VAR_5] = VAR_6++;
      FUNC_3(VAR_6 <= VAR_2->max_size);
    }
  }
}
