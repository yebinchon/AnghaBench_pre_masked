
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file {int dummy; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 int FUNC_0 (unsigned long,unsigned long) ;
 struct file* FUNC_1 (unsigned long) ;
 int FUNC_2 (struct file*) ;
 unsigned long FUNC_3 (struct file*,unsigned long,unsigned long,unsigned long,unsigned long,unsigned long) ;

unsigned long FUNC_4(unsigned long VAR_4, unsigned long VAR_5,
         unsigned long VAR_6, unsigned long VAR_7,
         unsigned long VAR_8, unsigned long VAR_9)
{
 struct file *VAR_10 = ((void*)0);
 unsigned long VAR_11 = -VAR_0;

 FUNC_0(VAR_8, VAR_7);
 if (!(VAR_7 & VAR_1)) {
  VAR_10 = FUNC_1(VAR_8);
  if (!VAR_10)
   goto out;
 }

 VAR_7 &= ~(VAR_3 | VAR_2);

 VAR_11 = FUNC_3(VAR_10, VAR_4, VAR_5, VAR_6, VAR_7, VAR_9);

 if (VAR_10)
  FUNC_2(VAR_10);
out:
 return VAR_11;
}
