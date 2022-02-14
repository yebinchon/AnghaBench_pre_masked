
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int ndigits; int * digits; int sign; int dscale; int rscale; int weight; } ;
typedef TYPE_1__ numeric ;
struct TYPE_6__ {int ndigits; int * digits; int sign; int dscale; int rscale; int weight; } ;
typedef TYPE_2__ decimal ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

int
FUNC_0(numeric *VAR_3, decimal *VAR_4)
{
 int VAR_5;

 if (VAR_3->ndigits > VAR_0)
 {
  VAR_2 = VAR_1;
  return -1;
 }

 VAR_4->weight = VAR_3->weight;
 VAR_4->rscale = VAR_3->rscale;
 VAR_4->dscale = VAR_3->dscale;
 VAR_4->sign = VAR_3->sign;
 VAR_4->ndigits = VAR_3->ndigits;

 for (VAR_5 = 0; VAR_5 < VAR_3->ndigits; VAR_5++)
  VAR_4->digits[VAR_5] = VAR_3->digits[VAR_5];

 return 0;
}
