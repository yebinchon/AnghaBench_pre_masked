
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int FUNC_0 (unsigned int) ;

unsigned int FUNC_1(unsigned int VAR_2,
 unsigned int VAR_3)
{
 VAR_2 = FUNC_0(VAR_2);
 VAR_3 = FUNC_0(VAR_3);

 if (VAR_2 & VAR_0)
  return VAR_3;
 else if (VAR_3 & VAR_0)
  return VAR_2;
 else if (VAR_2 & VAR_1)
  return VAR_3;
 else if (VAR_3 & VAR_1)
  return VAR_2;
 return VAR_2 & VAR_3;
}
