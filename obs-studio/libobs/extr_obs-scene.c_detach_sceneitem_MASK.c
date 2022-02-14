
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct obs_scene_item {TYPE_1__* parent; TYPE_3__* prev; TYPE_2__* next; } ;
struct TYPE_6__ {TYPE_2__* next; } ;
struct TYPE_5__ {TYPE_3__* prev; } ;
struct TYPE_4__ {TYPE_2__* first_item; } ;



__attribute__((used)) static inline void FUNC_0(struct obs_scene_item *VAR_0)
{
 if (VAR_0->prev)
  VAR_0->prev->next = VAR_0->next;
 else
  VAR_0->parent->first_item = VAR_0->next;

 if (VAR_0->next)
  VAR_0->next->prev = VAR_0->prev;

 VAR_0->parent = ((void*)0);
}
