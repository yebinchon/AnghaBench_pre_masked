
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
typedef int eia608_style_t ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int) ;
 scalar_t__ FUNC_4 (int) ;
 scalar_t__ FUNC_5 (int) ;
 scalar_t__ FUNC_6 (int) ;
 scalar_t__ FUNC_7 (int) ;
 int FUNC_8 (int) ;
 int FUNC_9 (int) ;
 int FUNC_10 (int,int*) ;
 int FUNC_11 (int,int*,int*,int*,int*,int*) ;




 int FUNC_12 (int,int*,char*,char*) ;
 int FUNC_13 (int ,char*,int,int,...) ;
 int VAR_0 ;

void FUNC_14(uint16_t VAR_1)
{
    eia608_style_t VAR_2;
    const char* VAR_3 = 0;
    char VAR_4[5], VAR_5[5];
    VAR_4[0] = VAR_5[0] = 0;
    int VAR_6, VAR_7, VAR_8, VAR_9;

    if (!FUNC_9(VAR_1)) {
        VAR_3 = "parity failed";
    } else if (0 == FUNC_8(VAR_1)) {
        VAR_3 = "pad";
    } else if (FUNC_0(VAR_1)) {
        VAR_3 = "basicna";
        FUNC_12(VAR_1, &VAR_8, &VAR_4[0], &VAR_5[0]);
    } else if (FUNC_5(VAR_1)) {
        VAR_3 = "specialna";
        FUNC_12(VAR_1, &VAR_8, &VAR_4[0], &VAR_5[0]);
    } else if (FUNC_6(VAR_1)) {
        VAR_3 = "westeu";
        FUNC_12(VAR_1, &VAR_8, &VAR_4[0], &VAR_5[0]);
    } else if (FUNC_7(VAR_1)) {
        VAR_3 = "xds";
    } else if (FUNC_2(VAR_1)) {
        VAR_3 = "midrowchange";
    } else if (FUNC_3(VAR_1)) {
        VAR_3 = "norpak";
    } else if (FUNC_4(VAR_1)) {
        VAR_3 = "preamble";
        FUNC_11(VAR_1, &VAR_6, &VAR_7, &VAR_2, &VAR_8, &VAR_9);
        FUNC_13(VAR_0, "preamble %d %d %d %d %d\n", VAR_6, VAR_7, VAR_2, VAR_8, VAR_9);

    } else if (FUNC_1(VAR_1)) {
        switch (FUNC_10(VAR_1, &VAR_8)) {

        default:
            VAR_3 = "unknown_control";
            break;

        case 131:
            VAR_3 = "eia608_tab_offset_0";
            break;

        case 130:
            VAR_3 = "eia608_tab_offset_1";
            break;

        case 129:
            VAR_3 = "eia608_tab_offset_2";
            break;

        case 128:
            VAR_3 = "eia608_tab_offset_3";
            break;

        case 138:
            VAR_3 = "eia608_control_resume_caption_loading";
            break;

        case 144:
            VAR_3 = "eia608_control_backspace";
            break;

        case 146:
            VAR_3 = "eia608_control_alarm_off";
            break;

        case 145:
            VAR_3 = "eia608_control_alarm_on";
            break;

        case 142:
            VAR_3 = "eia608_control_delete_to_end_of_row";
            break;

        case 136:
            VAR_3 = "eia608_control_roll_up_2";
            break;

        case 135:
            VAR_3 = "eia608_control_roll_up_3";
            break;

        case 134:
            VAR_3 = "eia608_control_roll_up_4";
            break;

        case 137:
            VAR_3 = "eia608_control_resume_direct_captioning";
            break;

        case 133:
            VAR_3 = "eia608_control_text_restart";
            break;

        case 132:
            VAR_3 = "eia608_control_text_resume_text_display";
            break;

        case 140:
            VAR_3 = "eia608_control_erase_display_memory";
            break;

        case 143:
            VAR_3 = "eia608_control_carriage_return";
            break;

        case 139:
            VAR_3 = "eia608_control_erase_non_displayed_memory";
            break;

        case 141:
            VAR_3 = "eia608_control_end_of_caption";
            break;
        }
    } else {
        VAR_3 = "unhandled";
    }

    FUNC_13(VAR_0, "cc %04X (%04X) '%s' '%s' (%s)\n", VAR_1, FUNC_8(VAR_1), VAR_4, VAR_5, VAR_3);
}
