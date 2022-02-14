
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ud {int (* inp_hook ) (struct ud*) ;} ;


 int FUNC_0 (struct ud*) ;

void
FUNC_1(register struct ud* VAR_0, int (*VAR_1)(struct ud*))
{
  FUNC_0(VAR_0);
  VAR_0->inp_hook = VAR_1;
}
