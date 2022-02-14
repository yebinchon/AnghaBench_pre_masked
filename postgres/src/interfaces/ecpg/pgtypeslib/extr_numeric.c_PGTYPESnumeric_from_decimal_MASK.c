
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int * digits; int sign; int dscale; int rscale; int weight; } ;
typedef TYPE_1__ numeric ;
struct TYPE_8__ {int ndigits; int * digits; int sign; int dscale; int rscale; int weight; } ;
typedef TYPE_2__ decimal ;


 scalar_t__ FUNC_0 (TYPE_1__*,int) ;
 int FUNC_1 (TYPE_1__*) ;

int
FUNC_2(decimal *VAR_0, numeric *VAR_1)
{
 int VAR_2;

 FUNC_1(VAR_1);

 VAR_1->weight = VAR_0->weight;
 VAR_1->rscale = VAR_0->rscale;
 VAR_1->dscale = VAR_0->dscale;
 VAR_1->sign = VAR_0->sign;

 if (FUNC_0(VAR_1, VAR_0->ndigits) != 0)
  return -1;

 for (VAR_2 = 0; VAR_2 < VAR_0->ndigits; VAR_2++)
  VAR_1->digits[VAR_2] = VAR_0->digits[VAR_2];

 return 0;
}
