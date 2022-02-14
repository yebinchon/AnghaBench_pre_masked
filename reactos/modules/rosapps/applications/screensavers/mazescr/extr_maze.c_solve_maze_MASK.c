
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int dir; size_t x; size_t y; } ;
typedef int HWND ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int,int,int ,int ) ;
 int FUNC_1 (size_t,int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int** VAR_5 ;
 TYPE_1__* VAR_6 ;
 size_t VAR_7 ;

__attribute__((used)) static int FUNC_2(HWND VAR_8)
{
    int VAR_9;
    int VAR_10;

    do {
        VAR_10 = 1;
        if (++VAR_6[VAR_7].dir >= 4) {
            VAR_7--;
            FUNC_0((int) (VAR_6[VAR_7].x), (int) (VAR_6[VAR_7].y), (int) (VAR_6[VAR_7].dir), VAR_4, VAR_2);
            VAR_9 = 0;
        }
        else if (!(VAR_5[VAR_6[VAR_7].x][VAR_6[VAR_7].y] & (VAR_1 >> VAR_6[VAR_7].dir)) &&
            ((VAR_7 == 0) || ((VAR_6[VAR_7].dir != (int) (VAR_6[VAR_7 - 1].dir + 2) % 4)))) {
            FUNC_1(VAR_7, VAR_4, VAR_3);
            VAR_7++;
            if (VAR_5[VAR_6[VAR_7].x][VAR_6[VAR_7].y] & VAR_0) {

                VAR_9 = 1;
            }
            else {
                VAR_9 = 0;
            }
        }
        else {
            VAR_10 = 0;
        }
    } while (!VAR_10);
    return VAR_9;
}
