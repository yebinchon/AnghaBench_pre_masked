
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct parman_prio {int dummy; } ;
struct parman_item {int index; } ;
struct parman {int priv; TYPE_1__* ops; } ;
struct TYPE_2__ {int (* move ) (int ,int ,unsigned long,unsigned long) ;} ;


 int FUNC_0 (int ,int ,unsigned long,unsigned long) ;

__attribute__((used)) static void FUNC_1(struct parman *VAR_0, struct parman_prio *VAR_1,
          struct parman_item *VAR_2, unsigned long VAR_3,
          unsigned long VAR_4)
{
 VAR_0->ops->move(VAR_0->priv, VAR_2->index, VAR_3, VAR_4);
}
