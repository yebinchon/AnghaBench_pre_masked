
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_12__ {int * lpVtbl; } ;
struct TYPE_10__ {int ref; TYPE_3__ IEnumVARIANT_iface; int size; scalar_t__ i; TYPE_2__* sa; } ;
typedef TYPE_1__ safearray_iter ;
struct TYPE_11__ {int fFeatures; } ;
typedef TYPE_2__ SAFEARRAY ;
typedef TYPE_3__ IEnumVARIANT ;
typedef int HRESULT ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (char*,int) ;
 int VAR_3 ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*) ;
 TYPE_1__* FUNC_4 (int) ;
 int FUNC_5 (TYPE_1__*) ;
 int VAR_4 ;

HRESULT FUNC_6(SAFEARRAY *VAR_5, IEnumVARIANT **VAR_6)
{
    safearray_iter *VAR_7;
    HRESULT VAR_8;

    if(VAR_5 && !(VAR_5->fFeatures & VAR_2)) {
        FUNC_1("enumeration not supported: %x\n", VAR_5->fFeatures);
        return VAR_0;
    }

    VAR_7 = FUNC_4(sizeof(*VAR_7));
    if(!VAR_7)
        return VAR_1;

    if(VAR_5) {
        VAR_8 = FUNC_2(VAR_5);
        if(FUNC_0(VAR_8)) {
            FUNC_5(VAR_7);
            return VAR_8;
        }
    }

    VAR_7->IEnumVARIANT_iface.lpVtbl = &VAR_4;
    VAR_7->ref = 1;
    VAR_7->sa = VAR_5;
    VAR_7->i = 0;
    VAR_7->size = FUNC_3(VAR_5);

    *VAR_6 = &VAR_7->IEnumVARIANT_iface;
    return VAR_3;
}
