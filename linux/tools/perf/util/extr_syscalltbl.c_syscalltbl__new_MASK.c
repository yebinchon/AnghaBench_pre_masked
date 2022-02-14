
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct syscalltbl {int audit_machine; } ;


 int FUNC_0 () ;
 struct syscalltbl* FUNC_1 (int) ;

struct syscalltbl *FUNC_2(void)
{
 struct syscalltbl *VAR_0 = FUNC_1(sizeof(*VAR_0));
 if (VAR_0)
  VAR_0->audit_machine = FUNC_0();
 return VAR_0;
}
