
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int BOOL ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int,char*,int) ;
 int FUNC_2 (char*,char*) ;
 int FUNC_3 (char const*) ;

__attribute__((used)) static void FUNC_4(void)
{
    static const char *VAR_0 = "[]{}(),;?*=!@\\";
    char VAR_1[10];
    int VAR_2;
    BOOL VAR_3;

    FUNC_2(VAR_1, "wine10");
    for(VAR_2 = 0; VAR_2 < FUNC_3(VAR_0); VAR_2++)
    {
        VAR_1[4] = VAR_0[VAR_2];
        VAR_3 = FUNC_0(VAR_1);
        FUNC_1(!VAR_3, "got %d\n", VAR_3);
    }


    VAR_3 = FUNC_0("Wine123456789012345678901234567890");
    FUNC_1(!VAR_3, "got %d\n", VAR_3);


    VAR_3 = FUNC_0("Wine Vinegar");
    FUNC_1(VAR_3, "got %d\n", VAR_3);


    VAR_3 = FUNC_0("12345678901234567890123456789012");
    FUNC_1(VAR_3, "got %d\n", VAR_3);
}
