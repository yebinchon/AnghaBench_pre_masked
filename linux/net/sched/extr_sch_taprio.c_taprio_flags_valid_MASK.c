
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static bool FUNC_0(u32 VAR_2)
{

 if (VAR_2 & ~(VAR_1 |
        VAR_0))
  return 0;

 if ((VAR_2 & VAR_1) &&
     (VAR_2 & VAR_0))
  return 0;
 return 1;
}
