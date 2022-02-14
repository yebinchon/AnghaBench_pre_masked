
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct clip_vcc {scalar_t__ xoff; struct atmarp_entry* entry; struct clip_vcc* next; } ;
struct atmarp_entry {TYPE_1__* neigh; void* expires; struct clip_vcc* vccs; } ;
struct TYPE_2__ {int dev; void* used; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 int FUNC_0 (TYPE_1__*,int *,int ,int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char*,...) ;

__attribute__((used)) static void FUNC_5(struct clip_vcc *VAR_3)
{
 struct atmarp_entry *VAR_4 = VAR_3->entry;
 struct clip_vcc **VAR_5;

 if (!VAR_4) {
  FUNC_4("!clip_vcc->entry (clip_vcc %p)\n", VAR_3);
  return;
 }
 FUNC_1(VAR_4->neigh->dev);
 VAR_4->neigh->used = VAR_2;
 for (VAR_5 = &VAR_4->vccs; *VAR_5; VAR_5 = &(*VAR_5)->next)
  if (*VAR_5 == VAR_3) {
   int VAR_6;

   *VAR_5 = VAR_3->next;
   VAR_3->entry = ((void*)0);
   if (VAR_3->xoff)
    FUNC_3(VAR_4->neigh->dev);
   if (VAR_4->vccs)
    goto out;
   VAR_4->expires = VAR_2 - 1;

   VAR_6 = FUNC_0(VAR_4->neigh, ((void*)0), VAR_1,
          VAR_0, 0);
   if (VAR_6)
    FUNC_4("neigh_update failed with %d\n", VAR_6);
   goto out;
  }
 FUNC_4("ATMARP: failed (entry %p, vcc 0x%p)\n", VAR_4, VAR_3);
out:
 FUNC_2(VAR_4->neigh->dev);
}
