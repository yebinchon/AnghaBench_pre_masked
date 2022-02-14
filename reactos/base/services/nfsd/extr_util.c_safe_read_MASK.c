
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;


 int FUNC_0 (void*,unsigned char*,scalar_t__) ;
 int VAR_0 ;

int FUNC_1(unsigned char **VAR_1, uint32_t *VAR_2, void *VAR_3, uint32_t VAR_4)
{
    if (*VAR_2 < VAR_4)
        return VAR_0;

    FUNC_0(VAR_3, *VAR_1, VAR_4);
    *VAR_1 += VAR_4;
    *VAR_2 -= VAR_4;
    return 0;
}
