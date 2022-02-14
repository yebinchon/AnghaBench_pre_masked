
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int flags; } ;


 unsigned long FUNC_0 (unsigned long) ;
 unsigned long VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 TYPE_1__* VAR_3 ;
 unsigned long FUNC_1 () ;

unsigned long FUNC_2(unsigned long VAR_4)
{
 unsigned long VAR_5 = 0;

 if (VAR_3->flags & VAR_1) {
  VAR_5 = FUNC_1();
  VAR_5 &= VAR_2;
  VAR_5 <<= VAR_0;
 }



 return FUNC_0(VAR_4) - VAR_5;

}
