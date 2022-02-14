
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int U32 ;


 int FUNC_0 (void const*) ;
 size_t VAR_0 ;
 int const VAR_1 ;
 int const VAR_2 ;
 scalar_t__ FUNC_1 (void const*,size_t) ;

unsigned FUNC_2(const void* VAR_3, size_t VAR_4)
{
    if (VAR_4 < VAR_0) return 0;
    { U32 const VAR_5 = FUNC_0(VAR_3);
        if (VAR_5 == VAR_1) return 1;
        if ((VAR_5 & 0xFFFFFFF0U) == VAR_2) return 1;
    }



    return 0;
}
