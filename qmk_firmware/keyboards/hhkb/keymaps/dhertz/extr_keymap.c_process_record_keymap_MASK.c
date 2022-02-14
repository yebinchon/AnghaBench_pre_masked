
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
typedef int keyrecord_t ;





 int VAR_0 ;
 int VAR_1 ;
 char* FUNC_0 (char*) ;
 int FUNC_1 (int *,int ,char*) ;

bool FUNC_2(uint16_t VAR_2, keyrecord_t *VAR_3) {
    switch(VAR_2) {
        case 128:
            FUNC_1(VAR_3, VAR_0, " ");
            break;
        case 129:
            FUNC_1(VAR_3, VAR_1, "H");
            break;
        case 130:
            FUNC_1(VAR_3, VAR_0, FUNC_0("D"));
            break;
        default:
            return 1;
    }
    return 0;
}
