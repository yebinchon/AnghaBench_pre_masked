
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int target; } ;
struct sljit_jump {TYPE_1__ u; int flags; } ;
typedef int sljit_uw ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int) ;

void FUNC_1(struct sljit_jump *VAR_2, sljit_uw VAR_3)
{
 if (FUNC_0(!!VAR_2)) {
  VAR_2->flags &= ~VAR_1;
  VAR_2->flags |= VAR_0;
  VAR_2->u.target = VAR_3;
 }
}
