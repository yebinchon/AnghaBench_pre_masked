
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int costs ;
struct TYPE_10__ {int indexStartupCost; int indexTotalCost; int num_sa_scans; double indexCorrelation; double numIndexPages; int indexSelectivity; } ;
struct TYPE_9__ {int tree_height; int pages; int tuples; } ;
struct TYPE_8__ {TYPE_2__* indexinfo; } ;
typedef int Selectivity ;
typedef int PlannerInfo ;
typedef TYPE_1__ IndexPath ;
typedef TYPE_2__ IndexOptInfo ;
typedef TYPE_3__ GenericCosts ;
typedef int Cost ;


 int FUNC_0 (TYPE_3__*,int ,int) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int FUNC_2 (int *,TYPE_1__*,double,TYPE_3__*) ;
 int FUNC_3 (double) ;

void
FUNC_4(PlannerInfo *VAR_1, IndexPath *VAR_2, double VAR_3,
     Cost *VAR_4, Cost *VAR_5,
     Selectivity *VAR_6, double *VAR_7,
     double *VAR_8)
{
 IndexOptInfo *VAR_9 = VAR_2->indexinfo;
 GenericCosts VAR_10;
 Cost VAR_11;

 FUNC_0(&VAR_10, 0, sizeof(VAR_10));

 FUNC_2(VAR_1, VAR_2, VAR_3, &VAR_10);
 if (VAR_9->tree_height < 0)
 {
  if (VAR_9->pages > 1)
   VAR_9->tree_height = (int) (FUNC_3(VAR_9->pages) / FUNC_3(100.0));
  else
   VAR_9->tree_height = 0;
 }






 if (VAR_9->tuples > 1)
 {
  VAR_11 = FUNC_1(FUNC_3(VAR_9->tuples)) * VAR_0;
  VAR_10.indexStartupCost += VAR_11;
  VAR_10.indexTotalCost += VAR_10.num_sa_scans * VAR_11;
 }




 VAR_11 = (VAR_9->tree_height + 1) * 50.0 * VAR_0;
 VAR_10.indexStartupCost += VAR_11;
 VAR_10.indexTotalCost += VAR_10.num_sa_scans * VAR_11;

 *VAR_4 = VAR_10.indexStartupCost;
 *VAR_5 = VAR_10.indexTotalCost;
 *VAR_6 = VAR_10.indexSelectivity;
 *VAR_7 = VAR_10.indexCorrelation;
 *VAR_8 = VAR_10.numIndexPages;
}
