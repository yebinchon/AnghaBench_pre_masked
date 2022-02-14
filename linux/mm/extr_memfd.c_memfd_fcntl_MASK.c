
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file {int dummy; } ;


 long VAR_0 ;


 unsigned long VAR_1 ;
 long FUNC_0 (struct file*,unsigned long) ;
 long FUNC_1 (struct file*) ;

long FUNC_2(struct file *VAR_2, unsigned int VAR_3, unsigned long VAR_4)
{
 long VAR_5;

 switch (VAR_3) {
 case 129:

  if (VAR_4 > VAR_1)
   return -VAR_0;

  VAR_5 = FUNC_0(VAR_2, VAR_4);
  break;
 case 128:
  VAR_5 = FUNC_1(VAR_2);
  break;
 default:
  VAR_5 = -VAR_0;
  break;
 }

 return VAR_5;
}
