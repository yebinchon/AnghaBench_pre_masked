
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct record {int dummy; } ;
struct TYPE_4__ {int * lpVtbl; } ;
struct class_object {int refs; TYPE_1__ IWbemClassObject_iface; struct record* record; scalar_t__ index_property; scalar_t__ index_method; int index; int * iter; int * name; } ;
typedef int WCHAR ;
typedef int UINT ;
typedef TYPE_1__ IWbemClassObject ;
typedef int IEnumWbemClassObject ;
typedef int HRESULT ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 int FUNC_1 (char*,TYPE_1__*,...) ;
 int VAR_2 ;
 int FUNC_2 (int const*) ;
 struct class_object* FUNC_3 (int) ;
 int FUNC_4 (struct class_object*) ;
 int * FUNC_5 (int const*) ;

HRESULT FUNC_6( const WCHAR *VAR_3, IEnumWbemClassObject *VAR_4, UINT VAR_5,
                             struct record *VAR_6, IWbemClassObject **VAR_7 )
{
    struct class_object *VAR_8;

    FUNC_1("%s, %p\n", FUNC_2(VAR_3), VAR_7);

    VAR_8 = FUNC_3( sizeof(*VAR_8) );
    if (!VAR_8) return VAR_0;

    VAR_8->IWbemClassObject_iface.lpVtbl = &VAR_2;
    VAR_8->refs = 1;
    if (!VAR_3) VAR_8->name = ((void*)0);
    else if (!(VAR_8->name = FUNC_5( VAR_3 )))
    {
        FUNC_4( VAR_8 );
        return VAR_0;
    }
    VAR_8->iter = VAR_4;
    VAR_8->index = VAR_5;
    VAR_8->index_method = 0;
    VAR_8->index_property = 0;
    VAR_8->record = VAR_6;
    if (VAR_4) FUNC_0( VAR_4 );

    *VAR_7 = &VAR_8->IWbemClassObject_iface;

    FUNC_1("returning iface %p\n", *VAR_7);
    return VAR_1;
}
