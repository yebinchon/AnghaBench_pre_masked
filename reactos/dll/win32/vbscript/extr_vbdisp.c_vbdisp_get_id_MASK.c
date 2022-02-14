
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {TYPE_2__* desc; } ;
typedef TYPE_3__ vbdisp_t ;
typedef int vbdisp_invoke_type_t ;
struct TYPE_7__ {unsigned int prop_cnt; int func_cnt; scalar_t__ typeinfo; TYPE_1__* props; } ;
struct TYPE_6__ {int name; int is_public; } ;
typedef int HRESULT ;
typedef int DISPID ;
typedef int BSTR ;
typedef int BOOL ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__,int *,int,int*) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (TYPE_3__*,int ,int ,int ,int*) ;
 int FUNC_3 (int ,int ) ;

HRESULT FUNC_4(vbdisp_t *VAR_2, BSTR VAR_3, vbdisp_invoke_type_t VAR_4, BOOL VAR_5, DISPID *VAR_6)
{
    unsigned VAR_7;

    if(FUNC_2(VAR_2, VAR_3, VAR_4, VAR_5, VAR_6))
        return VAR_1;

    for(VAR_7=0; VAR_7 < VAR_2->desc->prop_cnt; VAR_7++) {
        if(!VAR_5 && !VAR_2->desc->props[VAR_7].is_public)
            continue;

        if(!FUNC_3(VAR_2->desc->props[VAR_7].name, VAR_3)) {
            *VAR_6 = VAR_7 + VAR_2->desc->func_cnt;
            return VAR_1;
        }
    }

    if(VAR_2->desc->typeinfo) {
        HRESULT VAR_8;

        VAR_8 = FUNC_0(VAR_2->desc->typeinfo, &VAR_3, 1, VAR_6);
        if(FUNC_1(VAR_8))
            return VAR_1;
    }

    *VAR_6 = -1;
    return VAR_0;
}
