
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ud {void (* translator ) (struct ud*) ;} ;



extern void
FUNC_0(struct ud* VAR_0, void (*VAR_1)(struct ud*))
{
  VAR_0->translator = VAR_1;
}
