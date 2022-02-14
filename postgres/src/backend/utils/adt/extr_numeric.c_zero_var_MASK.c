
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int sign; scalar_t__ weight; scalar_t__ ndigits; int * digits; int * buf; } ;
typedef TYPE_1__ NumericVar ;


 int VAR_0 ;
 int FUNC_0 (int *) ;

__attribute__((used)) static void
FUNC_1(NumericVar *VAR_1)
{
 FUNC_0(VAR_1->buf);
 VAR_1->buf = ((void*)0);
 VAR_1->digits = ((void*)0);
 VAR_1->ndigits = 0;
 VAR_1->weight = 0;
 VAR_1->sign = VAR_0;
}
