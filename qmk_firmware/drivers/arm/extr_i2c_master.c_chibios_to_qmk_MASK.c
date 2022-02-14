
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int msg_t ;
typedef int i2c_status_t ;



 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;


__attribute__((used)) static i2c_status_t FUNC_0(const msg_t* VAR_3) {
    switch (*VAR_3) {
        case 129:
            return VAR_1;
        case 128:
            return VAR_2;

        default:
            return VAR_0;
    }
}
