
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gc_arena {int dummy; } ;
struct buffer {int dummy; } ;


 char const* FUNC_0 (struct buffer*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 char VAR_10 ;
 struct buffer FUNC_1 (size_t const,struct gc_arena*) ;
 int FUNC_2 (struct buffer*,char*,char const*,...) ;
 scalar_t__ FUNC_3 (char const*,char*) ;
 char* FUNC_4 (char const*,int ,int const,char,struct gc_arena*) ;
 int FUNC_5 (char const*) ;
 scalar_t__ FUNC_6 (char const*) ;

const char *
FUNC_7(const char *VAR_11, const char *VAR_12,
                  struct gc_arena *VAR_13)
{




    const int VAR_14 = VAR_9;


    if (!VAR_13)
    {
        return ((void*)0);
    }

    const char *VAR_15 = FUNC_4(VAR_12, VAR_7, VAR_14, '_', VAR_13);

    if (VAR_15
        && FUNC_3(VAR_15, ".")
        && FUNC_3(VAR_15, "..")



        )
    {
        const size_t VAR_16 = FUNC_5(VAR_15) + (VAR_11 ? FUNC_5(VAR_11) : 0) + 16;
        struct buffer VAR_17 = FUNC_1(VAR_16, VAR_13);
        char VAR_18[2];

        VAR_18[0] = VAR_10;
        VAR_18[1] = '\0';

        if (VAR_11)
        {
            FUNC_2(&VAR_17, "%s%s", VAR_11, VAR_18);
        }
        FUNC_2(&VAR_17, "%s", VAR_15);

        return FUNC_0(&VAR_17);
    }
    else
    {
        return ((void*)0);
    }
}
