
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int,int) ;
 int VAR_0 ;

void FUNC_5(void) {






    static uint8_t VAR_1[4];
    uint8_t VAR_2;
    uint8_t VAR_3 = FUNC_0(VAR_0);

    FUNC_1();


    for (VAR_2 = 1; VAR_2 <= 3; ++VAR_2) {




        VAR_1[VAR_2] += (VAR_3 == VAR_2) ?
            (VAR_1[VAR_2] < 255 ? 1 : 0):
            (VAR_1[VAR_2] > 0 ? -1 : 0);

        if (VAR_1[VAR_2]) {
            FUNC_3(VAR_2);
            FUNC_4(VAR_2, VAR_1[VAR_2]);
        }
        else {
            FUNC_2(VAR_2);
        }
    }


}
