
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int refs; } ;
typedef TYPE_1__ fz_text ;
typedef int fz_context ;


 TYPE_1__* FUNC_0 (int *,TYPE_1__*,int *) ;

fz_text *
FUNC_1(fz_context *VAR_0, const fz_text *VAR_1)
{
 fz_text *VAR_2 = (fz_text *)VAR_1;

 return FUNC_0(VAR_0, VAR_2, &VAR_2->refs);
}
