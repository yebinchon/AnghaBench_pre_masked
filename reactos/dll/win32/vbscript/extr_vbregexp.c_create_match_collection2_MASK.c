
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int * lpVtbl; } ;
struct TYPE_6__ {int * lpVtbl; } ;
struct TYPE_7__ {int ref; TYPE_3__ IMatchCollection2_iface; TYPE_1__ IMatchCollection_iface; } ;
typedef TYPE_2__ MatchCollection2 ;
typedef TYPE_3__ IMatchCollection2 ;
typedef int HRESULT ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_2__* FUNC_1 (int) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static HRESULT FUNC_3(IMatchCollection2 **VAR_5)
{
    MatchCollection2 *VAR_6;
    HRESULT VAR_7;

    VAR_7 = FUNC_2(VAR_2);
    if(FUNC_0(VAR_7))
        return VAR_7;

    VAR_6 = FUNC_1(sizeof(*VAR_6));
    if(!VAR_6)
        return VAR_0;

    VAR_6->IMatchCollection2_iface.lpVtbl = &VAR_1;
    VAR_6->IMatchCollection_iface.lpVtbl = &VAR_3;

    VAR_6->ref = 1;
    *VAR_5 = &VAR_6->IMatchCollection2_iface;
    return VAR_4;
}
