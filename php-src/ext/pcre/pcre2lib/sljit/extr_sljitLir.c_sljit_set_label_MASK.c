
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sljit_label {int dummy; } ;
struct TYPE_2__ {struct sljit_label* label; } ;
struct sljit_jump {TYPE_1__ u; int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int) ;

void FUNC_1(struct sljit_jump *VAR_2, struct sljit_label* VAR_3)
{
 if (FUNC_0(!!VAR_2) && FUNC_0(!!VAR_3)) {
  VAR_2->flags &= ~VAR_0;
  VAR_2->flags |= VAR_1;
  VAR_2->u.label = VAR_3;
 }
}
