
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * lpVtbl; } ;
struct propertyset {int refs; TYPE_1__ ISWbemPropertySet_iface; int * object; } ;
typedef int IWbemClassObject ;
typedef TYPE_1__ ISWbemPropertySet ;
typedef int HRESULT ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 int FUNC_1 (char*,...) ;
 struct propertyset* FUNC_2 (int) ;
 int VAR_2 ;

__attribute__((used)) static HRESULT FUNC_3( IWbemClassObject *VAR_3, ISWbemPropertySet **VAR_4 )
{
    struct propertyset *VAR_5;

    FUNC_1( "%p, %p\n", VAR_4, VAR_3 );

    if (!(VAR_5 = FUNC_2( sizeof(*VAR_5) ))) return VAR_0;
    VAR_5->ISWbemPropertySet_iface.lpVtbl = &VAR_2;
    VAR_5->refs = 1;
    VAR_5->object = VAR_3;
    FUNC_0( VAR_5->object );
    *VAR_4 = &VAR_5->ISWbemPropertySet_iface;

    FUNC_1( "returning iface %p\n", *VAR_4 );
    return VAR_1;
}
