
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ULONG ;
typedef char* PCHAR ;
typedef int FILE ;
typedef int BOOLEAN ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (char*,int ,int *) ;
 int VAR_2 ;
 char* FUNC_1 (char*,char) ;
 char* FUNC_2 (char*,char*) ;

BOOLEAN
FUNC_3(PCHAR VAR_3,
         ULONG VAR_4,
         FILE *VAR_5)
{
    PCHAR VAR_6, VAR_7;


    while (FUNC_0(VAR_3, VAR_4, VAR_5))
    {

        VAR_2++;


        VAR_6 = VAR_3;


        while ((*VAR_6) && ((*VAR_6 == ' ') || (*VAR_6 == '\t'))) VAR_6++;


        if (*VAR_6 == ';') continue;


        VAR_7 = FUNC_2(VAR_6, "//");
        if (VAR_7)
        {

            if (VAR_7 == VAR_6) continue;
            *VAR_7 = '\0';
        }
        else
        {

            VAR_6 = FUNC_1(VAR_6, '\n');
            if (VAR_6) *VAR_6 = '\0';
        }


        return VAR_1;
    }


    return VAR_0;
}
