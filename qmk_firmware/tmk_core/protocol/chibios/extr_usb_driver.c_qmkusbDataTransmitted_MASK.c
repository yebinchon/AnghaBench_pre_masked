
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef unsigned int usbep_t ;
typedef int uint8_t ;
struct TYPE_12__ {int * setup; TYPE_2__** epc; TYPE_5__** in_params; } ;
typedef TYPE_4__ USBDriver ;
struct TYPE_13__ {TYPE_3__* config; int obqueue; } ;
struct TYPE_11__ {int fixed_size; } ;
struct TYPE_10__ {scalar_t__ in_maxsize; TYPE_1__* in_state; } ;
struct TYPE_9__ {unsigned int txsize; } ;
typedef TYPE_5__ QMKUSBDriver ;


 int VAR_0 ;
 int FUNC_0 (TYPE_5__*,int ) ;
 int * FUNC_1 (int *,size_t*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (TYPE_4__*,unsigned int,int *,size_t) ;

void FUNC_6(USBDriver *VAR_1, usbep_t VAR_2) {
    uint8_t * VAR_3;
    size_t VAR_4;
    QMKUSBDriver *VAR_5 = VAR_1->in_params[VAR_2 - 1U];

    if (VAR_5 == ((void*)0)) {
        return;
    }

    FUNC_3();


    FUNC_0(VAR_5, VAR_0);


    if (VAR_1->epc[VAR_2]->in_state->txsize > 0U) {
        FUNC_2(&VAR_5->obqueue);
    }


    VAR_3 = FUNC_1(&VAR_5->obqueue, &VAR_4);

    if (VAR_3 != ((void*)0)) {


        FUNC_5(VAR_1, VAR_2, VAR_3, VAR_4);
    } else if ((VAR_1->epc[VAR_2]->in_state->txsize > 0U) && ((VAR_1->epc[VAR_2]->in_state->txsize & ((size_t)VAR_1->epc[VAR_2]->in_maxsize - 1U)) == 0U)) {




        if (!VAR_5->config->fixed_size) {
            FUNC_5(VAR_1, VAR_2, VAR_1->setup, 0);
        }

    } else {

    }

    FUNC_4();
}
