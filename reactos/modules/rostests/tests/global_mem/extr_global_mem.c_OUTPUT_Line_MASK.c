
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,char const*,int) ;
 int FUNC_1 (char*,int ,int) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*,char*,char const*) ;
 size_t FUNC_4 (char const*) ;

void FUNC_5(const char *VAR_2)
{
    int VAR_3 = 0;
    char VAR_4[VAR_1];

    FUNC_1(VAR_4, 0, VAR_0 + 2);




    if (VAR_0 - 2 < FUNC_4(VAR_2))
    {
        for (VAR_3 = VAR_0 / 2; VAR_3 < VAR_0 - 2; VAR_3++)
        {
            if (' ' == VAR_2[VAR_3])
            {
                break;
            }
        }

        FUNC_0(VAR_4 + 2, VAR_2, VAR_3 + 1);
        VAR_4[0] = '|';
        VAR_4[1] = ' ';
        VAR_4[FUNC_4(VAR_4)] = '\n';
        FUNC_2(VAR_4);

        FUNC_5(VAR_2 + VAR_3 + 1);
    }
    else
    {
        FUNC_3(VAR_4,"| %s\n", VAR_2);
        FUNC_2(VAR_4);
    }

}
