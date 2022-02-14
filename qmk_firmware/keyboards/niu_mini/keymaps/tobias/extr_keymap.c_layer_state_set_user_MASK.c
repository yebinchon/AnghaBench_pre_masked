
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int layer_state_t ;


 int VAR_0 ;







 int FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (int,int,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ) ;
 int VAR_2 ;

layer_state_t FUNC_4(layer_state_t VAR_3) {

    switch (FUNC_0(VAR_3)) {
    case 129:
        if(!VAR_2){
            FUNC_2(9);
        }
        else if(VAR_2){
            FUNC_2(1);
            FUNC_1(0x00, 0x00, 0x00);
        }
        if(VAR_1) {
            FUNC_3(VAR_0);
        }
        break;
    case 131:
            FUNC_2(1);
        if(!VAR_1) {
            FUNC_3(VAR_0);
        }
        FUNC_1(0xFF, 0x00, 0x00);

        break;
    case 134:
        FUNC_2(1);
        FUNC_1(0xFF, 0xFF, 0xFF);
        if(VAR_1) {
                FUNC_3(VAR_0);
        }
        break;
    case 128:
        FUNC_2(1);
        FUNC_1(0x00, 0xFF, 0x00);
        if(VAR_1) {
                FUNC_3(VAR_0);
        }
        break;
    case 133:
        FUNC_2(1);
        FUNC_1(0x00, 0x00, 0xFF);
        if(VAR_1) {
                FUNC_3(VAR_0);
        }
        break;
    case 132:
            FUNC_2(1);
            FUNC_1(0xFF, 0x00, 0xFF);
        break;
    case 130:
        FUNC_2(1);
        FUNC_1(0x00, 0xFF, 0xFF);
        if(VAR_1) {
                FUNC_3(VAR_0);
        }
        break;
    default:
        FUNC_2(1);
        if(VAR_1) {
            FUNC_3(VAR_0);
        }
        FUNC_1(0xFF, 0xFF, 0xFF);
        break;
    }

  return VAR_3;
}
