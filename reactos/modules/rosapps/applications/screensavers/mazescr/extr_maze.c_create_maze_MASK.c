
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {size_t x; size_t y; int dir; } ;
struct TYPE_3__ {size_t x; size_t y; int dir; } ;
typedef int HWND ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 () ;
 int FUNC_1 (int ) ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 int** VAR_6 ;
 TYPE_2__* VAR_7 ;
 int VAR_8 ;
 TYPE_1__* VAR_9 ;
 size_t VAR_10 ;

__attribute__((used)) static void FUNC_2(HWND VAR_11)
{
    register int VAR_12, VAR_13 = 0;

    do {
        VAR_7[VAR_10].x = VAR_3;
        VAR_7[VAR_10].y = VAR_4;
        VAR_7[VAR_10].dir = VAR_13;
        while ((VAR_13 = FUNC_1(VAR_5)) == -1) {
            if (FUNC_0() == -1) {
                return;
            }
        }


        VAR_6[VAR_3][VAR_4] |= (VAR_1 >> VAR_13);

        switch (VAR_13) {
        case 0: VAR_4--;
            break;
        case 1: VAR_3++;
            break;
        case 2: VAR_4++;
            break;
        case 3: VAR_3--;
            break;
        }
        VAR_10++;


        VAR_6[VAR_3][VAR_4] |= (VAR_0 >> ((VAR_13 + 2) % 4));


        if (VAR_6[VAR_3][VAR_4] & VAR_2) {
            VAR_8 = VAR_10;
            for (VAR_12 = 0; VAR_12 < VAR_8; VAR_12++) {
                VAR_9[VAR_12].x = VAR_7[VAR_12].x;
                VAR_9[VAR_12].y = VAR_7[VAR_12].y;
                VAR_9[VAR_12].dir = VAR_7[VAR_12].dir;
            }
        }
    } while (1);
}
