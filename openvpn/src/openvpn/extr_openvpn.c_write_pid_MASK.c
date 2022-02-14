
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *,char*,unsigned int) ;
 int FUNC_2 (int ,char*,char const*) ;
 int * FUNC_3 (char const*,char*) ;
 unsigned int FUNC_4 () ;

__attribute__((used)) static void
FUNC_5(const char *VAR_1)
{
    if (VAR_1)
    {
        unsigned int VAR_2 = 0;
        FILE *VAR_3 = FUNC_3(VAR_1, "w");
        if (!VAR_3)
        {
            FUNC_2(VAR_0, "Open error on pid file %s", VAR_1);
        }

        VAR_2 = FUNC_4();
        FUNC_1(VAR_3, "%u\n", VAR_2);
        if (FUNC_0(VAR_3))
        {
            FUNC_2(VAR_0, "Close error on pid file %s", VAR_1);
        }
    }
}
