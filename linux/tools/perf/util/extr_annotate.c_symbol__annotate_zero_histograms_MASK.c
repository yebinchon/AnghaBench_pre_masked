
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct symbol {int dummy; } ;
struct cyc_hist {int dummy; } ;
struct annotation {int lock; TYPE_1__* src; } ;
struct TYPE_2__ {int nr_histograms; int sizeof_sym_hist; scalar_t__ cycles_hist; scalar_t__ histograms; } ;


 int FUNC_0 (scalar_t__,int ,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 struct annotation* FUNC_3 (struct symbol*) ;
 int FUNC_4 (struct symbol*) ;

void FUNC_5(struct symbol *VAR_0)
{
 struct annotation *VAR_1 = FUNC_3(VAR_0);

 FUNC_1(&VAR_1->lock);
 if (VAR_1->src != ((void*)0)) {
  FUNC_0(VAR_1->src->histograms, 0,
         VAR_1->src->nr_histograms * VAR_1->src->sizeof_sym_hist);
  if (VAR_1->src->cycles_hist)
   FUNC_0(VAR_1->src->cycles_hist, 0,
    FUNC_4(VAR_0) * sizeof(struct cyc_hist));
 }
 FUNC_2(&VAR_1->lock);
}
