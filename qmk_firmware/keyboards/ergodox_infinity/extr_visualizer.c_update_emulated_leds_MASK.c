
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int visualizer_user_data_t ;
struct TYPE_6__ {scalar_t__ user_data; } ;
struct TYPE_7__ {void* target_lcd_color; TYPE_1__ status; } ;
typedef TYPE_2__ visualizer_state_t ;
struct TYPE_8__ {scalar_t__ user_data; } ;
typedef TYPE_3__ visualizer_keyboard_status_t ;
typedef scalar_t__ uint8_t ;


 scalar_t__ VAR_0 ;
 void* FUNC_0 (int ,scalar_t__) ;
 scalar_t__ FUNC_1 (int *,scalar_t__) ;
 scalar_t__ FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *) ;
 scalar_t__ FUNC_5 () ;
 scalar_t__ VAR_1 ;
 int * VAR_2 ;
 void* VAR_3 ;
 int VAR_4 ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int VAR_5 ;

__attribute__((used)) static void FUNC_8(visualizer_state_t* VAR_6, visualizer_keyboard_status_t* VAR_7) {
    visualizer_user_data_t* VAR_8 = (visualizer_user_data_t*)VAR_6->status.user_data;
    visualizer_user_data_t* VAR_9 = (visualizer_user_data_t*)VAR_7->user_data;

    uint8_t VAR_10;
    uint8_t VAR_11;

    if (FUNC_5()) {
        VAR_10 = FUNC_2(VAR_8);
        VAR_11 = FUNC_2(VAR_9);
    }
    else {
        VAR_10 = FUNC_3(VAR_8);
        VAR_11 = FUNC_3(VAR_9);
    }
    uint8_t VAR_12 = FUNC_4(VAR_8);
    uint8_t VAR_13 = FUNC_4(VAR_9);

    uint8_t VAR_14 = FUNC_1(VAR_9, VAR_11);
    uint8_t VAR_15 = FUNC_1(VAR_8, VAR_10);

    uint8_t VAR_16 = FUNC_1(VAR_9, VAR_13);
    uint8_t VAR_17 = FUNC_1(VAR_8, VAR_12);

    if (VAR_1 == VAR_0 ||
            VAR_10 != VAR_11 ||
            VAR_12 != VAR_13 ||
            VAR_15 != VAR_14 ||
            VAR_17 != VAR_16) {

        if (VAR_12 != 0) {
            VAR_6->target_lcd_color = FUNC_0(
                VAR_2[VAR_10], VAR_15);
            VAR_3 = FUNC_0(
                VAR_2[VAR_12], VAR_17);

            FUNC_7(&VAR_4);
            FUNC_6(&VAR_5);
        } else {
            VAR_6->target_lcd_color = FUNC_0(
                VAR_2[VAR_10], VAR_15);
            FUNC_7(&VAR_5);
            FUNC_6(&VAR_4);
        }
    }
}
