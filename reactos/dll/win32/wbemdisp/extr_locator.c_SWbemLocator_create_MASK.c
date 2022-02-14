
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * lpVtbl; } ;
struct locator {int refs; TYPE_1__ ISWbemLocator_iface; int * locator; } ;
typedef int HRESULT ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,void*) ;
 struct locator* FUNC_1 (int) ;
 int VAR_2 ;

HRESULT FUNC_2( void **VAR_3 )
{
    struct locator *VAR_4;

    FUNC_0( "%p\n", VAR_3 );

    if (!(VAR_4 = FUNC_1( sizeof(*VAR_4) ))) return VAR_0;
    VAR_4->ISWbemLocator_iface.lpVtbl = &VAR_2;
    VAR_4->refs = 1;
    VAR_4->locator = ((void*)0);

    *VAR_3 = &VAR_4->ISWbemLocator_iface;
    FUNC_0( "returning iface %p\n", *VAR_3 );
    return VAR_1;
}
