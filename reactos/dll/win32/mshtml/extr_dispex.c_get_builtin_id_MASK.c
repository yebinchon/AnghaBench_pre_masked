
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_13__ {int func_cnt; TYPE_1__** name_table; } ;
typedef TYPE_4__ dispex_data_t ;
struct TYPE_14__ {TYPE_3__* data; } ;
struct TYPE_12__ {TYPE_2__* vtbl; } ;
struct TYPE_11__ {scalar_t__ (* get_dispid ) (TYPE_5__*,int ,int,int *) ;} ;
struct TYPE_10__ {int id; int name; } ;
typedef scalar_t__ HRESULT ;
typedef TYPE_5__ DispatchEx ;
typedef int DWORD ;
typedef int DISPID ;
typedef int BSTR ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 TYPE_4__* FUNC_0 (TYPE_5__*) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ) ;
 scalar_t__ FUNC_3 (TYPE_5__*,int ,int,int *) ;

__attribute__((used)) static HRESULT FUNC_4(DispatchEx *VAR_4, BSTR VAR_5, DWORD VAR_6, DISPID *VAR_7)
{
    dispex_data_t *VAR_8;
    int VAR_9, VAR_10, VAR_11, VAR_12;

    VAR_8 = FUNC_0(VAR_4);
    if(!VAR_8)
        return VAR_1;

    VAR_9 = 0;
    VAR_10 = VAR_8->func_cnt-1;

    while(VAR_9 <= VAR_10) {
        VAR_11 = (VAR_9+VAR_10)/2;

        VAR_12 = FUNC_2(VAR_8->name_table[VAR_11]->name, VAR_5);
        if(!VAR_12) {
            if((VAR_6 & VAR_3) && FUNC_1(VAR_8->name_table[VAR_11]->name, VAR_5))
                break;

            *VAR_7 = VAR_8->name_table[VAR_11]->id;
            return VAR_2;
        }

        if(VAR_12 > 0)
            VAR_10 = VAR_11-1;
        else
            VAR_9 = VAR_11+1;
    }

    if(VAR_4->data->vtbl && VAR_4->data->vtbl->get_dispid) {
        HRESULT VAR_13;

        VAR_13 = VAR_4->data->vtbl->get_dispid(VAR_4, VAR_5, VAR_6, VAR_7);
        if(VAR_13 != VAR_0)
            return VAR_13;
    }

    return VAR_0;
}
