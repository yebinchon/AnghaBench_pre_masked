
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (unsigned char*,unsigned char*,int) ;

__attribute__((used)) static BOOL FUNC_1(unsigned char **VAR_2,
                                   unsigned int *VAR_3,
                                   unsigned char *VAR_4,
                                   int VAR_5)
{
    if (VAR_5 <= 0 || (unsigned int)VAR_5 > *VAR_3)
        return VAR_0;
    FUNC_0(VAR_4, (*VAR_2), VAR_5);
    *VAR_2 += VAR_5;
    *VAR_3 -= VAR_5;
    return VAR_1;
}
