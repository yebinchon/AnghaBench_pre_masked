
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int temp ;
struct TYPE_3__ {int major; int minor; int micro; int pipe_in; } ;
typedef TYPE_1__* PNegoHelper ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (char*) ;
 char* FUNC_3 (char*,char,int) ;
 int FUNC_4 (int ,char*,int) ;
 int FUNC_5 (char*,char*,int*,int*,int*) ;

void FUNC_6(PNegoHelper VAR_0)
{
    char VAR_1[80];
    char *VAR_2;
    int VAR_3 = 0, VAR_4 = 0, VAR_5 = 0, VAR_6;

    FUNC_1("Checking version of helper\n");
    if(VAR_0 != ((void*)0))
    {
        int VAR_7 = FUNC_4(VAR_0->pipe_in, VAR_1, sizeof(VAR_1)-1);
        if (VAR_7 > 8)
        {
            if((VAR_2 = FUNC_3(VAR_1, '\n', VAR_7)) != ((void*)0))
                *VAR_2 = '\0';
            else
                VAR_1[VAR_7] = 0;

            FUNC_1("Exact version is %s\n", FUNC_2(VAR_1));
            VAR_6 = FUNC_5(VAR_1, "Version %d.%d.%d", &VAR_3, &VAR_4, &VAR_5);
            if(VAR_6 != 3)
            {
                FUNC_0("Failed to get the helper version.\n");
                VAR_0->major = VAR_0->minor = VAR_0->micro = -1;
            }
            else
            {
                FUNC_1("Version recognized: %d.%d.%d\n", VAR_3, VAR_4, VAR_5);
                VAR_0->major = VAR_3;
                VAR_0->minor = VAR_4;
                VAR_0->micro = VAR_5;
            }
        }
    }
}
