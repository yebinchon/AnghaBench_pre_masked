
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gc_arena {int dummy; } ;


 char* FUNC_0 (size_t,int,struct gc_arena*) ;
 int FUNC_1 (char*,char const*,size_t) ;
 char* FUNC_2 (char const*,char) ;
 int FUNC_3 (char const*) ;
 scalar_t__ FUNC_4 (char const*,char const*,size_t const) ;

char *
FUNC_5(const char *VAR_0,const char *VAR_1,
                              struct gc_arena *VAR_2)
{
    char *VAR_3 = ((void*)0);
    const size_t VAR_4 = FUNC_3(VAR_1);

    const char *VAR_5 = VAR_0;
    while (VAR_5)
    {
        if (0 == FUNC_4(VAR_5, VAR_1, VAR_4)
            && FUNC_3(VAR_5) > (VAR_4+1) && VAR_5[VAR_4] == ' ')
        {

            const char *VAR_6 = &VAR_5[VAR_4+1];
            const char *VAR_7 = FUNC_2(VAR_5, ',');
            size_t VAR_8 = VAR_7 ? VAR_7 - VAR_6 : FUNC_3(VAR_6);
            VAR_3 = FUNC_0(VAR_8+1, 1, VAR_2);
            FUNC_1(VAR_3, VAR_6, VAR_8);
            break;
        }
        VAR_5 = FUNC_2(VAR_5, ',');
        if (VAR_5)
        {
            VAR_5++;
        }
    }
    return VAR_3;
}
