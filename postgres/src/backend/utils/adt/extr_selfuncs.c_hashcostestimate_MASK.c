
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int costs ;
struct TYPE_4__ {double indexCorrelation; double numIndexPages; int indexSelectivity; int indexTotalCost; int indexStartupCost; } ;
typedef int Selectivity ;
typedef int PlannerInfo ;
typedef int IndexPath ;
typedef TYPE_1__ GenericCosts ;
typedef int Cost ;


 int FUNC_0 (TYPE_1__*,int ,int) ;
 int FUNC_1 (int *,int *,double,TYPE_1__*) ;

void
FUNC_2(PlannerInfo *VAR_0, IndexPath *VAR_1, double VAR_2,
     Cost *VAR_3, Cost *VAR_4,
     Selectivity *VAR_5, double *VAR_6,
     double *VAR_7)
{
 GenericCosts VAR_8;

 FUNC_0(&VAR_8, 0, sizeof(VAR_8));

 FUNC_1(VAR_0, VAR_1, VAR_2, &VAR_8);
 *VAR_3 = VAR_8.indexStartupCost;
 *VAR_4 = VAR_8.indexTotalCost;
 *VAR_5 = VAR_8.indexSelectivity;
 *VAR_6 = VAR_8.indexCorrelation;
 *VAR_7 = VAR_8.numIndexPages;
}
