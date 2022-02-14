
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char const*) ;
 scalar_t__ FUNC_1 (char const*,char*,int) ;

__attribute__((used)) static int FUNC_2(const char *VAR_3, unsigned int *VAR_4)
{
    int VAR_5;

    *VAR_4 = 0;
    VAR_5 = FUNC_0(VAR_3);

    if (VAR_5 == -1)
        return VAR_2;
    *VAR_4 = VAR_5;
    if (VAR_5 == sizeof("UTF8") - 1 && FUNC_1(VAR_3, "UTF8", VAR_5) == 0)
        return VAR_1;
    if (VAR_5 == sizeof("UTF8String") - 1 && FUNC_1(VAR_3, "UTF8String", VAR_5) == 0)
        return VAR_1;
    if (VAR_5 == sizeof("BMP") - 1 && FUNC_1(VAR_3, "BMP", VAR_5) == 0)
        return VAR_0;
    if (VAR_5 == sizeof("BMPSTRING") - 1 && FUNC_1(VAR_3, "BMPSTRING", VAR_5) == 0)
        return VAR_0;
    if (VAR_5 == sizeof("VISIBLE") - 1 && FUNC_1(VAR_3, "VISIBLE", VAR_5) == 0)
        return VAR_2;
    if (VAR_5 == sizeof("VISIBLESTRING") - 1 && FUNC_1(VAR_3, "VISIBLESTRING", VAR_5) == 0)
        return VAR_2;
    *VAR_4 = 0;
    return VAR_2;
}
