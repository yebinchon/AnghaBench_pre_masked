
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ npy_uint64 ;
typedef scalar_t__ npy_uint32 ;


 int FUNC_0 (int) ;
 int FUNC_1 (char*,char*,scalar_t__) ;

__attribute__((used)) static npy_uint32
FUNC_2(char *VAR_0, npy_uint32 VAR_1, npy_uint64 VAR_2,
            npy_uint32 VAR_3, char VAR_4)
{
    npy_uint32 VAR_5 = VAR_1-1;
    npy_uint32 VAR_6 = 0;

    FUNC_0(VAR_1 > 0);


    if (VAR_2 == 0) {
        npy_uint32 VAR_7;


        if (VAR_4 == '+') {
            if (VAR_6 < VAR_5-1) {
                VAR_0[VAR_6++] = '+';
            }
        }
        else if (VAR_4 == '-') {
            if (VAR_6 < VAR_5-1) {
                VAR_0[VAR_6++] = '-';
            }
        }


        VAR_7 = (3 < VAR_5 - VAR_6) ? 3 : VAR_5 - VAR_6;
        FUNC_1(VAR_0 + VAR_6, "inf", VAR_7);
        VAR_0[VAR_6 + VAR_7] = '\0';
        return VAR_6 + VAR_7;
    }
    else {

        npy_uint32 VAR_8 = (3 < VAR_5 - VAR_6) ? 3 : VAR_5 - VAR_6;
        FUNC_1(VAR_0 + VAR_6, "nan", VAR_8);
        VAR_0[VAR_6 + VAR_8] = '\0';
        return VAR_6 + VAR_8;
    }
}
