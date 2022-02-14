
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * lpVtbl; } ;
struct services {int refs; TYPE_1__ ISWbemServices_iface; int * services; } ;
typedef int IWbemServices ;
typedef TYPE_1__ ISWbemServices ;
typedef int HRESULT ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 int FUNC_1 (char*,...) ;
 struct services* FUNC_2 (int) ;
 int VAR_2 ;

__attribute__((used)) static HRESULT FUNC_3( IWbemServices *VAR_3, ISWbemServices **VAR_4 )
{
    struct services *VAR_5;

    FUNC_1( "%p, %p\n", VAR_4, VAR_3 );

    if (!(VAR_5 = FUNC_2( sizeof(*VAR_5) ))) return VAR_0;
    VAR_5->ISWbemServices_iface.lpVtbl = &VAR_2;
    VAR_5->refs = 1;
    VAR_5->services = VAR_3;
    FUNC_0( VAR_5->services );

    *VAR_4 = &VAR_5->ISWbemServices_iface;
    FUNC_1( "returning iface %p\n", *VAR_4 );
    return VAR_1;
}
