
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,char*,int) ;
 char* FUNC_1 (char*,char*) ;

__attribute__((used)) static void FUNC_2(char *VAR_0, int VAR_1)
{
    char *VAR_2 = VAR_0, *VAR_3 = VAR_0;

    do {
        while(*VAR_3 == ' ' || *VAR_3 == '\t')
        {
            VAR_3++;
            VAR_1--;
        }
        if(VAR_3 != VAR_2)
            FUNC_0(VAR_2, VAR_3, VAR_1 + 1);

        VAR_3 = FUNC_1(VAR_2, "\r\n");
        VAR_1 -= (VAR_3 - VAR_2);
        VAR_2 = VAR_3;
        *VAR_2 = ' ';
        VAR_2++;
        VAR_1--;
        VAR_3 += 2;
    } while(*VAR_3 == ' ' || *VAR_3 == '\t');

    *(VAR_2 - 1) = '\0';
}
