
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct module {scalar_t__ state; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 struct module* FUNC_1 (unsigned long) ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 int FUNC_2 () ;
 int FUNC_3 (unsigned long,struct module*) ;

struct module *FUNC_4(unsigned long VAR_3)
{
 struct module *VAR_4;

 if (VAR_3 < VAR_2 || VAR_3 > VAR_1)
  return ((void*)0);

 FUNC_2();

 VAR_4 = FUNC_1(VAR_3);
 if (VAR_4) {
  FUNC_0(!FUNC_3(VAR_3, VAR_4));
  if (VAR_4->state == VAR_0)
   VAR_4 = ((void*)0);
 }
 return VAR_4;
}
