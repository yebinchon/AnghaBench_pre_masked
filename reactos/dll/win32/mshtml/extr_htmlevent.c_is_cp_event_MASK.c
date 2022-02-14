
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__* ids; int id_cnt; int tid; } ;
typedef TYPE_1__ cp_static_data_t ;
typedef int HRESULT ;
typedef scalar_t__ DISPID ;
typedef int BOOL ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int*,scalar_t__**) ;

__attribute__((used)) static BOOL FUNC_2(cp_static_data_t *VAR_2, DISPID VAR_3)
{
    int VAR_4, VAR_5, VAR_6;
    HRESULT VAR_7;

    if(!VAR_2)
        return VAR_0;

    if(!VAR_2->ids) {
        VAR_7 = FUNC_1(VAR_2->tid, &VAR_2->id_cnt, &VAR_2->ids);
        if(FUNC_0(VAR_7))
            return VAR_0;
    }

    VAR_4 = 0;
    VAR_5 = VAR_2->id_cnt-1;
    while(VAR_4 <= VAR_5) {
        VAR_6 = (VAR_4+VAR_5)/2;
        if(VAR_2->ids[VAR_6] == VAR_3)
            return VAR_1;

        if(VAR_2->ids[VAR_6] < VAR_3)
            VAR_4 = VAR_6+1;
        else
            VAR_5 = VAR_6-1;
    }

    return VAR_0;
}
