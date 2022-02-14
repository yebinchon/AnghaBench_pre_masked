
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * lpVtbl; } ;
struct enumvar {int refs; TYPE_1__ IEnumVARIANT_iface; int * objectenum; } ;
typedef int IEnumWbemClassObject ;
typedef TYPE_1__ IEnumVARIANT ;
typedef int HRESULT ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 int FUNC_1 (char*,TYPE_1__*) ;
 int VAR_2 ;
 struct enumvar* FUNC_2 (int) ;

__attribute__((used)) static HRESULT FUNC_3( IEnumWbemClassObject *VAR_3, IEnumVARIANT **VAR_4 )
{
    struct enumvar *VAR_5;

    if (!(VAR_5 = FUNC_2( sizeof(*VAR_5) ))) return VAR_0;
    VAR_5->IEnumVARIANT_iface.lpVtbl = &VAR_2;
    VAR_5->refs = 1;
    VAR_5->objectenum = VAR_3;
    FUNC_0( VAR_5->objectenum );

    *VAR_4 = &VAR_5->IEnumVARIANT_iface;
    FUNC_1( "returning iface %p\n", *VAR_4 );
    return VAR_1;
}
