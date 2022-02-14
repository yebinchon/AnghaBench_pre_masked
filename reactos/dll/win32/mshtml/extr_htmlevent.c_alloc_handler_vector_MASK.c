
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int handler_cnt; } ;
typedef TYPE_1__ handler_vector_t ;
typedef size_t eventid_t ;
struct TYPE_8__ {TYPE_1__** event_table; } ;
typedef TYPE_2__ event_target_t ;
typedef int IDispatch ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_0 (int) ;
 TYPE_1__* FUNC_1 (TYPE_1__*,int) ;

__attribute__((used)) static BOOL FUNC_2(event_target_t *VAR_2, eventid_t VAR_3, int VAR_4)
{
    handler_vector_t *VAR_5, *VAR_6 = VAR_2->event_table[VAR_3];

    if(VAR_6) {
        if(VAR_4 <= VAR_6->handler_cnt)
            return VAR_1;

        VAR_5 = FUNC_1(VAR_6, sizeof(handler_vector_t) + sizeof(IDispatch*)*VAR_4);
    }else {
        VAR_5 = FUNC_0(sizeof(handler_vector_t) + sizeof(IDispatch*)*VAR_4);
    }

    if(!VAR_5)
        return VAR_0;

    VAR_5->handler_cnt = VAR_4;
    VAR_2->event_table[VAR_3] = VAR_5;
    return VAR_1;
}
