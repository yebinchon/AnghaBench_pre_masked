
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (scalar_t__*,char*) ;
 int FUNC_2 (int,char*,scalar_t__*,...) ;
 int VAR_1 ;
 scalar_t__* VAR_2 ;
 char* VAR_3 ;
 int FUNC_3 (int *,int *) ;
 scalar_t__ FUNC_4 (scalar_t__*,char*) ;
 int FUNC_5 (int ) ;

int
FUNC_6(FILE **VAR_4)
{
    if (*VAR_2)
    {
        if (*VAR_4)
            FUNC_0(*VAR_4);
        *VAR_4 = ((void*)0);

        if (FUNC_4(VAR_2,"none") == 0)
            return 0;

        *VAR_4 = FUNC_1(VAR_2, VAR_3 ? VAR_3 : "a");
        if (*VAR_4)
        {

            if (!VAR_1)
            {
                FUNC_2(1, "Disabling log buffering on %s\n", VAR_2);
                FUNC_3(*VAR_4, ((void*)0));
            }
            else
                FUNC_2(1, "Enabling log buffering on %s\n", VAR_2);
        }
        else
        {
            FUNC_2(0, "Could not open logfile %s (%s)\n", VAR_2, FUNC_5(VAR_0));
            return 2;
        }
    }
    return 0;
}
