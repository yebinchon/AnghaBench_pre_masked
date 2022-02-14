
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ULONG ;
typedef int UINT ;
typedef int INT ;


 int VAR_0 ;

__attribute__((used)) static inline void FUNC_0(const void **VAR_1, UINT VAR_2, INT *VAR_3, UINT *VAR_4, UINT VAR_5)
{
    *VAR_4 += VAR_5;
    if (*VAR_4 >= (1 << VAR_0))
    {
        ULONG VAR_6 = (*VAR_4 >> VAR_0);
        *VAR_4 &= (1 << VAR_0) - 1;
        *(const char **)VAR_1 += VAR_6 * VAR_2;
        *VAR_3 -= VAR_6;
    }
}
