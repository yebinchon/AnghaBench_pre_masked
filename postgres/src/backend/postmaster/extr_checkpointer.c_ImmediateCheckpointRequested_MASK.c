
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int ckpt_flags; } ;
typedef TYPE_1__ CheckpointerShmemStruct ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;

__attribute__((used)) static bool
FUNC_0(void)
{
 volatile CheckpointerShmemStruct *VAR_2 = VAR_1;





 if (VAR_2->ckpt_flags & VAR_0)
  return 1;
 return 0;
}
