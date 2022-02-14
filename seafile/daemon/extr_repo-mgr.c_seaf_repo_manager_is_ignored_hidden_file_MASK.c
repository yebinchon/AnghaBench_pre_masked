
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int gboolean ;
typedef int GPatternSpec ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *,char const*) ;
 int ** VAR_2 ;

gboolean
FUNC_1 (const char *VAR_3)
{
    GPatternSpec **VAR_4 = VAR_2;

    while (*VAR_4) {
        if (FUNC_0(*VAR_4, VAR_3))
            return VAR_1;
        VAR_4++;
    }

    return VAR_0;
}
