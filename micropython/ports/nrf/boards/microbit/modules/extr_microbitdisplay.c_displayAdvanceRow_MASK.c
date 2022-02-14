
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ strobe_row; int* pins_for_brightness; } ;
typedef TYPE_1__ microbit_display_obj_t ;
struct TYPE_7__ {int x; int y; } ;
struct TYPE_6__ {int** image_buffer; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 TYPE_3__** VAR_7 ;
 TYPE_2__ VAR_8 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static void FUNC_4(microbit_display_obj_t * VAR_9) {

    FUNC_3(VAR_5, VAR_1);

    FUNC_0(VAR_9->strobe_row + VAR_4);





    VAR_9->strobe_row++;


    if (VAR_9->strobe_row == VAR_6) {
        VAR_9->strobe_row = 0;
    }



    for (int VAR_10 = 0; VAR_10 <= VAR_2; VAR_10++) {
        VAR_9->pins_for_brightness[VAR_10] = 0;
    }
    for (int VAR_11 = 0; VAR_11 < VAR_0; VAR_11++) {
        int VAR_12 = VAR_7[VAR_11][VAR_9->strobe_row].x;
        int VAR_13 = VAR_7[VAR_11][VAR_9->strobe_row].y;
        int VAR_14 = VAR_8.image_buffer[VAR_12][VAR_13];
        VAR_9->pins_for_brightness[VAR_14] |= (1<<(VAR_11+VAR_3));
        (void)VAR_14;
    }

    FUNC_1(VAR_9->strobe_row + VAR_4);

    FUNC_2(VAR_5, VAR_9->pins_for_brightness[VAR_2]);
}
