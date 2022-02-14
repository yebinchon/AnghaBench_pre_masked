
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int) ;

int FUNC_4(int VAR_2, int VAR_3)
{
    if (VAR_2 == VAR_0 || VAR_3 == VAR_0)
        return VAR_1;
    if (VAR_2 == VAR_3)
        return 1024;

    if (!FUNC_1(VAR_2) || !FUNC_1(VAR_3))
        return VAR_1;
    int VAR_4 = 1024;
    if (FUNC_2(VAR_2) != FUNC_2(VAR_3))
        VAR_4 -= 1;
    if (FUNC_0(VAR_2) != FUNC_0(VAR_3)) {
        int VAR_5 = FUNC_3(VAR_2);
        if (FUNC_0(VAR_2)) {

            int VAR_6 = (VAR_5 == 4 ? 3 : 6) - FUNC_3(VAR_3);
            if (VAR_6 >= 0) {
                VAR_4 -= 8 * VAR_6;
            } else {
                VAR_4 += 1024 * (VAR_6 - 1);
            }
        } else {


            VAR_4 -= 1048576 * (8 - VAR_5);
        }
        VAR_4 -= 512;
    } else {
        int VAR_7 = FUNC_3(VAR_2) - FUNC_3(VAR_3);
        if (VAR_7 > 0) {
            VAR_4 -= 8 * VAR_7;
        } else if (VAR_7 < 0) {
            VAR_4 += 1024 * (VAR_7 - 1);
        }
    }
    return VAR_4;
}
