
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
typedef scalar_t__ i2c_status_t ;
typedef int data ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (scalar_t__,scalar_t__,scalar_t__*,int,int ) ;
 int FUNC_2 (char*) ;

uint8_t FUNC_3(uint8_t VAR_4, uint8_t VAR_5) {
    uint8_t VAR_6 = FUNC_0(VAR_4);
    uint8_t VAR_7 = VAR_5 ? VAR_1 : VAR_0;

    uint8_t VAR_8 = 0;
    i2c_status_t VAR_9 = FUNC_1(VAR_6, VAR_7, &VAR_8, sizeof(VAR_8), VAR_3);
    if (VAR_9 != VAR_2) {
        FUNC_2("pca9555_readPins::FAILED\n");
    }
    return VAR_8;
}
