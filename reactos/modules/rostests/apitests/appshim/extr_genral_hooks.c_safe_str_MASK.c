
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char const*) ;
 int FUNC_1 (char*,int ,char*,intptr_t) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static const char* FUNC_3(const char* VAR_0)
{
    static char VAR_1[2][30];
    static int VAR_2 = 0;
    if (FUNC_0(VAR_0))
        return VAR_0;

    VAR_2 ^= 1;
    FUNC_1(VAR_1[VAR_2], FUNC_2(VAR_1[VAR_2]), "#%Id", (intptr_t)VAR_0);
    return VAR_1[VAR_2];
}
