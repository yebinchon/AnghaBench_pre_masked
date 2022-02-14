
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 scalar_t__ FUNC_0 (unsigned long,unsigned long) ;

__attribute__((used)) static inline unsigned long FUNC_1(unsigned long VAR_2, unsigned long VAR_3)
{
 unsigned long VAR_4;

 if (VAR_3 == VAR_2)
  return 0;




 VAR_4 = (VAR_2 & ~VAR_1) -
     ((VAR_3 + VAR_1) & ~VAR_1) +
     ((VAR_2 & VAR_1) || (VAR_3 & VAR_1));
 if (FUNC_0(VAR_1, VAR_4))
  return 1;
 return ((VAR_4 - VAR_1 - 1) >> VAR_0) + 2;
}
