
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * lpVtbl; } ;
struct moniker {int refs; TYPE_1__ IMoniker_iface; int * obj; } ;
typedef int IUnknown ;
typedef TYPE_1__ IMoniker ;
typedef int HRESULT ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 int FUNC_1 (char*,TYPE_1__*,...) ;
 struct moniker* FUNC_2 (int) ;
 int VAR_2 ;

__attribute__((used)) static HRESULT FUNC_3( IUnknown *VAR_3, IMoniker **VAR_4 )
{
    struct moniker *VAR_5;

    FUNC_1( "%p, %p\n", VAR_3, VAR_4 );

    if (!(VAR_5 = FUNC_2( sizeof(*VAR_5) ))) return VAR_0;
    VAR_5->IMoniker_iface.lpVtbl = &VAR_2;
    VAR_5->refs = 1;
    VAR_5->obj = VAR_3;
    FUNC_0( VAR_5->obj );

    *VAR_4 = &VAR_5->IMoniker_iface;
    FUNC_1( "returning iface %p\n", *VAR_4 );
    return VAR_1;
}
