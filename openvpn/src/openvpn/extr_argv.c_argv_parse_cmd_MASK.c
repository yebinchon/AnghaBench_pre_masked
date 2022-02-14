
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gc_arena {int dummy; } ;
struct argv {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct argv*,int ) ;
 int FUNC_1 (struct argv*,int) ;
 int FUNC_2 (struct argv*) ;
 int FUNC_3 (struct gc_arena*) ;
 struct gc_arena FUNC_4 () ;
 int FUNC_5 (char const*,char**,int ,char*,int ,int ,struct gc_arena*) ;
 int FUNC_6 (char const*,int *) ;

void
FUNC_7(struct argv *VAR_2, const char *VAR_3)
{
    int VAR_4;
    char *VAR_5[VAR_1 + 1];
    struct gc_arena VAR_6 = FUNC_4();

    FUNC_2(VAR_2);
    FUNC_1(VAR_2, 1);

    VAR_4 = FUNC_5(VAR_3, VAR_5, VAR_1, "SCRIPT-ARGV", 0, VAR_0, &VAR_6);
    if (VAR_4)
    {
        int VAR_7;
        for (VAR_7 = 0; VAR_7 < VAR_4; ++VAR_7)
        {
            FUNC_0(VAR_2, FUNC_6(VAR_5[VAR_7], ((void*)0)));
        }
    }
    else
    {
        FUNC_0(VAR_2, FUNC_6(VAR_3, ((void*)0)));
    }

    FUNC_3(&VAR_6);
}
