
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;

long FUNC_1(unsigned long VAR_3, unsigned long VAR_4,
                unsigned long *VAR_5)
{




  VAR_4 = (VAR_4-1) << 2;




  if(FUNC_0(VAR_3 + VAR_1) & VAR_2)
  {



    *VAR_5 = FUNC_0(VAR_3 + VAR_0 + VAR_4);
    return 0;
  }




  return -1;
}
