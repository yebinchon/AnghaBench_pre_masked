
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t Cols; scalar_t__* Content; } ;
typedef TYPE_1__ WhoamiTable ;
typedef int WCHAR ;
typedef size_t UINT ;
typedef scalar_t__ LPWSTR ;
typedef int Entry ;


 int FUNC_0 () ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (scalar_t__,int *) ;
 int FUNC_4 (int *) ;

void FUNC_5(WhoamiTable *VAR_1, WCHAR *VAR_2, UINT VAR_3, UINT VAR_4)
{
    LPWSTR VAR_5 = FUNC_1(FUNC_0(),
                              VAR_0,
                              1 + FUNC_4(VAR_2) * sizeof(VAR_2[0]));



    if (!VAR_5)
        FUNC_2(1);

    FUNC_3(VAR_5, VAR_2);

    VAR_1->Content[VAR_3 * VAR_1->Cols + VAR_4] = VAR_5;
}
