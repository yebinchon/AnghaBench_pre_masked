
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char*,char*) ;

__attribute__((used)) static bool FUNC_1(char *VAR_0)
{
    if (!VAR_0)
        return 0;
    return FUNC_0(VAR_0, "\\pos") || FUNC_0(VAR_0, "\\move") || FUNC_0(VAR_0, "\\clip") ||
           FUNC_0(VAR_0, "\\iclip") || FUNC_0(VAR_0, "\\org") || FUNC_0(VAR_0, "\\p");
}
