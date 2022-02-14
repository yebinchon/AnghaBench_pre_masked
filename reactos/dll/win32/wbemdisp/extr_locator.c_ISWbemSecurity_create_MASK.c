
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * lpVtbl; } ;
struct security {int refs; TYPE_1__ ISWbemSecurity_iface; int authlevel; int implevel; } ;
typedef TYPE_1__ ISWbemSecurity ;
typedef int HRESULT ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,...) ;
 struct security* FUNC_1 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static HRESULT FUNC_2( ISWbemSecurity **VAR_5 )
{
    struct security *VAR_6;

    FUNC_0( "%p\n", VAR_5 );

    if (!(VAR_6 = FUNC_1( sizeof(*VAR_6) ))) return VAR_0;
    VAR_6->ISWbemSecurity_iface.lpVtbl = &VAR_2;
    VAR_6->refs = 1;
    VAR_6->implevel = VAR_4;
    VAR_6->authlevel = VAR_3;

    *VAR_5 = &VAR_6->ISWbemSecurity_iface;
    FUNC_0( "returning iface %p\n", *VAR_5 );
    return VAR_1;
}
