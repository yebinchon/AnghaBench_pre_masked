
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ leds; scalar_t__ layer; scalar_t__ default_layer; } ;
struct TYPE_7__ {TYPE_1__ status; } ;
typedef TYPE_2__ visualizer_state_t ;
struct TYPE_8__ {scalar_t__ leds; scalar_t__ layer; scalar_t__ default_layer; } ;
typedef TYPE_3__ visualizer_keyboard_status_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(visualizer_state_t* VAR_5, visualizer_keyboard_status_t* VAR_6) {
    if (VAR_5->status.leds) {
        if (VAR_4 != VAR_0 ||
                VAR_5->status.leds != VAR_6->leds ||
                VAR_5->status.layer != VAR_6->layer ||
                VAR_5->status.default_layer != VAR_6->default_layer) {


            FUNC_1(&VAR_2);

            VAR_4 = VAR_0;



            FUNC_0(&VAR_3);
        }
    } else {
        if (VAR_4 != VAR_1 ||
                VAR_5->status.layer != VAR_6->layer ||
                VAR_5->status.default_layer != VAR_6->default_layer) {

            FUNC_1(&VAR_3);

            VAR_4 = VAR_1;
            FUNC_0(&VAR_2);
        }
    }
}
