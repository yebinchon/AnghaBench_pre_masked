
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * ptail; int phead; } ;
typedef int LIST_MEMBER ;
typedef int FILE ;


 int VAR_0 ;
 TYPE_1__ VAR_1 ;
 int * FUNC_0 (char*) ;
 char* VAR_2 ;
 int FUNC_1 (TYPE_1__*,int *) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (char*,int,int *) ;
 int * FUNC_4 (char*,char*) ;
 int FUNC_5 (int,char*,char*) ;

int
FUNC_6(void)
{
    FILE *VAR_3;
    LIST_MEMBER *VAR_4;
    char VAR_5[VAR_0 + 1];
    int VAR_6 = 0;

    VAR_5[VAR_0] = '\0';

    VAR_3 = FUNC_4(VAR_2, "r");
    if (!VAR_3)
    {
        FUNC_5(1, "Open %s failed\n", VAR_2);
        return 2;
    }
    VAR_1.phead = *(VAR_1.ptail = ((void*)0));

    while (FUNC_3(VAR_5, VAR_0, VAR_3) != ((void*)0))
    {
        VAR_4 = FUNC_0(VAR_5);
        if (!VAR_4)
        {
            FUNC_5(2, "** Create entry failed of: %s\n", VAR_5);
        }
        else
            FUNC_1(&VAR_1, VAR_4);
    }

    FUNC_2(VAR_3);
    return VAR_6;
}
