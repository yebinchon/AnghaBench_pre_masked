
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t eventid_t ;
struct TYPE_5__ {TYPE_1__** event_table; } ;
typedef TYPE_2__ event_target_t ;
struct TYPE_4__ {size_t handler_cnt; int ** handlers; } ;
typedef int IDispatch ;
typedef int HRESULT ;
typedef int EventTarget ;
typedef size_t DWORD ;
typedef int BSTR ;


 size_t VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int VAR_2 ;
 int FUNC_1 (char*) ;
 size_t FUNC_2 (int ) ;
 TYPE_2__* FUNC_3 (int *,int ) ;

HRESULT FUNC_4(EventTarget *VAR_3, BSTR VAR_4, IDispatch *VAR_5)
{
    event_target_t *VAR_6;
    eventid_t VAR_7;
    DWORD VAR_8 = 0;

    VAR_7 = FUNC_2(VAR_4);
    if(VAR_7 == VAR_0) {
        FUNC_1("Unknown event\n");
        return VAR_2;
    }

    VAR_6 = FUNC_3(VAR_3, VAR_1);
    if(!VAR_6)
        return VAR_2;

    if(!VAR_6->event_table[VAR_7])
        return VAR_2;

    while(VAR_8 < VAR_6->event_table[VAR_7]->handler_cnt) {
        if(VAR_6->event_table[VAR_7]->handlers[VAR_8] == VAR_5) {
            FUNC_0(VAR_6->event_table[VAR_7]->handlers[VAR_8]);
            VAR_6->event_table[VAR_7]->handlers[VAR_8] = ((void*)0);
        }
        VAR_8++;
    }

    return VAR_2;
}
