
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int dummy; } ;
typedef int data ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct task_struct*,unsigned long,unsigned long*,int,int) ;

int FUNC_1(struct task_struct *VAR_3, unsigned long VAR_4,
       unsigned long VAR_5)
{
 int VAR_6;

 VAR_6 = FUNC_0(VAR_3, VAR_4, &VAR_5, sizeof(VAR_5),
   VAR_1 | VAR_2);
 return (VAR_6 == sizeof(VAR_5)) ? 0 : -VAR_0;
}
