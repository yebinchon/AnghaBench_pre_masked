
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct list {TYPE_2__* prev; TYPE_1__* next; } ;
struct TYPE_4__ {TYPE_1__* next; } ;
struct TYPE_3__ {TYPE_2__* prev; } ;



__attribute__((used)) static inline void
FUNC_0(struct list *VAR_0)
{
 VAR_0->prev->next = VAR_0->next;
 VAR_0->next->prev = VAR_0->prev;
}
