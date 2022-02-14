
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mmu_gather_batch {struct mmu_gather_batch* next; } ;
struct TYPE_2__ {struct mmu_gather_batch* next; } ;
struct mmu_gather {TYPE_1__ local; } ;


 int FUNC_0 (unsigned long,int ) ;

__attribute__((used)) static void FUNC_1(struct mmu_gather *VAR_0)
{
 struct mmu_gather_batch *VAR_1, *VAR_2;

 for (VAR_1 = VAR_0->local.next; VAR_1; VAR_1 = VAR_2) {
  VAR_2 = VAR_1->next;
  FUNC_0((unsigned long)VAR_1, 0);
 }
 VAR_0->local.next = ((void*)0);
}
