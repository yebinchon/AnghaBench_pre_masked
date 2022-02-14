
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * pre_input_process_callback; int * input_catchall_callback; int * input_fallthrough_callback; int * input_sysex_callback; int * input_tunerequest_callback; int * input_realtime_callback; int * input_tc_quarterframe_callback; int * input_songselect_callback; int * input_chanpressure_callback; int * input_progchange_callback; int * input_songposition_callback; int * input_pitchbend_callback; int * input_aftertouch_callback; int * input_noteoff_callback; int * input_noteon_callback; int * input_cc_callback; int input_queue_data; int input_queue; scalar_t__ input_count; int input_state; } ;
typedef TYPE_1__ MidiDevice ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,int ) ;

void FUNC_1(MidiDevice* VAR_2) {
    VAR_2->input_state = VAR_0;
    VAR_2->input_count = 0;
    FUNC_0(&VAR_2->input_queue, VAR_2->input_queue_data, VAR_1);


    VAR_2->input_cc_callback = ((void*)0);
    VAR_2->input_noteon_callback = ((void*)0);
    VAR_2->input_noteoff_callback = ((void*)0);
    VAR_2->input_aftertouch_callback = ((void*)0);
    VAR_2->input_pitchbend_callback = ((void*)0);
    VAR_2->input_songposition_callback = ((void*)0);


    VAR_2->input_progchange_callback = ((void*)0);
    VAR_2->input_chanpressure_callback = ((void*)0);
    VAR_2->input_songselect_callback = ((void*)0);
    VAR_2->input_tc_quarterframe_callback = ((void*)0);


    VAR_2->input_realtime_callback = ((void*)0);
    VAR_2->input_tunerequest_callback = ((void*)0);


    VAR_2->input_sysex_callback = ((void*)0);
    VAR_2->input_fallthrough_callback = ((void*)0);
    VAR_2->input_catchall_callback = ((void*)0);

    VAR_2->pre_input_process_callback = ((void*)0);
}
