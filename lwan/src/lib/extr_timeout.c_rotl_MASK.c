
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wheel_t ;
typedef int const uint32_t ;


 int const VAR_0 ;
 int FUNC_0 (int) ;

__attribute__((used)) static inline wheel_t FUNC_1(const wheel_t VAR_1, uint32_t VAR_2)
{
    FUNC_0(VAR_2 < VAR_0);
    return (VAR_1 << VAR_2) | (VAR_1 >> (-VAR_2 & (VAR_0 - 1)));
}
