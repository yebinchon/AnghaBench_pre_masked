
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int npy_int64 ;


 int FUNC_0 (int*,int const) ;

__attribute__((used)) static npy_int64
FUNC_1(npy_int64 *VAR_0)
{
    const npy_int64 VAR_1 = (400*365 + 100 - 4 + 1);

    npy_int64 VAR_2 = (*VAR_0) - (365*30 + 7);
    npy_int64 VAR_3;


    VAR_3 = 400 * FUNC_0(&VAR_2, VAR_1);


    if (VAR_2 >= 366) {
        VAR_3 += 100 * ((VAR_2-1) / (100*365 + 25 - 1));
        VAR_2 = (VAR_2-1) % (100*365 + 25 - 1);
        if (VAR_2 >= 365) {
            VAR_3 += 4 * ((VAR_2+1) / (4*365 + 1));
            VAR_2 = (VAR_2+1) % (4*365 + 1);
            if (VAR_2 >= 366) {
                VAR_3 += (VAR_2-1) / 365;
                VAR_2 = (VAR_2-1) % 365;
            }
        }
    }

    *VAR_0 = VAR_2;
    return VAR_3 + 2000;
}
