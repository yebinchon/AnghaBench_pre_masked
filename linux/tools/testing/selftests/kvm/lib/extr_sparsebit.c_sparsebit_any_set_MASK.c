
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sparsebit {scalar_t__ num_set; TYPE_1__* root; } ;
typedef scalar_t__ sparsebit_num_t ;
typedef int mask_t ;
struct TYPE_2__ {scalar_t__ num_after; int mask; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;

bool FUNC_1(struct sparsebit *VAR_1)
{




 if (!VAR_1->root)
  return 0;






 FUNC_0(VAR_1->root->mask != 0);
 FUNC_0(VAR_1->num_set > 0 ||
        (VAR_1->root->num_after == ((sparsebit_num_t) 0) - VAR_0 &&
  VAR_1->root->mask == ~(mask_t) 0));

 return 1;
}
