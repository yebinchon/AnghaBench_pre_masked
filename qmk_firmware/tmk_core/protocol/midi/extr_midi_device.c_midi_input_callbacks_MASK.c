
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint16_t ;
typedef int (* midi_two_byte_func_t ) (TYPE_1__*,int,int) ;
typedef int (* midi_three_byte_func_t ) (TYPE_1__*,int,int,int) ;
typedef int (* midi_one_byte_func_t ) (TYPE_1__*,int) ;
struct TYPE_9__ {scalar_t__ input_state; int (* input_catchall_callback ) (TYPE_1__*,int,int,int,int) ;int (* input_fallthrough_callback ) (TYPE_1__*,int,int,int,int) ;int (* input_tunerequest_callback ) (TYPE_1__*,int) ;int (* input_realtime_callback ) (TYPE_1__*,int) ;int (* input_tc_quarterframe_callback ) (TYPE_1__*,int,int) ;int (* input_songselect_callback ) (TYPE_1__*,int,int) ;int (* input_chanpressure_callback ) (TYPE_1__*,int,int) ;int (* input_progchange_callback ) (TYPE_1__*,int,int) ;int (* input_songposition_callback ) (TYPE_1__*,int,int,int) ;int (* input_pitchbend_callback ) (TYPE_1__*,int,int,int) ;int (* input_aftertouch_callback ) (TYPE_1__*,int,int,int) ;int (* input_noteoff_callback ) (TYPE_1__*,int,int,int) ;int (* input_noteon_callback ) (TYPE_1__*,int,int,int) ;int (* input_cc_callback ) (TYPE_1__*,int,int,int) ;int (* input_sysex_callback ) (TYPE_1__*,int const,int const,int*) ;} ;
typedef TYPE_1__ MidiDevice ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*,int const,int const,int*) ;
 int FUNC_2 (TYPE_1__*,int,int,int,int) ;
 int FUNC_3 (TYPE_1__*,int,int,int,int) ;

void FUNC_4(MidiDevice* VAR_5, uint16_t VAR_6, uint8_t VAR_7, uint8_t VAR_8, uint8_t VAR_9) {

    bool VAR_10 = 0;
    if (VAR_5->input_state == VAR_4) {
        if (VAR_5->input_sysex_callback) {
            const uint16_t VAR_11 = ((VAR_6 - 1) / 3) * 3;
            const uint8_t VAR_12 = (VAR_6 - VAR_11);
            uint8_t VAR_13[3];
            VAR_13[0] = VAR_7;
            VAR_13[1] = VAR_8;
            VAR_13[2] = VAR_9;
            VAR_5->input_sysex_callback(VAR_5, VAR_11, VAR_12, VAR_13);
            VAR_10 = 1;
        }
    } else {
        switch (VAR_6) {
            case 3: {
                midi_three_byte_func_t VAR_14 = ((void*)0);
                switch (VAR_7 & 0xF0) {
                    case 133:
                        VAR_14 = VAR_5->input_cc_callback;
                        break;
                    case 130:
                        VAR_14 = VAR_5->input_noteon_callback;
                        break;
                    case 131:
                        VAR_14 = VAR_5->input_noteoff_callback;
                        break;
                    case 134:
                        VAR_14 = VAR_5->input_aftertouch_callback;
                        break;
                    case 129:
                        VAR_14 = VAR_5->input_pitchbend_callback;
                        break;
                    case 0xF0:
                        if (VAR_7 == VAR_0) VAR_14 = VAR_5->input_songposition_callback;
                        break;
                    default:
                        break;
                }
                if (VAR_14) {

                    if (VAR_7 == VAR_0)
                        VAR_14(VAR_5, VAR_7, VAR_8, VAR_9);
                    else
                        VAR_14(VAR_5, VAR_7 & 0x0F, VAR_8, VAR_9);
                    VAR_10 = 1;
                }
            } break;
            case 2: {
                midi_two_byte_func_t VAR_15 = ((void*)0);
                switch (VAR_7 & 0xF0) {
                    case 128:
                        VAR_15 = VAR_5->input_progchange_callback;
                        break;
                    case 132:
                        VAR_15 = VAR_5->input_chanpressure_callback;
                        break;
                    case 0xF0:
                        if (VAR_7 == VAR_1)
                            VAR_15 = VAR_5->input_songselect_callback;
                        else if (VAR_7 == VAR_2)
                            VAR_15 = VAR_5->input_tc_quarterframe_callback;
                        break;
                    default:
                        break;
                }
                if (VAR_15) {

                    if (VAR_7 == VAR_1 || VAR_7 == VAR_2)
                        VAR_15(VAR_5, VAR_7, VAR_8);
                    else
                        VAR_15(VAR_5, VAR_7 & 0x0F, VAR_8);
                    VAR_10 = 1;
                }
            } break;
            case 1: {
                midi_one_byte_func_t VAR_16 = ((void*)0);
                if (FUNC_0(VAR_7))
                    VAR_16 = VAR_5->input_realtime_callback;
                else if (VAR_7 == VAR_3)
                    VAR_16 = VAR_5->input_tunerequest_callback;
                if (VAR_16) {
                    VAR_16(VAR_5, VAR_7);
                    VAR_10 = 1;
                }
            } break;
            default:

                if (VAR_6 > 3) VAR_6 = 0;
                break;
        }
    }



    if (!VAR_10 && VAR_5->input_fallthrough_callback) VAR_5->input_fallthrough_callback(VAR_5, VAR_6, VAR_7, VAR_8, VAR_9);

    if (VAR_5->input_catchall_callback) VAR_5->input_catchall_callback(VAR_5, VAR_6, VAR_7, VAR_8, VAR_9);
}
