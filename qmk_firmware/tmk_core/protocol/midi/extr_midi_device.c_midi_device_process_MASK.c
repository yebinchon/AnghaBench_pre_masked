
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ uint16_t ;
typedef scalar_t__ byteQueueIndex_t ;
struct TYPE_5__ {int input_queue; int (* pre_input_process_callback ) (TYPE_1__*) ;} ;
typedef TYPE_1__ MidiDevice ;


 int FUNC_0 (int *,int ) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (TYPE_1__*,int ) ;
 int FUNC_4 (TYPE_1__*) ;

void FUNC_5(MidiDevice* VAR_0) {

    if (VAR_0->pre_input_process_callback) VAR_0->pre_input_process_callback(VAR_0);


    byteQueueIndex_t VAR_1 = FUNC_1(&VAR_0->input_queue);
    uint16_t VAR_2;

    for (VAR_2 = 0; VAR_2 < VAR_1; VAR_2++) {
        uint8_t VAR_3 = FUNC_0(&VAR_0->input_queue, 0);
        FUNC_3(VAR_0, VAR_3);
        FUNC_2(&VAR_0->input_queue, 1);
    }
}
