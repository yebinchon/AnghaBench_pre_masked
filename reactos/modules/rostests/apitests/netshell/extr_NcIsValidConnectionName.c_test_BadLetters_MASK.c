
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WCHAR ;
typedef scalar_t__ BOOL ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int,char*,int ,int) ;
 scalar_t__ FUNC_1 (int*) ;
 int * FUNC_2 (int*,char*) ;
 int FUNC_3 (int*) ;

__attribute__((used)) static void FUNC_4(void)
{
    BOOL VAR_2;

    WCHAR VAR_3[3] = { 0 };
    int VAR_4;

    for (VAR_4 = 1; VAR_4 <= 0xFFFF; ++VAR_4)
    {
        VAR_3[0] = (WCHAR)VAR_4;
        VAR_3[1] = VAR_3[2] = L'\0';

        if (FUNC_2(VAR_3, L"\\/:\t*? <>|\"") != ((void*)0))
        {
            VAR_2 = FUNC_1(VAR_3);
            FUNC_0(VAR_2 == VAR_0, "Expected %s (%i) to fail.\n", FUNC_3(VAR_3), VAR_4);


            VAR_3[1] = (WCHAR)VAR_4;
            VAR_2 = FUNC_1(VAR_3);
            FUNC_0(VAR_2 == VAR_0, "Expected %s (%i) to fail.\n", FUNC_3(VAR_3), VAR_4);


            VAR_3[1] = L' ';
            VAR_2 = FUNC_1(VAR_3);
            FUNC_0(VAR_2 == VAR_0, "Expected %s (%i) to fail.\n", FUNC_3(VAR_3), VAR_4);



            VAR_3[1] = L'a';
            VAR_2 = FUNC_1(VAR_3);
            if ((WCHAR)VAR_4 == L' ')
                FUNC_0(VAR_2 == VAR_1, "Expected %s (%i) to succeed.\n", FUNC_3(VAR_3), VAR_4);
            else
                FUNC_0(VAR_2 == VAR_0, "Expected %s (%i) to fail.\n", FUNC_3(VAR_3), VAR_4);
        }
        else
        {
            VAR_2 = FUNC_1(VAR_3);
            FUNC_0(VAR_2 == VAR_1, "Expected %s (%i) to succeed.\n", FUNC_3(VAR_3), VAR_4);

            VAR_3[1] = (WCHAR)VAR_4;
            VAR_2 = FUNC_1(VAR_3);
            FUNC_0(VAR_2 == VAR_1, "Expected %s (%i) to succeed.\n", FUNC_3(VAR_3), VAR_4);

            VAR_3[1] = L'a';
            VAR_2 = FUNC_1(VAR_3);
            FUNC_0(VAR_2 == VAR_1, "Expected %s (%i) to succeed.\n", FUNC_3(VAR_3), VAR_4);

            VAR_3[1] = L' ';
            VAR_2 = FUNC_1(VAR_3);
            FUNC_0(VAR_2 == VAR_1, "Expected %s (%i) to succeed.\n", FUNC_3(VAR_3), VAR_4);
        }
    }
}
