
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ BOOL ;


 scalar_t__ VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (int) ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (int,char*,int,scalar_t__,int ,char const*) ;
 scalar_t__ FUNC_3 (char const*) ;

__attribute__((used)) static void FUNC_4(void)
{
    int VAR_2;
    BOOL VAR_3;
    BOOL VAR_4 = VAR_1;

    const char * VAR_5[] = {

        "@@BXlmblBAAAAAAAAAAAAAAAAAAAAA",
        "@@BAAAAAAAAAAAAAAAAAAAAAAAAAAA",


        "@@CCAAAAA0BA",
        "@@CIAAAAA0BQZAMHA0BA",




        "winetest",
        "",
        "@@",
        "@@A",
        "@@AA",
        "@@AAA",
        "@@B",
        "@@BB",
        "@@BBB",


        "@@BAAAAAAAAAAAAAAAAAAAAAAAAAAAA",
        "@@BAAAAAAAAAAAAAAAAAAAAAAAAAA",
        "@@BAAAAAAAAAAAAAAAAAAAAAAAAAA+",
        "@@BAAAAAAAAAAAAAAAAAAAAAAAAAA:",
        "@@BAAAAAAAAAAAAAAAAAAAAAAAAAA>",
        "@@BAAAAAAAAAAAAAAAAAAAAAAAAAA<",

        "@@C",
        "@@CC",
        "@@CCC",
        "@@D",
        "@@DD",
        "@@DDD",
        ((void*)0)};

    for (VAR_2 = 0; VAR_5[VAR_2]; VAR_2++)
    {
        if (*VAR_5[VAR_2] != '@')
            VAR_4 = VAR_0;

        FUNC_1(0xdeadbeef);
        VAR_3 = FUNC_3(VAR_5[VAR_2]);
        if (VAR_4)
            FUNC_2(VAR_3 != VAR_0, "%d: got %d and %u for %s (expected TRUE)\n", VAR_2, VAR_3, FUNC_0(), VAR_5[VAR_2]);
        else
        {

            FUNC_2(!VAR_3, "%d: got %d and %u for %s (expected FALSE)\n", VAR_2, VAR_3, FUNC_0(), VAR_5[VAR_2]);
        }
    }
}
