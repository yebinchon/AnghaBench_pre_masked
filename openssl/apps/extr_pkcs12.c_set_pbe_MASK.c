
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ,char*,char const*) ;
 int VAR_0 ;
 int FUNC_1 (char const*) ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (char const*,char*) ;

__attribute__((used)) static int FUNC_3(int *VAR_2, const char *VAR_3)
{
    if (!VAR_3)
        return 0;
    if (FUNC_2(VAR_3, "NONE") == 0) {
        *VAR_2 = -1;
        return 1;
    }
    *VAR_2 = FUNC_1(VAR_3);
    if (*VAR_2 == VAR_0) {
        FUNC_0(VAR_1, "Unknown PBE algorithm %s\n", VAR_3);
        return 0;
    }
    return 1;
}
