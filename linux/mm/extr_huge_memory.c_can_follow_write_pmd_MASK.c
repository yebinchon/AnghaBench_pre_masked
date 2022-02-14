
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pmd_t ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;

__attribute__((used)) static inline bool FUNC_2(pmd_t VAR_2, unsigned int VAR_3)
{
 return FUNC_1(VAR_2) ||
        ((VAR_3 & VAR_1) && (VAR_3 & VAR_0) && FUNC_0(VAR_2));
}
