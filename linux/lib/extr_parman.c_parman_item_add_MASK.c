
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct parman_prio {int dummy; } ;
struct parman_item {int dummy; } ;
struct parman {TYPE_1__* algo; } ;
struct TYPE_2__ {int (* item_add ) (struct parman*,struct parman_prio*,struct parman_item*) ;} ;


 int FUNC_0 (struct parman*,struct parman_prio*,struct parman_item*) ;

int FUNC_1(struct parman *VAR_0, struct parman_prio *VAR_1,
      struct parman_item *VAR_2)
{
 return VAR_0->algo->item_add(VAR_0, VAR_1, VAR_2);
}
