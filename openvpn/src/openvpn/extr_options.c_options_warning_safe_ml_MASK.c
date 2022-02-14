
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gc_arena {int dummy; } ;
struct buffer {int dummy; } ;


 scalar_t__ VAR_0 ;
 struct buffer FUNC_0 (scalar_t__,struct gc_arena*) ;
 int FUNC_1 (struct buffer*,char*,char const*) ;
 int FUNC_2 (struct gc_arena*) ;
 struct gc_arena FUNC_3 () ;
 int FUNC_4 (int const,char,int,struct buffer*,struct buffer*,char*,char*) ;

__attribute__((used)) static void
FUNC_5(const int VAR_1, char *VAR_2, const char *VAR_3, size_t VAR_4)
{
    struct gc_arena VAR_5 = FUNC_3();

    if (VAR_4 > 0)
    {
        struct buffer VAR_6 = FUNC_0(VAR_0 + 16, &VAR_5);
        struct buffer VAR_7 = FUNC_0(VAR_0 + 16, &VAR_5);
        VAR_2[VAR_4 - 1] = 0;

        FUNC_1(&VAR_6, "version %s", VAR_3);
        FUNC_1(&VAR_7, "version %s", VAR_2);

        FUNC_4(VAR_1, ',', 1,
                                   &VAR_6, &VAR_7,
                                   "local", "remote");

        FUNC_4(VAR_1, ',', 0,
                                   &VAR_7, &VAR_6,
                                   "remote", "local");
    }

    FUNC_2(&VAR_5);
}
