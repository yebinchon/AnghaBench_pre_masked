
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t uint8_t ;
typedef size_t uint16_t ;
struct TYPE_3__ {int w; int b; int r; int g; } ;
typedef TYPE_1__ LED_TYPE ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 () ;

void FUNC_5(LED_TYPE *VAR_1, uint16_t VAR_2) {
    static bool VAR_3 = 0;
    if (!VAR_3) {
        FUNC_4();
        VAR_3 = 1;
    }


    FUNC_0();

    for (uint8_t VAR_4 = 0; VAR_4 < VAR_2; VAR_4++) {

        FUNC_2(VAR_1[VAR_4].g);
        FUNC_2(VAR_1[VAR_4].r);
        FUNC_2(VAR_1[VAR_4].b);



    }

    FUNC_3(VAR_0);

    FUNC_1();
}
