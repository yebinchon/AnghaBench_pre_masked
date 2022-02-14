
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int decoded ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char const) ;
 int FUNC_2 (int ,char*) ;
 int VAR_0 ;
 int FUNC_3 (char const*) ;

__attribute__((used)) static char* FUNC_4(const char* VAR_1)
{
    static char VAR_2[1024];
    char* VAR_3;
    size_t VAR_4,VAR_5;

    VAR_4 = FUNC_3(VAR_1) / 2;
    if (!VAR_4--) return ((void*)0);
    if (VAR_4 >= sizeof(VAR_2))
    {
        FUNC_2(VAR_0, "string is too long!\n");
        FUNC_0(0);
    }
    VAR_3 = VAR_2;
    for (VAR_5 = 0; VAR_5 < VAR_4; VAR_5++)
        VAR_3[VAR_5] = (FUNC_1(VAR_1[2 * VAR_5]) << 4) | FUNC_1(VAR_1[2 * VAR_5 + 1]);
    VAR_3[VAR_4] = '\0';
    return VAR_3;
}
