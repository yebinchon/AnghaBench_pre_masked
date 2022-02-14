
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int const LONG ;
typedef int * HWND ;
typedef int DWORD ;


 unsigned int FUNC_0 (int const*) ;
 int const VAR_0 ;





 int * FUNC_1 (int ,char*,char*,int,int,int,int,int,int ,int ,int ,int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *,int ) ;
 int const VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int * FUNC_4 (int const,int *) ;
 int FUNC_5 (int,char*) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void FUNC_7(void)
{
    static const DWORD VAR_4[] =
    {
        131,
        135,
        138,
        140,
        130,
        142,
        141,
        133,
        128,
        139,
        132,
        129,
        134,
        137,
        136,
    };

    struct button_desc
    {
        HWND self;
        HWND parent;
        LONG style;
    };
    unsigned int VAR_5;
    HWND VAR_6;

    VAR_6 = FUNC_1(0, "TestParentClass", "Test parent", VAR_2 | VAR_3,
                             100, 100, 200, 200, 0, 0, 0, ((void*)0));
    FUNC_5(VAR_6 != 0, "Failed to create parent window\n");

    for (VAR_5 = 0; VAR_5 < FUNC_0(VAR_4); VAR_5++)
    {
        struct button_desc *VAR_7;
        HWND VAR_8;

        VAR_8 = FUNC_4(VAR_4[VAR_5], VAR_6);
        FUNC_5(VAR_8 != ((void*)0), "Failed to create a button.\n");

        VAR_7 = (void *)FUNC_3(VAR_8, 0);
        FUNC_5(VAR_7 != ((void*)0), "Expected window data.\n");

        if (VAR_7)
        {
            FUNC_5(VAR_7->self == VAR_8, "Unexpected 'self' field.\n");
            FUNC_5(VAR_7->parent == VAR_6, "Unexpected 'parent' field.\n");
            FUNC_5(VAR_7->style == (VAR_1 | VAR_0 | VAR_4[VAR_5]), "Unexpected 'style' field.\n");
        }


        FUNC_6(VAR_8);

        FUNC_2(VAR_8);
    }

    FUNC_2(VAR_6);
}
