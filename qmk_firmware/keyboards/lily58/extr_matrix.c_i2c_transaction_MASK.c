
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 () ;
 int FUNC_3 (int) ;
 int FUNC_4 () ;
 scalar_t__ VAR_6 ;
 int * VAR_7 ;

int FUNC_5(void) {
    int VAR_8 = (VAR_6) ? (VAR_4) : 0;

    int VAR_9 = FUNC_1(VAR_5 + VAR_3);
    if (VAR_9) goto i2c_error;


    VAR_9 = FUNC_3(0x00);
    if (VAR_9) goto i2c_error;


    VAR_9 = FUNC_1(VAR_5 + VAR_2);
    if (VAR_9) goto i2c_error;

    if (!VAR_9) {
        int VAR_10;
        for (VAR_10 = 0; VAR_10 < VAR_4-1; ++VAR_10) {
            VAR_7[VAR_8+VAR_10] = FUNC_0(VAR_0);
        }
        VAR_7[VAR_8+VAR_10] = FUNC_0(VAR_1);
        FUNC_2();
    } else {
i2c_error:
        FUNC_4();
        return VAR_9;
    }

    return 0;
}
