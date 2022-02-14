
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (char const* const) ;
 int FUNC_3 (char const*,int) ;

int FUNC_4(int VAR_0, const char** VAR_1)
{
    const char* const VAR_2 = VAR_1[0];
    int VAR_3 = 1;
    int VAR_4 = 0;

    FUNC_1(VAR_0 >= 1);
    if (VAR_0 < 2) return FUNC_2(VAR_2);

    if (VAR_1[1][0] == '-') {
        VAR_4 = VAR_1[1][1] - '0';
        VAR_3 = 2;
    }

    if (VAR_3 >= VAR_0) return FUNC_2(VAR_2);

    FUNC_3(VAR_1[VAR_3], VAR_4);
    FUNC_0("no pb detected \n");
    return 0;
}
