
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct Masscan {int dummy; } ;
typedef int filename ;
typedef int FILE ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int **,char*,char*) ;
 int FUNC_2 (int ,char*,...) ;
 int FUNC_3 (struct Masscan*,int *,int ) ;
 int FUNC_4 (char*) ;
 int VAR_0 ;
 int FUNC_5 (char*,int,char*) ;

void
FUNC_6(struct Masscan *VAR_1)
{
    char VAR_2[512];
    FILE *VAR_3;
    int VAR_4;


    FUNC_5(VAR_2, sizeof(VAR_2), "paused.conf");
    FUNC_2(VAR_0, "                                   "
                    "                                   \r");
    FUNC_2(VAR_0, "saving resume file to: %s\n", VAR_2);

    VAR_4 = FUNC_1(&VAR_3, VAR_2, "wt");
    if (VAR_4) {
        FUNC_4(VAR_2);
        return;
    }


    FUNC_3(VAR_1, VAR_3, 0);

    FUNC_0(VAR_3);
}
