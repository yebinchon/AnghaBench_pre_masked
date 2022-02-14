
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int npy_int64 ;


 int FUNC_0 (int) ;

__attribute__((used)) static void
FUNC_1(npy_int64 VAR_0, npy_int64 VAR_1, npy_int64 *VAR_2, npy_int64 *VAR_3, npy_int64 *VAR_4)
{
    npy_int64 VAR_5, VAR_6, VAR_7, VAR_8, VAR_9;

    FUNC_0(VAR_0 > 0);
    FUNC_0(VAR_1 > 0);

    VAR_5 = 1;
    VAR_6 = 0;
    VAR_7 = 0;
    VAR_8 = 1;



    while (1) {
        if (VAR_1 > 0) {
            VAR_9 = VAR_0/VAR_1;
            VAR_0 -= VAR_9*VAR_1;
            VAR_5 -= VAR_9*VAR_6;
            VAR_7 -= VAR_9*VAR_8;
        }
        else {
            *VAR_2 = VAR_0;
            *VAR_3 = VAR_5;
            *VAR_4 = VAR_7;
            break;
        }

        if (VAR_0 > 0) {
            VAR_9 = VAR_1/VAR_0;
            VAR_1 -= VAR_9*VAR_0;
            VAR_6 -= VAR_9*VAR_5;
            VAR_8 -= VAR_9*VAR_7;
        }
        else {
            *VAR_2 = VAR_1;
            *VAR_3 = VAR_6;
            *VAR_4 = VAR_8;
            break;
        }
    }
}
