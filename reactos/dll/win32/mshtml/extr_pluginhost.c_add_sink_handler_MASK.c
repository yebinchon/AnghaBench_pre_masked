
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int * disp; int id; } ;
typedef TYPE_1__ sink_entry_t ;
struct TYPE_10__ {int handlers_size; int handlers_cnt; TYPE_1__* handlers; } ;
typedef TYPE_2__ PHEventSink ;
typedef int IDispatch ;
typedef int DISPID ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 TYPE_1__* FUNC_2 (TYPE_2__*,int ) ;
 TYPE_1__* FUNC_3 (int) ;
 TYPE_1__* FUNC_4 (TYPE_1__*,int) ;

__attribute__((used)) static void FUNC_5(PHEventSink *VAR_0, DISPID VAR_1, IDispatch *VAR_2)
{
    sink_entry_t *VAR_3 = FUNC_2(VAR_0, VAR_1);

    if(VAR_3) {
        if(VAR_3->disp)
            FUNC_1(VAR_3->disp);
    }else {
        if(!VAR_0->handlers_size) {
            VAR_0->handlers = FUNC_3(4*sizeof(*VAR_0->handlers));
            if(!VAR_0->handlers)
                return;
            VAR_0->handlers_size = 4;
        }else if(VAR_0->handlers_cnt == VAR_0->handlers_size) {
            sink_entry_t *VAR_4;

            VAR_4 = FUNC_4(VAR_0->handlers, 2*VAR_0->handlers_size*sizeof(*VAR_0->handlers));
            if(!VAR_4)
                return;
            VAR_0->handlers = VAR_4;
            VAR_0->handlers_size *= 2;
        }
        VAR_3 = VAR_0->handlers + VAR_0->handlers_cnt++;
        VAR_3->id = VAR_1;
    }

    FUNC_0(VAR_2);
    VAR_3->disp = VAR_2;
}
