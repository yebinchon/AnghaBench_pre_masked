
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint16_t ;
struct TYPE_3__ {int Data1; int Data2; int Data3; void* Event; } ;
typedef int MidiDevice ;
typedef TYPE_1__ MIDI_EventPacket_t ;


 void* FUNC_0 (int,int) ;



 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_3(MidiDevice* VAR_8, uint16_t VAR_9, uint8_t VAR_10, uint8_t VAR_11, uint8_t VAR_12) {
    MIDI_EventPacket_t VAR_13;
    VAR_13.Data1 = VAR_10;
    VAR_13.Data2 = VAR_11;
    VAR_13.Data3 = VAR_12;

    uint8_t VAR_14 = 0;


    if (FUNC_1(VAR_10) == VAR_7) {
        switch (VAR_9) {
            case 3:
                if (VAR_12 == VAR_0)
                    VAR_13.Event = FUNC_0(VAR_14, VAR_3);
                else
                    VAR_13.Event = FUNC_0(VAR_14, VAR_4);
                break;
            case 2:
                if (VAR_11 == VAR_0)
                    VAR_13.Event = FUNC_0(VAR_14, VAR_2);
                else
                    VAR_13.Event = FUNC_0(VAR_14, VAR_4);
                break;
            case 1:
                if (VAR_10 == VAR_0)
                    VAR_13.Event = FUNC_0(VAR_14, VAR_1);
                else
                    VAR_13.Event = FUNC_0(VAR_14, VAR_4);
                break;
            default:
                return;
        }
    } else {


        switch (VAR_10 & 0xF0) {
            case 130:
                VAR_13.Event = FUNC_0(VAR_14, VAR_6);
                break;
            case 129:
            case 128:
                VAR_13.Event = FUNC_0(VAR_14, VAR_5);
                break;
            default:
                VAR_13.Event = FUNC_0(VAR_14, VAR_10);
                break;
        }
    }

    FUNC_2(&VAR_13);
}
