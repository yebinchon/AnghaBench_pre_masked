
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 char* FUNC_2 (char*) ;
 int VAR_0 ;
 scalar_t__ FUNC_3 (char const*,char*) ;

__attribute__((used)) static bool FUNC_4(void)
{
    const char *VAR_1;

    if (!FUNC_1(FUNC_0(VAR_0)))
        return 0;

    VAR_1 = FUNC_2("TERM");
    if (VAR_1 && FUNC_3(VAR_1, "dumb"))
        return 0;

    return 1;
}
