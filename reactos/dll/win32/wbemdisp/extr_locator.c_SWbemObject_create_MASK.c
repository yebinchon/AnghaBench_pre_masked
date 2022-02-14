
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * lpVtbl; } ;
struct object {int refs; TYPE_1__ ISWbemObject_iface; int last_dispid_method; int last_dispid; scalar_t__ nb_members; int * members; int * object; } ;
typedef int IWbemClassObject ;
typedef TYPE_1__ ISWbemObject ;
typedef int HRESULT ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int VAR_3 ;
 int FUNC_1 (char*,...) ;
 struct object* FUNC_2 (int) ;
 int VAR_4 ;

__attribute__((used)) static HRESULT FUNC_3( IWbemClassObject *VAR_5, ISWbemObject **VAR_6 )
{
    struct object *VAR_7;

    FUNC_1( "%p, %p\n", VAR_6, VAR_5 );

    if (!(VAR_7 = FUNC_2( sizeof(*VAR_7) ))) return VAR_2;
    VAR_7->ISWbemObject_iface.lpVtbl = &VAR_4;
    VAR_7->refs = 1;
    VAR_7->object = VAR_5;
    FUNC_0( VAR_7->object );
    VAR_7->members = ((void*)0);
    VAR_7->nb_members = 0;
    VAR_7->last_dispid = VAR_0;
    VAR_7->last_dispid_method = VAR_1;

    *VAR_6 = &VAR_7->ISWbemObject_iface;
    FUNC_1( "returning iface %p\n", *VAR_6 );
    return VAR_3;
}
