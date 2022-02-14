
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wint_t ;
typedef int * _locale_t ;


 int FUNC_0 (char const**) ;
 int VAR_0 ;
 int FUNC_1 (int,char*,int,int) ;
 int * FUNC_2 (int ,char const*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int,int *) ;
 int FUNC_5 (int,int *) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int ,char*) ;
 int FUNC_9 (char*) ;

__attribute__((used)) static void FUNC_10(void)
{
    int VAR_1, VAR_2;
    wint_t VAR_3, VAR_4;
    _locale_t VAR_5;
    static const char *VAR_6[] = { ((void*)0), "C" };


    FUNC_8(VAR_0, "C");
    for (VAR_1 = 0; VAR_1 <= 0xffff; VAR_1++)
    {
        VAR_3 = FUNC_6(VAR_1);
        if (VAR_1 >= 'A' && VAR_1 <= 'Z')
        {
            VAR_4 = VAR_1 + 'a' - 'A';
            FUNC_1(VAR_3 == VAR_4, "expected %x, got %x for C locale\n", VAR_4, VAR_3);
        }
        else
            FUNC_1(VAR_3 == VAR_1, "expected self %x, got %x for C locale\n", VAR_1, VAR_3);

        VAR_3 = FUNC_7(VAR_1);
        if (VAR_1 >= 'a' && VAR_1 <= 'z')
        {
            VAR_4 = VAR_1 + 'A' - 'a';
            FUNC_1(VAR_3 == VAR_4, "expected %x, got %x for C locale\n", VAR_4, VAR_3);
        }
        else
            FUNC_1(VAR_3 == VAR_1, "expected self %x, got %x for C locale\n", VAR_1, VAR_3);
    }

    if (!&FUNC_4 || !&FUNC_5 || !&FUNC_2)
    {
        FUNC_9("_towlower_l/_towupper_l/_create_locale not available\n");
        return;
    }

    for (VAR_1 = 0; VAR_1 < FUNC_0(VAR_6); VAR_1++) {
        VAR_5 = VAR_6[VAR_1] ? FUNC_2(VAR_0, VAR_6[VAR_1]) : ((void*)0);

        for (VAR_2 = 0; VAR_2 <= 0xffff; VAR_2++) {
            VAR_3 = FUNC_4(VAR_2, VAR_5);
            if (VAR_2 >= 'A' && VAR_2 <= 'Z')
            {
                VAR_4 = VAR_2 + 'a' - 'A';
                FUNC_1(VAR_3 == VAR_4, "expected %x, got %x for C locale\n", VAR_4, VAR_3);
            }
            else
                FUNC_1(VAR_3 == VAR_2, "expected self %x, got %x for C locale\n", VAR_2, VAR_3);

            VAR_3 = FUNC_5(VAR_2, VAR_5);
            if (VAR_2 >= 'a' && VAR_2 <= 'z')
            {
                VAR_4 = VAR_2 + 'A' - 'a';
                FUNC_1(VAR_3 == VAR_4, "expected %x, got %x for C locale\n", VAR_4, VAR_3);
            }
            else
                FUNC_1(VAR_3 == VAR_2, "expected self %x, got %x for C locale\n", VAR_2, VAR_3);
        }

        FUNC_3(VAR_5);
    }
}
