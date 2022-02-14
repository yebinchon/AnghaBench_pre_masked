
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int WCHAR ;
struct TYPE_3__ {int iFreeLdrIni; int szFreeldrIni; } ;
typedef TYPE_1__* PSTARTINFO ;
typedef int LRESULT ;
typedef int HWND ;
typedef scalar_t__ HINF ;
typedef scalar_t__ DWORD ;


 int VAR_0 ;
 int FUNC_0 () ;
 scalar_t__ FUNC_1 (int **) ;
 int FUNC_2 (int ,int ,int *) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_3 (scalar_t__,int ) ;
 int FUNC_4 (scalar_t__,int ) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (scalar_t__) ;
 scalar_t__ FUNC_7 (int ,int *,int ,int *) ;
 int VAR_3 ;
 int FUNC_8 (int ,char*) ;
 int FUNC_9 (int ,int *) ;

__attribute__((used)) static LRESULT
FUNC_10(HWND VAR_4, PSTARTINFO VAR_5)
{
    DWORD VAR_6;
    WCHAR *VAR_7;
    HINF VAR_8;

    VAR_6 = FUNC_1(&VAR_7);
    if (VAR_6 == 0)
        return VAR_0;

    FUNC_9(VAR_5->szFreeldrIni, VAR_7);
    FUNC_8(VAR_5->szFreeldrIni, L"\\freeldr.ini");

    if (FUNC_5(VAR_5->szFreeldrIni))
    {

        FUNC_2(FUNC_0(), 0, VAR_7);

        VAR_8 = FUNC_7(VAR_5->szFreeldrIni,
                                ((void*)0),
                                VAR_1,
                                ((void*)0));

        if (VAR_8 != VAR_2)
        {
            FUNC_4(VAR_8, VAR_4);
            FUNC_6(VAR_8);
            VAR_5->iFreeLdrIni = 1;
            return VAR_3;
        }
        return VAR_0;
    }


    FUNC_9(VAR_5->szFreeldrIni, VAR_7);
    FUNC_8(VAR_5->szFreeldrIni, L"\\boot.ini");


    FUNC_2(FUNC_0(), 0, VAR_7);

    if (FUNC_5(VAR_5->szFreeldrIni))
    {

        VAR_8 = FUNC_7(VAR_5->szFreeldrIni,
                                ((void*)0),
                                VAR_1,
                                ((void*)0));

        if (VAR_8 != VAR_2)
        {
            FUNC_3(VAR_8, VAR_4);
            FUNC_6(VAR_8);
            VAR_5->iFreeLdrIni = 2;
            return VAR_3;
        }

        return VAR_0;
    }

    return VAR_0;
}
