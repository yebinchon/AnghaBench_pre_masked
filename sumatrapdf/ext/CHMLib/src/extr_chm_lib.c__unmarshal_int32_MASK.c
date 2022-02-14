
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned char Int32 ;



__attribute__((used)) static int FUNC_0(unsigned char **VAR_0,
                            unsigned int *VAR_1,
                            Int32 *VAR_2)
{
    if (4 > *VAR_1)
        return 0;
    *VAR_2 = (*VAR_0)[0] | (*VAR_0)[1]<<8 | (*VAR_0)[2]<<16 | (*VAR_0)[3]<<24;
    *VAR_0 += 4;
    *VAR_1 -= 4;
    return 1;
}
