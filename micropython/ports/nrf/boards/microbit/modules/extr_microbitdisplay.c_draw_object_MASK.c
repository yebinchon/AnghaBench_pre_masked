
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ mp_obj_t ;
typedef int microbit_image_obj_t ;
typedef int microbit_display_obj_t ;
typedef int MP_STATE_VM ;


 int * VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__* FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 () ;
 int VAR_4 ;
 int FUNC_2 (int *,int *) ;
 int * FUNC_3 (char const) ;
 int VAR_5 ;
 int * FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 int FUNC_6 (int *,char*) ;
 char* FUNC_7 (scalar_t__,size_t*) ;
 int VAR_6 ;

__attribute__((used)) static void FUNC_8(mp_obj_t VAR_7) {
    microbit_display_obj_t *VAR_8 = (microbit_display_obj_t*)FUNC_0(VAR_3)[0];
    if (VAR_7 == VAR_1) {
        if (VAR_2) {
            FUNC_2(&VAR_4, VAR_0);
            VAR_2 = 0;
        } else {
            FUNC_1();
        }
    } else if (FUNC_4(VAR_7) == &VAR_5) {
        FUNC_2(VAR_8, (microbit_image_obj_t *)VAR_7);
    } else if (FUNC_5(VAR_7)) {
        size_t VAR_9;
        const char *VAR_10 = FUNC_7(VAR_7, &VAR_9);
        if (VAR_9 == 1) {
            FUNC_2(VAR_8, FUNC_3(VAR_10[0]));
        } else {
            FUNC_1();
        }
    } else {
        MP_STATE_VM(VAR_11) = FUNC_6(&VAR_6, "not an image.");
        FUNC_1();
    }
}
