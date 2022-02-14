
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (double) ;

void
FUNC_1 (const float *VAR_2, int *VAR_3, int VAR_4)
{ double VAR_5 ;

 while (VAR_4)
 { VAR_4 -- ;

  VAR_5 = VAR_2 [VAR_4] * (8.0 * 0x10000000) ;
  if (VAR_1 == 0 && VAR_5 >= (1.0 * 0x7FFFFFFF))
  { VAR_3 [VAR_4] = 0x7fffffff ;
   continue ;
   } ;
  if (VAR_0 == 0 && VAR_5 <= (-8.0 * 0x10000000))
  { VAR_3 [VAR_4] = -1 - 0x7fffffff ;
   continue ;
   } ;

  VAR_3 [VAR_4] = FUNC_0 (VAR_5) ;
  } ;

}
