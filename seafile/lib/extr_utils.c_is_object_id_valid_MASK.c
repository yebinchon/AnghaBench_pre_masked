
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int gboolean ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char const*) ;

gboolean
FUNC_1 (const char *VAR_2)
{
    if (!VAR_2)
        return VAR_0;

    int VAR_3 = FUNC_0(VAR_2);
    int VAR_4;
    char VAR_5;

    if (VAR_3 != 40)
        return VAR_0;

    for (VAR_4 = 0; VAR_4 < VAR_3; ++VAR_4) {
        VAR_5 = VAR_2[VAR_4];
        if ((VAR_5 >= '0' && VAR_5 <= '9') || (VAR_5 >= 'a' && VAR_5 <= 'f'))
            continue;
        return VAR_0;
    }

    return VAR_1;
}
