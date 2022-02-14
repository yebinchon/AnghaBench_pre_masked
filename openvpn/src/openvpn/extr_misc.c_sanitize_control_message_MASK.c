
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gc_arena {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 char* FUNC_1 (scalar_t__,int,struct gc_arena*) ;
 scalar_t__ FUNC_2 (char const*) ;
 int FUNC_3 (char const*,char*,int) ;

const char *
FUNC_4(const char *VAR_1, struct gc_arena *VAR_2)
{
    char *VAR_3 = FUNC_1(FUNC_2(VAR_1)+1, 0, VAR_2);
    char *VAR_4 = VAR_3;
    bool VAR_5 = 0;
    int VAR_6 = 0;

    for (;; )
    {
        const char VAR_7 = *VAR_1;
        if (VAR_7 == '\0')
        {
            break;
        }
        if (VAR_7 == 'S' && !FUNC_3(VAR_1, "SESS_ID_", 8))
        {
            VAR_6 = 7;
            VAR_5 = 1;
        }
        else if (VAR_7 == 'e' && !FUNC_3(VAR_1, "echo ", 5))
        {
            VAR_6 = 4;
            VAR_5 = 1;
        }
        else if (!FUNC_0(VAR_0)
                 && (VAR_7 == 'a' && !FUNC_3(VAR_1, "auth-token ", 11)))
        {



            VAR_6 = 10;
            VAR_5 = 1;
        }

        if (VAR_7 == ',')
        {
            VAR_6 = 0;
            VAR_5 = 0;
        }

        if (VAR_5)
        {
            if (VAR_6 > 0)
            {
                --VAR_6;
                *VAR_4++ = VAR_7;
            }
        }
        else
        {
            *VAR_4++ = VAR_7;
        }

        ++VAR_1;
    }
    *VAR_4 = '\0';
    return VAR_3;
}
