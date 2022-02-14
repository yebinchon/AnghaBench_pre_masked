
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ id; } ;
typedef TYPE_1__ func_info_t ;
struct TYPE_6__ {int func_cnt; TYPE_1__* funcs; } ;
typedef TYPE_2__ dispex_data_t ;
typedef int HRESULT ;
typedef scalar_t__ DISPID ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,scalar_t__) ;

__attribute__((used)) static HRESULT FUNC_1(dispex_data_t *VAR_2, DISPID VAR_3, func_info_t **VAR_4)
{
    int VAR_5, VAR_6, VAR_7;

    VAR_5 = 0;
    VAR_6 = VAR_2->func_cnt-1;

    while(VAR_5 <= VAR_6) {
        VAR_7 = (VAR_5+VAR_6)/2;

        if(VAR_2->funcs[VAR_7].id == VAR_3) {
            *VAR_4 = VAR_2->funcs+VAR_7;
            return VAR_1;
        }

        if(VAR_2->funcs[VAR_7].id < VAR_3)
            VAR_5 = VAR_7+1;
        else
            VAR_6 = VAR_7-1;
    }

    FUNC_0("invalid id %x\n", VAR_3);
    return VAR_0;
}
