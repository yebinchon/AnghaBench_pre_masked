
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int wParamFlags; int pparamdescex; } ;
struct TYPE_6__ {TYPE_1__ paramdesc; } ;
struct TYPE_7__ {TYPE_2__ u; int tdesc; } ;
typedef TYPE_3__ ELEMDESC ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(ELEMDESC *VAR_1)
{
    FUNC_1(&VAR_1->tdesc);
    if(VAR_1->u.paramdesc.wParamFlags & VAR_0)
        FUNC_0(VAR_1->u.paramdesc.pparamdescex);
}
