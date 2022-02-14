
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,unsigned char*,int) ;

__attribute__((used)) static int FUNC_1(unsigned char **VAR_0,
                                 unsigned int *VAR_1,
                                 char *VAR_2,
                                 int VAR_3)
{
    if (VAR_3 <= 0 || (unsigned int)VAR_3 > *VAR_1)
        return 0;
    FUNC_0(VAR_2, (*VAR_0), VAR_3);
    *VAR_0 += VAR_3;
    *VAR_1 -= VAR_3;
    return 1;
}
