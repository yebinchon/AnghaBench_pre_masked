
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file {int dummy; } ;


 unsigned long VAR_0 ;
 unsigned long FUNC_0 (unsigned long) ;
 unsigned long VAR_1 ;
 int FUNC_1 (unsigned long) ;
 scalar_t__ FUNC_2 (int) ;
 unsigned long FUNC_3 (struct file*,unsigned long,unsigned long,unsigned long,unsigned long,unsigned long) ;

unsigned long FUNC_4(struct file *VAR_2, unsigned long VAR_3,
 unsigned long VAR_4, unsigned long VAR_5,
 unsigned long VAR_6, unsigned long VAR_7)
{
 if (FUNC_2(VAR_7 + FUNC_0(VAR_4) < VAR_7))
  return -VAR_0;
 if (FUNC_2(FUNC_1(VAR_7)))
  return -VAR_0;

 return FUNC_3(VAR_2, VAR_3, VAR_4, VAR_5, VAR_6, VAR_7 >> VAR_1);
}
