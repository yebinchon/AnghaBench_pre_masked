
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int Rows; int Cols; } ;
typedef TYPE_1__ WhoamiTable ;
typedef int UINT ;
typedef int LPWSTR ;


 int FUNC_0 () ;
 int VAR_0 ;
 TYPE_1__* FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (char*) ;

WhoamiTable *FUNC_4(UINT VAR_1, UINT VAR_2)
{
    WhoamiTable *VAR_3 = FUNC_1(FUNC_0(),
                                    VAR_0,
                                    sizeof(WhoamiTable) + sizeof(LPWSTR) * VAR_1 * VAR_2);



    if (!VAR_3)
    {
        FUNC_3(L"ERROR: Not enough memory for displaying the table.");
        FUNC_2(1);
    }

    VAR_3->Rows = VAR_1;
    VAR_3->Cols = VAR_2;

    return VAR_3;
}
