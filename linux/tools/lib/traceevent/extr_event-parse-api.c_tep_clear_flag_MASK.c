
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tep_handle {int flags; } ;
typedef enum tep_flag { ____Placeholder_tep_flag } tep_flag ;



void FUNC_0(struct tep_handle *VAR_0, enum tep_flag VAR_1)
{
 if (VAR_0)
  VAR_0->flags &= ~VAR_1;
}
