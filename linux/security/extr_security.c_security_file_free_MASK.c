
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file {int * f_security; } ;


 int FUNC_0 (int ,struct file*) ;
 int VAR_0 ;
 int FUNC_1 (int ,void*) ;
 int VAR_1 ;

void FUNC_2(struct file *VAR_2)
{
 void *VAR_3;

 FUNC_0(VAR_0, VAR_2);

 VAR_3 = VAR_2->f_security;
 if (VAR_3) {
  VAR_2->f_security = ((void*)0);
  FUNC_1(VAR_1, VAR_3);
 }
}
