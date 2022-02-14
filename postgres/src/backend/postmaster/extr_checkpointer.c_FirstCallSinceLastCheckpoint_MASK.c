
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int ckpt_done; int ckpt_lck; } ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

bool
FUNC_2(void)
{
 static int VAR_1 = 0;
 int VAR_2;
 bool VAR_3 = 0;

 FUNC_0(&VAR_0->ckpt_lck);
 VAR_2 = VAR_0->ckpt_done;
 FUNC_1(&VAR_0->ckpt_lck);

 if (VAR_2 != VAR_1)
  VAR_3 = 1;

 VAR_1 = VAR_2;

 return VAR_3;
}
