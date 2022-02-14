
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 size_t FUNC_0 (char const*,size_t) ;
 size_t VAR_2 ;
 int FUNC_1 (char**,char**,size_t*,size_t*,char) ;

__attribute__((used)) static int
FUNC_2(char **VAR_3,
       char **VAR_4,
       size_t *VAR_5,
       size_t *VAR_6, const char *VAR_7, int VAR_8, int VAR_9, int VAR_10)
{
    int VAR_11;
    size_t VAR_12;
    int VAR_13 = 0;

    if (VAR_7 == 0)
        VAR_7 = "<NULL>";

    VAR_12 = FUNC_0(VAR_7, VAR_10 < 0 ? VAR_2 : (size_t)VAR_10);

    VAR_11 = VAR_9 - VAR_12;
    if (VAR_9 < 0 || VAR_11 < 0)
        VAR_11 = 0;
    if (VAR_10 >= 0) {




        if (VAR_10 < VAR_1 - VAR_11)
            VAR_10 += VAR_11;
        else
            VAR_10 = VAR_1;
    }
    if (VAR_8 & VAR_0)
        VAR_11 = -VAR_11;

    while ((VAR_11 > 0) && (VAR_10 < 0 || VAR_13 < VAR_10)) {
        if (!FUNC_1(VAR_3, VAR_4, VAR_5, VAR_6, ' '))
            return 0;
        --VAR_11;
        ++VAR_13;
    }
    while (VAR_12 > 0 && (VAR_10 < 0 || VAR_13 < VAR_10)) {
        if (!FUNC_1(VAR_3, VAR_4, VAR_5, VAR_6, *VAR_7++))
            return 0;
        --VAR_12;
        ++VAR_13;
    }
    while ((VAR_11 < 0) && (VAR_10 < 0 || VAR_13 < VAR_10)) {
        if (!FUNC_1(VAR_3, VAR_4, VAR_5, VAR_6, ' '))
            return 0;
        ++VAR_11;
        ++VAR_13;
    }
    return 1;
}
