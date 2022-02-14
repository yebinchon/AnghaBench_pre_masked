
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct file {int dummy; } ;
typedef unsigned long loff_t ;
struct TYPE_4__ {TYPE_1__* mm; } ;
struct TYPE_3__ {unsigned long (* get_unmapped_area ) (struct file*,int ,unsigned long,unsigned long,unsigned long) ;} ;


 scalar_t__ FUNC_0 (unsigned long) ;
 unsigned long VAR_0 ;
 TYPE_2__* VAR_1 ;
 unsigned long FUNC_1 (unsigned long,unsigned long) ;
 unsigned long FUNC_2 (struct file*,int ,unsigned long,unsigned long,unsigned long) ;

__attribute__((used)) static unsigned long FUNC_3(struct file *VAR_2, unsigned long VAR_3,
  loff_t VAR_4, unsigned long VAR_5, unsigned long VAR_6)
{
 unsigned long VAR_7;
 loff_t VAR_8 = VAR_4 + VAR_3;
 loff_t VAR_9 = FUNC_1(VAR_4, VAR_6);
 unsigned long VAR_10;

 if (VAR_8 <= VAR_9 || (VAR_8 - VAR_9) < VAR_6)
  return 0;

 VAR_10 = VAR_3 + VAR_6;
 if (VAR_10 < VAR_3 || (VAR_4 + VAR_10) < VAR_4)
  return 0;

 VAR_7 = VAR_1->mm->get_unmapped_area(VAR_2, 0, VAR_10,
           VAR_4 >> VAR_0, VAR_5);
 if (FUNC_0(VAR_7))
  return 0;

 VAR_7 += (VAR_4 - VAR_7) & (VAR_6 - 1);
 return VAR_7;
}
