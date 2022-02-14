
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef size_t eventid_t ;
struct TYPE_6__ {TYPE_1__** event_table; } ;
typedef TYPE_2__ event_target_t ;
struct TYPE_5__ {int * handler_prop; } ;
typedef int IDispatch ;
typedef int HRESULT ;
typedef int EventTarget ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (TYPE_2__*,size_t,int ) ;
 int FUNC_2 (int *,size_t) ;
 TYPE_2__* FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,size_t) ;

__attribute__((used)) static HRESULT FUNC_5(EventTarget *VAR_3, eventid_t VAR_4, IDispatch *VAR_5)
{
    event_target_t *VAR_6;

    FUNC_4(VAR_3, VAR_4);
    if(!VAR_5)
        return VAR_1;

    VAR_6 = FUNC_3(VAR_3, VAR_2);
    if(!VAR_6)
        return VAR_0;

    if(!FUNC_1(VAR_6, VAR_4, 0))
        return VAR_0;

    VAR_6->event_table[VAR_4]->handler_prop = VAR_5;
    FUNC_0(VAR_5);

    FUNC_2(VAR_3, VAR_4);
    return VAR_1;
}
