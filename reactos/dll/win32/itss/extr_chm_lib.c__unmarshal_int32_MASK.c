
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned char Int32 ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static BOOL FUNC_0(unsigned char **VAR_2,
                             unsigned int *VAR_3,
                             Int32 *VAR_4)
{
    if (4 > *VAR_3)
        return VAR_0;
    *VAR_4 = (*VAR_2)[0] | (*VAR_2)[1]<<8 | (*VAR_2)[2]<<16 | (*VAR_2)[3]<<24;
    *VAR_2 += 4;
    *VAR_3 -= 4;
    return VAR_1;
}
