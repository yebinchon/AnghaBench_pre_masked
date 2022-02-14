
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int * lpVtbl; } ;
struct TYPE_8__ {int ref; TYPE_1__ IParseDisplayName_iface; } ;
typedef TYPE_2__* LPVOID ;
typedef int IUnknown ;
typedef TYPE_2__ ITS_IParseDisplayNameImpl ;
typedef int HRESULT ;


 int VAR_0 ;
 int FUNC_0 () ;
 TYPE_2__* FUNC_1 (int ,int ,int) ;
 int FUNC_2 () ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (char*,TYPE_2__*) ;

HRESULT FUNC_4(IUnknown *VAR_3, LPVOID *VAR_4)
{
    ITS_IParseDisplayNameImpl *VAR_5;

    if( VAR_3 )
        return VAR_0;

    VAR_5 = FUNC_1( FUNC_0(), 0, sizeof(ITS_IParseDisplayNameImpl) );
    VAR_5->IParseDisplayName_iface.lpVtbl = &VAR_1;
    VAR_5->ref = 1;

    FUNC_3("-> %p\n", VAR_5);
    *VAR_4 = VAR_5;

    FUNC_2();
    return VAR_2;
}
