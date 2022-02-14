
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gc_arena {int dummy; } ;
struct buffer {scalar_t__ data; } ;



 int const VAR_0 ;

 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 struct buffer FUNC_2 (int,struct gc_arena*) ;
 int FUNC_3 (struct buffer*,char*,...) ;

__attribute__((used)) static const char *
FUNC_4(int VAR_1, struct gc_arena *VAR_2)
{
    struct buffer VAR_3 = FUNC_2(256, VAR_2);

    switch (VAR_1)
    {
        case 128:
            FUNC_3(&VAR_3, "disallowed by script-security setting");
            break;
        case 129:
            FUNC_3(&VAR_3, "external program fork failed");
            break;

        default:
            if (!FUNC_1(VAR_1))
            {
                FUNC_3(&VAR_3, "external program did not exit normally");
            }
            else
            {
                const int VAR_4 = FUNC_0(VAR_1);
                if (!VAR_4)
                {
                    FUNC_3(&VAR_3, "external program exited normally");
                }
                else if (VAR_4 == VAR_0)
                {
                    FUNC_3(&VAR_3, "could not execute external program");
                }
                else
                {
                    FUNC_3(&VAR_3, "external program exited with error status: %d", VAR_4);
                }
            }
            break;

    }
    return (const char *)VAR_3.data;
}
