
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int st_mode; } ;
typedef TYPE_1__ platform_stat_t ;


 int const VAR_0 ;
 int const VAR_1 ;
 int const VAR_2 ;
 int const VAR_3 ;
 int const VAR_4 ;
 int const VAR_5 ;
 int const VAR_6 ;
 char* VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int const VAR_14 ;
 int const VAR_15 ;
 char* FUNC_0 (char*) ;
 int VAR_16 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int,char*,char const*,...) ;
 scalar_t__ FUNC_3 (char const*,int const) ;
 scalar_t__ FUNC_4 (char const*,TYPE_1__*) ;
 scalar_t__ FUNC_5 (char const*,char*) ;
 char* FUNC_6 (char const*,int *) ;

__attribute__((used)) static bool
FUNC_7(const int VAR_17, const char *VAR_18, const int VAR_19, const char *VAR_20)
{
    int VAR_21 = 0;


    if (!VAR_18)
    {
        return 0;
    }


    if ((VAR_17 & VAR_4) && FUNC_5(VAR_18, VAR_7) )
    {
        return 0;
    }




    if ( (VAR_17 & VAR_0) && FUNC_5(VAR_18, "stdin") )
    {
        return 0;
    }


    if (VAR_17 & VAR_1)
    {
        char *VAR_22 = FUNC_6(VAR_18, ((void*)0));
        char *VAR_23 = FUNC_0(VAR_22);

        if (FUNC_3(VAR_23, VAR_19|VAR_15) != 0)
        {
            VAR_21 = VAR_16;
        }
        FUNC_1(VAR_22);
    }


    if (!VAR_21 && (VAR_17 & VAR_2) && (FUNC_3(VAR_18, VAR_19) != 0) )
    {
        VAR_21 = VAR_16;
    }


    if (!VAR_21 && (VAR_17 & VAR_3) && (FUNC_3(VAR_18, VAR_6) == 0) )
    {
        if (FUNC_3(VAR_18, VAR_14) != 0)
        {
            VAR_21 = VAR_16;
        }
    }


    if (VAR_17 & VAR_5)
    {
        platform_stat_t VAR_24;
        if (FUNC_4(VAR_18, &VAR_24))
        {
            FUNC_2(VAR_11 | VAR_8, "WARNING: cannot stat file '%s'", VAR_18);
        }

        else
        {
            if (VAR_24.st_mode & (VAR_12|VAR_13))
            {
                FUNC_2(VAR_11, "WARNING: file '%s' is group or others accessible", VAR_18);
            }
        }

    }


    if (VAR_21 > 0)
    {
        FUNC_2(VAR_9 | VAR_10 | VAR_8, "%s fails with '%s'", VAR_20, VAR_18);
    }


    return (VAR_21 != 0 ? 1 : 0);
}
