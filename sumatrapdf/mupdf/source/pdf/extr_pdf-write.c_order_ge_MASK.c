
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static int
FUNC_0(int VAR_8, int VAR_9)
{
 if (((VAR_8 ^ VAR_9) & ~VAR_4) == 0)
  return ((VAR_8 & VAR_4) == 0);

 else if (VAR_8 == 0)
  return 1;
 else if (VAR_9 == 0)
  return 0;

 else if (VAR_8 & VAR_1)
  return 1;
 else if (VAR_9 & VAR_1)
  return 0;

 else if (VAR_8 & VAR_3)
  return 1;
 else if (VAR_9 & VAR_3)
  return 0;

 else if (VAR_8 & VAR_0)
  return 1;
 else if (VAR_9 & VAR_0)
  return 0;

 else if (VAR_8 & VAR_6)
  return 1;
 else if (VAR_9 & VAR_6)
  return 0;

 else if (VAR_8 & VAR_2)
  return 1;
 else if (VAR_9 & VAR_2)
  return 0;

 else if (VAR_8 & VAR_7)
  return 1;
 else if (VAR_9 & VAR_7)
  return 0;


 return (VAR_8>>VAR_5) >= (VAR_9>>VAR_5);
}
