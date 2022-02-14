
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char**) ;
 scalar_t__ FUNC_1 (char*,char*) ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (char*,char*,int) ;

__attribute__((used)) static bool FUNC_4(char *VAR_0)
{
    char *VAR_1[] = {"rear", "center_lfe", "side", "pulse", "null", "dsnoop", "hw"};
    for (int VAR_2 = 0; VAR_2 < FUNC_0(VAR_1); VAR_2++) {
        int VAR_3 = FUNC_2(VAR_1[VAR_2]);
        if (VAR_0 && FUNC_3(VAR_0, VAR_1[VAR_2], VAR_3) == 0 &&
            (!VAR_0[VAR_3] || VAR_0[VAR_3] == ':'))
            return 1;
    }

    if (VAR_0 && FUNC_1(VAR_0, "default") == 0)
        return 1;
    return 0;
}
