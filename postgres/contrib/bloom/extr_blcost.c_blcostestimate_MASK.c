
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int costs ;
struct TYPE_10__ {double indexCorrelation; double numIndexPages; int indexSelectivity; int indexTotalCost; int indexStartupCost; int numIndexTuples; } ;
struct TYPE_9__ {int tuples; } ;
struct TYPE_8__ {TYPE_2__* indexinfo; } ;
typedef int Selectivity ;
typedef int PlannerInfo ;
typedef TYPE_1__ IndexPath ;
typedef TYPE_2__ IndexOptInfo ;
typedef TYPE_3__ GenericCosts ;
typedef int Cost ;


 int FUNC_0 (TYPE_3__*,int ,int) ;
 int FUNC_1 (int *,TYPE_1__*,double,TYPE_3__*) ;

void
FUNC_2(PlannerInfo *VAR_0, IndexPath *VAR_1, double VAR_2,
      Cost *VAR_3, Cost *VAR_4,
      Selectivity *VAR_5, double *VAR_6,
      double *VAR_7)
{
 IndexOptInfo *VAR_8 = VAR_1->indexinfo;
 GenericCosts VAR_9;

 FUNC_0(&VAR_9, 0, sizeof(VAR_9));


 VAR_9.numIndexTuples = VAR_8->tuples;


 FUNC_1(VAR_0, VAR_1, VAR_2, &VAR_9);

 *VAR_3 = VAR_9.indexStartupCost;
 *VAR_4 = VAR_9.indexTotalCost;
 *VAR_5 = VAR_9.indexSelectivity;
 *VAR_6 = VAR_9.indexCorrelation;
 *VAR_7 = VAR_9.numIndexPages;
}
