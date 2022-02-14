
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct file {int dummy; } ;
struct TYPE_2__ {scalar_t__ ptrace; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long VAR_5 ;
 unsigned long VAR_6 ;
 unsigned long VAR_7 ;
 unsigned long VAR_8 ;
 unsigned long VAR_9 ;
 unsigned long FUNC_0 (unsigned long) ;
 unsigned long FUNC_1 (unsigned long,int ) ;
 TYPE_1__* VAR_10 ;

__attribute__((used)) static unsigned long FUNC_2(struct file *VAR_11,
     unsigned long VAR_12,
     unsigned long VAR_13,
     unsigned long VAR_14)
{
 unsigned long VAR_15;

 VAR_15 = FUNC_1(VAR_12, 0) | FUNC_0(VAR_13);


 if (!(VAR_14 & VAR_2)) {

  VAR_15 |= VAR_6 | VAR_8 | VAR_5;
  if (VAR_11 && !(VAR_12 & VAR_4))
   VAR_15 |= VAR_7;
 } else {



  VAR_15 |= VAR_7 | (VAR_14 & VAR_3);
  if (VAR_13 & VAR_1)
   VAR_15 |= VAR_9;
 }





 if ((VAR_13 & VAR_0) && VAR_10->ptrace)
  VAR_15 &= ~VAR_7;

 return VAR_15;
}
