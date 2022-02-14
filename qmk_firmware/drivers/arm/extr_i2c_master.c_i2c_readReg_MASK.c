
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint16_t ;
typedef int msg_t ;
typedef int i2c_status_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int,int*,int,int*,int ,int ) ;
 int FUNC_3 (int *,int *) ;
 int VAR_1 ;
 int VAR_2 ;

i2c_status_t FUNC_4(uint8_t VAR_3, uint8_t VAR_4, uint8_t* VAR_5, uint16_t VAR_6, uint16_t VAR_7) {
    VAR_1 = VAR_3;
    FUNC_3(&VAR_0, &VAR_2);
    msg_t VAR_8 = FUNC_2(&VAR_0, (VAR_1 >> 1), &VAR_4, 1, VAR_5, VAR_6, FUNC_0(VAR_7));
    return FUNC_1(&VAR_8);
}
