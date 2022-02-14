
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char const*,char const*,int) ;

int FUNC_1(const char *VAR_2, int VAR_3, const char *VAR_4, int VAR_5)
{
    int VAR_6 = VAR_3 & VAR_0;
    int VAR_7 = VAR_5 & VAR_0;
    int VAR_8 = VAR_6 < VAR_7 ? VAR_6 : VAR_7;
    int VAR_9;

    VAR_9 = FUNC_0(VAR_2, VAR_4, VAR_8);
    if (VAR_9)
        return VAR_9;
    if (VAR_6 < VAR_7)
        return -1;
    if (VAR_6 > VAR_7)
        return 1;


    VAR_3 &= VAR_1;
    VAR_5 &= VAR_1;

    if (VAR_3 < VAR_5)
        return -1;
    if (VAR_3 > VAR_5)
        return 1;
    return 0;
}
