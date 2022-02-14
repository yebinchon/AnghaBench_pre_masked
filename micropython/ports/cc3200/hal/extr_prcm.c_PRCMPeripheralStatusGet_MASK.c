
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int tBoolean ;
struct TYPE_2__ {scalar_t__ ulRstReg; } ;


 scalar_t__ VAR_0 ;
 unsigned long FUNC_0 (scalar_t__) ;
 unsigned long VAR_1 ;
 TYPE_1__* VAR_2 ;

tBoolean FUNC_1(unsigned long VAR_3)
{
  unsigned long VAR_4;




  VAR_4 = FUNC_0(VAR_0 + VAR_2[VAR_3].ulRstReg);
  VAR_4 = VAR_4 & VAR_1;

  if (VAR_4)
  {



    return(1);
  }
  else
  {



    return(0);
  }
}
