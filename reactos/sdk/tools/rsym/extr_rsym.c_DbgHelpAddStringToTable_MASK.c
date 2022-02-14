
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct DbgHelpStringTab {unsigned int Length; char*** Table; int Bytes; } ;


 unsigned int FUNC_0 (char*) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (char*) ;
 char** FUNC_3 (char**,int) ;
 int VAR_0 ;
 scalar_t__ FUNC_4 (char*,char*) ;
 scalar_t__ FUNC_5 (char*) ;

__attribute__((used)) static int
FUNC_6(struct DbgHelpStringTab *VAR_1, char *VAR_2)
{
    unsigned int VAR_3 = FUNC_0(VAR_2) % VAR_1->Length;
    char **VAR_4 = VAR_1->Table[VAR_3];
    int VAR_5;
    char **VAR_6;

    if (VAR_4)
    {
        for (VAR_5 = 0; VAR_4[VAR_5] && FUNC_4(VAR_4[VAR_5], VAR_2); VAR_5++);
        if (VAR_4[VAR_5])
        {
            FUNC_2(VAR_2);
            return (VAR_5 << 10) | VAR_3;
        }
    }
    else
        VAR_5 = 0;


    VAR_1->Bytes += FUNC_5(VAR_2) + 1;

    VAR_6 = FUNC_3(VAR_1->Table[VAR_3], (VAR_5+2) * sizeof(char *));

    if (!VAR_6)
    {
        FUNC_1(VAR_0, "realloc failed!\n");
        return -1;
    }

    VAR_1->Table[VAR_3] = VAR_6;
    VAR_1->Table[VAR_3][VAR_5+1] = 0;
    VAR_1->Table[VAR_3][VAR_5] = VAR_2;
    return (VAR_5 << 10) | VAR_3;
}
