
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int max_size; int * queue; scalar_t__ size; } ;
typedef int HistogramPair ;
typedef TYPE_1__ HistoQueue ;


 scalar_t__ FUNC_0 (int,int) ;

__attribute__((used)) static int FUNC_1(HistoQueue* const VAR_0, const int VAR_1) {
  VAR_0->size = 0;
  VAR_0->max_size = VAR_1;


  VAR_0->queue = (HistogramPair*)FUNC_0(
      VAR_0->max_size + 1, sizeof(*VAR_0->queue));
  return VAR_0->queue != ((void*)0);
}
