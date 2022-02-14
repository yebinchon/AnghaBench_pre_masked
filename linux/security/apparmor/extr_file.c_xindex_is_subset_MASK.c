
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 int VAR_0 ;

__attribute__((used)) static inline bool FUNC_0(u32 VAR_1, u32 VAR_2)
{
 if (((VAR_1 & ~VAR_0) != (VAR_2 & ~VAR_0)) ||
     ((VAR_1 & VAR_0) && !(VAR_2 & VAR_0)))
  return 0;

 return 1;
}
