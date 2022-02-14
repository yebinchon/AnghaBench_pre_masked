
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pattern ;
typedef int const U32 ;


 int const FUNC_0 (int const,int) ;

__attribute__((used)) static U32 FUNC_1(size_t const VAR_0, U32 const VAR_1)
{
    size_t const VAR_2 = (VAR_0 & (sizeof(VAR_1) - 1)) << 3;
    if (VAR_2 == 0)
        return VAR_1;
    return FUNC_0(VAR_1, (int)VAR_2);
}
