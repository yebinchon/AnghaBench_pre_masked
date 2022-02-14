
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int layer_state_t ;
typedef int keyrecord_t ;
typedef scalar_t__ int8_t ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 () ;
 int VAR_0 ;
 int FUNC_5 (int *) ;

void FUNC_6(keyrecord_t *VAR_1, keyrecord_t *VAR_2, int8_t VAR_3) {
    FUNC_2("dynamic macro: slot %d playback\n", FUNC_0());

    layer_state_t VAR_4 = VAR_0;

    FUNC_1();
    FUNC_4();

    while (VAR_1 != VAR_2) {
        FUNC_5(VAR_1);
        VAR_1 += VAR_3;
    }

    FUNC_1();

    VAR_0 = VAR_4;

    FUNC_3(VAR_3);
}
