
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int weight; int ndigits; int digits; } ;
typedef TYPE_1__ NumericVar ;


 int FUNC_0 (int ,int ,int ,int ,int ,int ) ;

__attribute__((used)) static int
FUNC_1(const NumericVar *VAR_0, const NumericVar *VAR_1)
{
 return FUNC_0(VAR_0->digits, VAR_0->ndigits, VAR_0->weight,
        VAR_1->digits, VAR_1->ndigits, VAR_1->weight);
}
