
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (size_t) ;
 int FUNC_1 (char*,char*,unsigned char) ;
 int FUNC_2 (char const*) ;

__attribute__((used)) static const char* FUNC_3(const char* VAR_0)
{
    char* VAR_1;
    size_t VAR_2,VAR_3;

    if (!VAR_0) return "";
    VAR_2 = FUNC_2(VAR_0) + 1;
    VAR_1 = FUNC_0(VAR_2 * 2 + 1);
    for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++)
        FUNC_1(&VAR_1[VAR_3 * 2], "%02x", (unsigned char)VAR_0[VAR_3]);
    VAR_1[2 * VAR_2] = '\0';
    return VAR_1;
}
