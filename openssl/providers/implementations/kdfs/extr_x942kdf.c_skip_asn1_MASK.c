
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (unsigned char const**,long*,int*,int*,long) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_1(unsigned char **VAR_2, long *VAR_3, int VAR_4)
{
    int VAR_5, VAR_6, VAR_7;
    long VAR_8;
    const unsigned char *VAR_9 = *VAR_2;

    VAR_5 = FUNC_0(&VAR_9, &VAR_8, &VAR_6, &VAR_7, *VAR_3);
    if ((VAR_5 & 0x80) != 0 || VAR_6 != VAR_4 || VAR_7 != VAR_1)
        return 0;
    if (VAR_6 == VAR_0)
        VAR_9 += VAR_8;
    *VAR_2 = (unsigned char *)VAR_9;
    *VAR_3 -= VAR_9 - *VAR_2;
    return 1;
}
