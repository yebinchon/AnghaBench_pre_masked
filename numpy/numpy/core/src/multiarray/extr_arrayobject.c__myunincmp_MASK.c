
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ npy_ucs4 ;
typedef int npy_intp ;


 int FUNC_0 (scalar_t__*,scalar_t__*,int ) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (scalar_t__*) ;
 scalar_t__* FUNC_3 (int) ;
 int FUNC_4 (scalar_t__*,scalar_t__*,int) ;

__attribute__((used)) static int
FUNC_5(npy_ucs4 *VAR_0, npy_ucs4 *VAR_1, int VAR_2, int VAR_3)
{
    npy_ucs4 *VAR_4;
    npy_ucs4 *VAR_5=VAR_0, *VAR_6=VAR_1;
    int VAR_7;
    npy_intp VAR_8;
    int VAR_9;

    if ((npy_intp)VAR_0 % sizeof(npy_ucs4) != 0) {
        VAR_8 = VAR_2*sizeof(npy_ucs4);
        VAR_5 = FUNC_3(VAR_8);
        FUNC_4(VAR_5, VAR_0, VAR_8);
    }
    if ((npy_intp)VAR_1 % sizeof(npy_ucs4) != 0) {
        VAR_8 = VAR_3*sizeof(npy_ucs4);
        VAR_6 = FUNC_3(VAR_8);
        FUNC_4(VAR_6, VAR_1, VAR_8);
    }
    VAR_7 = FUNC_0(VAR_5, VAR_6, FUNC_1(VAR_2,VAR_3));
    if ((VAR_7 != 0) || (VAR_2 == VAR_3)) {
        goto finish;
    }
    if (VAR_3 > VAR_2) {
        VAR_4 = VAR_6+VAR_2;
        VAR_7 = -1;
        VAR_9 = VAR_3-VAR_2;
    }
    else {
        VAR_4 = VAR_5+VAR_3;
        VAR_7 = 1;
        VAR_9=VAR_2-VAR_3;
    }
    while (VAR_9--) {
        if (*VAR_4 != 0) {
            goto finish;
        }
        VAR_4++;
    }
    VAR_7 = 0;

 finish:
    if (VAR_5 != VAR_0) {
        FUNC_2(VAR_5);
    }
    if (VAR_6 != VAR_1) {
        FUNC_2(VAR_6);
    }
    return VAR_7;
}
