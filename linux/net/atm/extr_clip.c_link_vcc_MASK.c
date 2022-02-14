
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct clip_vcc {struct clip_vcc* next; scalar_t__ xoff; struct atmarp_entry* entry; } ;
struct atmarp_entry {TYPE_1__* neigh; struct clip_vcc* vccs; } ;
struct TYPE_2__ {int used; } ;


 int VAR_0 ;
 int FUNC_0 (char*,struct clip_vcc*,struct atmarp_entry*,TYPE_1__*) ;

__attribute__((used)) static void FUNC_1(struct clip_vcc *VAR_1, struct atmarp_entry *VAR_2)
{
 FUNC_0("%p to entry %p (neigh %p)\n", VAR_1, VAR_2, VAR_2->neigh);
 VAR_1->entry = VAR_2;
 VAR_1->xoff = 0;
 VAR_1->next = VAR_2->vccs;
 VAR_2->vccs = VAR_1;
 VAR_2->neigh->used = VAR_0;
}
