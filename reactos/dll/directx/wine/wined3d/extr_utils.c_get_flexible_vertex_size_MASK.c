
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int DWORD ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
DWORD FUNC_2(DWORD VAR_7) {
    DWORD VAR_8 = 0;
    int VAR_9;
    int VAR_10 = (VAR_7 & VAR_5) >> VAR_6;

    if (VAR_7 & VAR_1) VAR_8 += 3 * sizeof(float);
    if (VAR_7 & VAR_0) VAR_8 += sizeof(DWORD);
    if (VAR_7 & VAR_4) VAR_8 += sizeof(DWORD);
    if (VAR_7 & VAR_3) VAR_8 += sizeof(DWORD);
    switch (VAR_7 & VAR_2) {
        case 135: VAR_8 += 3 * sizeof(float); break;
        case 129: VAR_8 += 4 * sizeof(float); break;
        case 134: VAR_8 += 4 * sizeof(float); break;
        case 133: VAR_8 += 5 * sizeof(float); break;
        case 132: VAR_8 += 6 * sizeof(float); break;
        case 131: VAR_8 += 7 * sizeof(float); break;
        case 130: VAR_8 += 8 * sizeof(float); break;
        case 128: VAR_8 += 4 * sizeof(float); break;
        default: FUNC_0("Unexpected position mask\n");
    }
    for (VAR_9 = 0; VAR_9 < VAR_10; VAR_9++) {
        VAR_8 += FUNC_1(VAR_7, VAR_9) * sizeof(float);
    }

    return VAR_8;
}
