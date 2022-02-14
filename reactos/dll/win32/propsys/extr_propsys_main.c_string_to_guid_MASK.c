
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int Data1; int Data2; int Data3; int* Data4; } ;
typedef TYPE_1__* LPGUID ;
typedef size_t* LPCWSTR ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int* VAR_2 ;
 int FUNC_0 (size_t*,int,int) ;

__attribute__((used)) static BOOL FUNC_1(LPCWSTR VAR_3, LPGUID VAR_4)
{


    if (!FUNC_0(VAR_3, 0, 8)) return VAR_0;
    VAR_4->Data1 = (VAR_2[VAR_3[1]] << 28 | VAR_2[VAR_3[2]] << 24 | VAR_2[VAR_3[3]] << 20 | VAR_2[VAR_3[4]] << 16 |
                 VAR_2[VAR_3[5]] << 12 | VAR_2[VAR_3[6]] << 8 | VAR_2[VAR_3[7]] << 4 | VAR_2[VAR_3[8]]);
    if (!FUNC_0(VAR_3, 9, 14)) return VAR_0;
    VAR_4->Data2 = VAR_2[VAR_3[10]] << 12 | VAR_2[VAR_3[11]] << 8 | VAR_2[VAR_3[12]] << 4 | VAR_2[VAR_3[13]];
    if (!FUNC_0(VAR_3, 15, 19)) return VAR_0;
    VAR_4->Data3 = VAR_2[VAR_3[15]] << 12 | VAR_2[VAR_3[16]] << 8 | VAR_2[VAR_3[17]] << 4 | VAR_2[VAR_3[18]];



    if (!FUNC_0(VAR_3, 20, 21)) return VAR_0;
    VAR_4->Data4[0] = VAR_2[VAR_3[20]] << 4 | VAR_2[VAR_3[21]];
    if (!FUNC_0(VAR_3, 22, 24)) return VAR_0;
    VAR_4->Data4[1] = VAR_2[VAR_3[22]] << 4 | VAR_2[VAR_3[23]];

    if (!FUNC_0(VAR_3, 25, 26)) return VAR_0;
    VAR_4->Data4[2] = VAR_2[VAR_3[25]] << 4 | VAR_2[VAR_3[26]];
    if (!FUNC_0(VAR_3, 27, 28)) return VAR_0;
    VAR_4->Data4[3] = VAR_2[VAR_3[27]] << 4 | VAR_2[VAR_3[28]];
    if (!FUNC_0(VAR_3, 29, 30)) return VAR_0;
    VAR_4->Data4[4] = VAR_2[VAR_3[29]] << 4 | VAR_2[VAR_3[30]];
    if (!FUNC_0(VAR_3, 31, 32)) return VAR_0;
    VAR_4->Data4[5] = VAR_2[VAR_3[31]] << 4 | VAR_2[VAR_3[32]];
    if (!FUNC_0(VAR_3, 33, 34)) return VAR_0;
    VAR_4->Data4[6] = VAR_2[VAR_3[33]] << 4 | VAR_2[VAR_3[34]];
    if (!FUNC_0(VAR_3, 35, 37)) return VAR_0;
    VAR_4->Data4[7] = VAR_2[VAR_3[35]] << 4 | VAR_2[VAR_3[36]];

    return VAR_1;
}
