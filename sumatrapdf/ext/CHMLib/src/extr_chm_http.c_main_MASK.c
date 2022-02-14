
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct option {char* member_0; char member_3; int member_2; int member_1; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 char* VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,char*,char*) ;
 int FUNC_4 (int,char**,char*,struct option*,int*) ;
 int VAR_2 ;
 char* VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_5 (char*,char*,int) ;
 int FUNC_6 (char*) ;

int FUNC_7(int VAR_7, char **VAR_8)
{
    int VAR_9 = 0;

    struct option VAR_10[] =
    {
        { "port", VAR_5, 0, 'p' },
        { "bind", VAR_5, 0, 'b' },
        { "help", VAR_2, 0, 'h' },
        { 0, 0, 0, 0 }
    };

    while (1)
    {
        int VAR_11;
        VAR_11 = FUNC_4 (VAR_7, VAR_8, "n:b:h", VAR_10, &VAR_9);
        if (VAR_11 < 0)
        {
            break;
        }

        switch (VAR_11)
        {
            case 'p':
                VAR_1 = FUNC_0 (VAR_3);
                if (VAR_1 <= 0)
                {
                    FUNC_3(VAR_6, "bad port number (%s)\n", VAR_3);
                    FUNC_2(1);
                }
                break;

            case 'b':
                FUNC_5 (VAR_0, VAR_3, 65536);
                VAR_0[65535] = '\0';
                break;

            case 'h':
                FUNC_6 (VAR_8[0]);
                break;
        }

    }

    if (VAR_4 + 1 != VAR_7)
    {
        FUNC_6 (VAR_8[0]);
    }


    FUNC_1(VAR_8[VAR_4]);



    return 0;
}
