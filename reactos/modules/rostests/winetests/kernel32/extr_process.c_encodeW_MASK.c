
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ WCHAR ;


 int FUNC_0 (char*) ;
 char* FUNC_1 (size_t) ;
 int FUNC_2 (scalar_t__ const*) ;
 int FUNC_3 (char*,char*,unsigned int) ;

__attribute__((used)) static const char* FUNC_4(const WCHAR* VAR_0)
{
    char* VAR_1;
    size_t VAR_2,VAR_3;

    if (!VAR_0) return "";
    VAR_2 = FUNC_2(VAR_0) + 1;
    VAR_1 = FUNC_1(VAR_2 * 4 + 1);
    FUNC_0(VAR_1);
    for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++)
        FUNC_3(&VAR_1[VAR_3 * 4], "%04x", (unsigned int)(unsigned short)VAR_0[VAR_3]);
    VAR_1[4 * VAR_2] = '\0';
    return VAR_1;
}
