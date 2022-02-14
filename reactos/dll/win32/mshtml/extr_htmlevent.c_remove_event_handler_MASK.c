
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_7__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef size_t eventid_t ;
struct TYPE_9__ {TYPE_1__** event_table; } ;
typedef TYPE_2__ event_target_t ;
typedef int VARIANT ;
struct TYPE_11__ {int attr_name; } ;
struct TYPE_10__ {int dispex; } ;
struct TYPE_8__ {int * handler_prop; } ;
typedef int HRESULT ;
typedef TYPE_3__ EventTarget ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ,int ,int **) ;
 TYPE_7__* VAR_1 ;
 TYPE_2__* FUNC_4 (TYPE_3__*,int ) ;

__attribute__((used)) static void FUNC_5(EventTarget *VAR_2, eventid_t VAR_3)
{
    event_target_t *VAR_4;
    VARIANT *VAR_5;
    HRESULT VAR_6;

    VAR_6 = FUNC_3(&VAR_2->dispex, VAR_1[VAR_3].attr_name, VAR_0, &VAR_5);
    if(FUNC_1(VAR_6))
        FUNC_2(VAR_5);

    VAR_4 = FUNC_4(VAR_2, VAR_0);
    if(VAR_4 && VAR_4->event_table[VAR_3] && VAR_4->event_table[VAR_3]->handler_prop) {
        FUNC_0(VAR_4->event_table[VAR_3]->handler_prop);
        VAR_4->event_table[VAR_3]->handler_prop = ((void*)0);
    }
}
