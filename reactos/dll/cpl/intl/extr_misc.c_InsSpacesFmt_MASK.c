
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WCHAR ;
typedef size_t UINT ;
typedef int* PWSTR ;
typedef int* PCWSTR ;
typedef size_t INT ;
typedef scalar_t__ BOOL ;


 scalar_t__ VAR_0 ;
 int FUNC_0 () ;
 scalar_t__ FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int ,int ,int*) ;
 int* FUNC_3 (int*,size_t) ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_4 (int*) ;
 int FUNC_5 (int*,int*) ;
 size_t FUNC_6 (int*) ;

PWSTR
FUNC_7(PCWSTR VAR_2, PCWSTR VAR_3)
{
    PWSTR VAR_4;
    PWSTR VAR_5;
    WCHAR VAR_6[255];
    UINT VAR_7 = 0;
    INT VAR_8 = 0;
    INT VAR_9 = 0;
    INT VAR_10 = 0;
    BOOL VAR_11=VAR_0;

    VAR_4 = (PWSTR)FUNC_1(FUNC_0(), 0, 255 * sizeof(WCHAR));
    if (VAR_4 == ((void*)0))
        return ((void*)0);

    FUNC_5(VAR_4, VAR_2);


    if (!*VAR_3)
        return VAR_4;


    for (VAR_7 = 0; VAR_7 <= FUNC_6(VAR_3); VAR_7++)
    {
        if (VAR_3[VAR_7] == L';' || VAR_3[VAR_7] == L'\0')
        {
            if (FUNC_4(VAR_6) == 0 && !VAR_11)
            {
                VAR_11=VAR_1;
                break;
            }


            if (VAR_11)
            {
                VAR_10 += VAR_9;
            }
            else
            {
                VAR_10 += FUNC_4(VAR_6);
            }

            VAR_6[VAR_8] = L'\0';
            VAR_8=0;


            VAR_5 = FUNC_3(VAR_4, VAR_10);
            FUNC_5(VAR_4,VAR_5);
            FUNC_2(FUNC_0(), 0, VAR_5);


            if (!VAR_11)
            {
                VAR_10++;
                VAR_9 = FUNC_4(VAR_6);
            }
        }
        else
        {
            VAR_6[VAR_8++] = VAR_3[VAR_7];
        }
    }


    if (VAR_11 && VAR_9 != 0)
    {
        for (VAR_7 = VAR_10 + VAR_9; VAR_7 < FUNC_6(VAR_4); VAR_7 += VAR_9 + 1)
        {
            VAR_5 = FUNC_3(VAR_4, VAR_7);
            FUNC_5(VAR_4, VAR_5);
            FUNC_2(FUNC_0(), 0, VAR_5);
        }
    }

    return VAR_4;
}
