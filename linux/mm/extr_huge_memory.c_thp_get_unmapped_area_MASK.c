
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct file {TYPE_1__* f_mapping; } ;
typedef int loff_t ;
struct TYPE_6__ {TYPE_2__* mm; } ;
struct TYPE_5__ {unsigned long (* get_unmapped_area ) (struct file*,unsigned long,unsigned long,unsigned long,unsigned long) ;} ;
struct TYPE_4__ {int host; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned long FUNC_2 (struct file*,unsigned long,int,unsigned long,int ) ;
 TYPE_3__* VAR_3 ;
 unsigned long FUNC_3 (struct file*,unsigned long,unsigned long,unsigned long,unsigned long) ;

unsigned long FUNC_4(struct file *VAR_4, unsigned long VAR_5,
  unsigned long VAR_6, unsigned long VAR_7, unsigned long VAR_8)
{
 loff_t VAR_9 = (loff_t)VAR_7 << VAR_1;

 if (VAR_5)
  goto out;
 if (!FUNC_0(VAR_4->f_mapping->host) || !FUNC_1(VAR_0))
  goto out;

 VAR_5 = FUNC_2(VAR_4, VAR_6, VAR_9, VAR_8, VAR_2);
 if (VAR_5)
  return VAR_5;

 out:
 return VAR_3->mm->get_unmapped_area(VAR_4, VAR_5, VAR_6, VAR_7, VAR_8);
}
