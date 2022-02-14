
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int* max_pending; scalar_t__ nr_pending; } ;
typedef TYPE_1__ WritebackContext ;


 int FUNC_0 (int) ;
 int VAR_0 ;

void
FUNC_1(WritebackContext *VAR_1, int *VAR_2)
{
 FUNC_0(*VAR_2 <= VAR_0);

 VAR_1->max_pending = VAR_2;
 VAR_1->nr_pending = 0;
}
