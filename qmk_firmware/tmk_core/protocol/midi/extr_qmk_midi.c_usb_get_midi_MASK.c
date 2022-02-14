
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef int midi_packet_length_t ;
struct TYPE_3__ {scalar_t__ Event; int Data3; int Data2; int Data1; } ;
typedef int MidiDevice ;
typedef TYPE_1__ MIDI_EventPacket_t ;


 scalar_t__ FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int *,int,int *) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_4(MidiDevice* VAR_5) {
    MIDI_EventPacket_t VAR_6;
    while (FUNC_3(&VAR_6)) {
        midi_packet_length_t VAR_7 = FUNC_2(VAR_6.Data1);
        uint8_t VAR_8[3];
        VAR_8[0] = VAR_6.Data1;
        VAR_8[1] = VAR_6.Data2;
        VAR_8[2] = VAR_6.Data3;
        if (VAR_7 == VAR_4) {

            if (VAR_6.Event == FUNC_0(0, VAR_3) || VAR_6.Event == FUNC_0(0, VAR_2)) {
                VAR_7 = 3;
            } else if (VAR_6.Event == FUNC_0(0, VAR_1)) {
                VAR_7 = 2;
            } else if (VAR_6.Event == FUNC_0(0, VAR_0)) {
                VAR_7 = 1;
            } else {

            }
        }


        if (VAR_7 != VAR_4) FUNC_1(VAR_5, VAR_7, VAR_8);
    }
}
