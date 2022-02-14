
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int prop_cnt; TYPE_2__* props; } ;
typedef TYPE_1__ jsdisp_t ;
struct TYPE_10__ {scalar_t__ type; int name; } ;
typedef TYPE_2__ dispex_prop_t ;
typedef int HRESULT ;
typedef int DISPID ;
typedef scalar_t__ BOOL ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,TYPE_2__*) ;
 int FUNC_3 (TYPE_1__*,TYPE_2__*) ;

HRESULT FUNC_4(jsdisp_t *VAR_6, DISPID VAR_7, BOOL VAR_8, DISPID *VAR_9)
{
    dispex_prop_t *VAR_10;
    HRESULT VAR_11;

    if(VAR_7 == VAR_0 && !VAR_8) {
        VAR_11 = FUNC_1(VAR_6);
        if(FUNC_0(VAR_11))
            return VAR_11;
    }

    if(VAR_7 + 1 < 0 || VAR_7+1 >= VAR_6->prop_cnt)
        return VAR_4;

    for(VAR_10 = &VAR_6->props[VAR_7 + 1]; VAR_10 < VAR_6->props + VAR_6->prop_cnt; VAR_10++) {
        if(!VAR_10->name || VAR_10->type == VAR_2)
            continue;
        if(VAR_8 && VAR_10->type == VAR_3)
            continue;
        if(!(FUNC_2(VAR_6, VAR_10) & VAR_1))
            continue;
        *VAR_9 = FUNC_3(VAR_6, VAR_10);
        return VAR_5;
    }

    return VAR_4;
}
