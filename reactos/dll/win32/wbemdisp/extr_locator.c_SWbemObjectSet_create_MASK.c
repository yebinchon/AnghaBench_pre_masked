
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * lpVtbl; } ;
struct objectset {int refs; TYPE_1__ ISWbemObjectSet_iface; int * objectenum; int count; } ;
typedef TYPE_1__ ISWbemObjectSet ;
typedef int IEnumWbemClassObject ;
typedef int HRESULT ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (int *) ;
 struct objectset* FUNC_3 (int) ;
 int VAR_2 ;

__attribute__((used)) static HRESULT FUNC_4( IEnumWbemClassObject *VAR_3, ISWbemObjectSet **VAR_4 )
{
    struct objectset *VAR_5;

    FUNC_1( "%p, %p\n", VAR_4, VAR_3 );

    if (!(VAR_5 = FUNC_3( sizeof(*VAR_5) ))) return VAR_0;
    VAR_5->ISWbemObjectSet_iface.lpVtbl = &VAR_2;
    VAR_5->refs = 1;
    VAR_5->objectenum = VAR_3;
    FUNC_0( VAR_5->objectenum );
    VAR_5->count = FUNC_2( VAR_5->objectenum );

    *VAR_4 = &VAR_5->ISWbemObjectSet_iface;
    FUNC_1( "returning iface %p\n", *VAR_4 );
    return VAR_1;
}
