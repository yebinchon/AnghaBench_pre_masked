
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct key_vector {int dummy; } ;
struct TYPE_3__ {struct TYPE_3__* next; } ;
struct TYPE_4__ {TYPE_1__ rcu; } ;


 TYPE_2__* FUNC_0 (struct key_vector*) ;

__attribute__((used)) static inline void FUNC_1(struct key_vector *VAR_0,
         struct key_vector *VAR_1)
{
 FUNC_0(VAR_1)->rcu.next = FUNC_0(VAR_0)->rcu.next;
 FUNC_0(VAR_0)->rcu.next = &FUNC_0(VAR_1)->rcu;
}
