
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef size_t eventid_t ;
struct TYPE_6__ {TYPE_1__** event_table; } ;
typedef TYPE_2__ event_target_t ;
typedef int VARIANT_BOOL ;
struct TYPE_5__ {size_t handler_cnt; int ** handlers; } ;
typedef int IDispatch ;
typedef int HRESULT ;
typedef int EventTarget ;
typedef size_t DWORD ;
typedef int BSTR ;


 size_t VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (TYPE_2__*,size_t,size_t) ;
 size_t FUNC_3 (int ) ;
 int FUNC_4 (int *,size_t) ;
 TYPE_2__* FUNC_5 (int *,int ) ;

HRESULT FUNC_6(EventTarget *VAR_5, BSTR VAR_6, IDispatch *VAR_7, VARIANT_BOOL *VAR_8)
{
    event_target_t *VAR_9;
    eventid_t VAR_10;
    DWORD VAR_11 = 0;

    VAR_10 = FUNC_3(VAR_6);
    if(VAR_10 == VAR_0) {
        FUNC_1("Unknown event\n");
        *VAR_8 = VAR_4;
        return VAR_2;
    }

    VAR_9 = FUNC_5(VAR_5, VAR_3);
    if(!VAR_9)
        return VAR_1;

    if(VAR_9->event_table[VAR_10]) {
        while(VAR_11 < VAR_9->event_table[VAR_10]->handler_cnt && VAR_9->event_table[VAR_10]->handlers[VAR_11])
            VAR_11++;
        if(VAR_11 == VAR_9->event_table[VAR_10]->handler_cnt && !FUNC_2(VAR_9, VAR_10, VAR_11+1))
            return VAR_1;
    }else if(!FUNC_2(VAR_9, VAR_10, VAR_11+1)) {
        return VAR_1;
    }

    FUNC_0(VAR_7);
    VAR_9->event_table[VAR_10]->handlers[VAR_11] = VAR_7;

    FUNC_4(VAR_5, VAR_10);

    *VAR_8 = VAR_4;
    return VAR_2;
}
