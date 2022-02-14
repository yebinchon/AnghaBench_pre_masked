
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_13__ {int typelib_idx; } ;
typedef TYPE_2__ type_t ;
struct TYPE_14__ {TYPE_1__* typeinfo; TYPE_5__* typelib; } ;
typedef TYPE_3__ msft_typeinfo_t ;
struct TYPE_15__ {scalar_t__ offset; } ;
typedef TYPE_4__ importinfo_t ;
struct TYPE_16__ {scalar_t__* typelib_typeinfo_offsets; } ;
struct TYPE_12__ {int cImplTypes; scalar_t__ datatype1; } ;
typedef int HRESULT ;


 int VAR_0 ;
 int FUNC_0 (TYPE_5__*,TYPE_2__*) ;
 int FUNC_1 (TYPE_5__*,TYPE_4__*) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static HRESULT FUNC_3(msft_typeinfo_t *VAR_1, type_t *VAR_2, importinfo_t *VAR_3)
{
    if(VAR_3) {
        FUNC_1(VAR_1->typelib, VAR_3);
        VAR_1->typeinfo->datatype1 = VAR_3->offset+1;
    }else {
        if(VAR_2->typelib_idx == -1)
            FUNC_0(VAR_1->typelib, VAR_2);
        if(VAR_2->typelib_idx == -1)
            FUNC_2("add_impl_type: unable to add inherited interface\n");

        VAR_1->typeinfo->datatype1 = VAR_1->typelib->typelib_typeinfo_offsets[VAR_2->typelib_idx];
    }

    VAR_1->typeinfo->cImplTypes++;
    return VAR_0;
}
