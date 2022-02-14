
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hashid_node {int dummy; } ;
struct hashid {int hashmod; int cap; void* hash; TYPE_1__* id; scalar_t__ count; } ;
struct TYPE_2__ {int id; int * next; } ;


 int FUNC_0 (void*,int ,int) ;
 void* FUNC_1 (int) ;

__attribute__((used)) static void
FUNC_2(struct hashid *VAR_0, int VAR_1) {
 int VAR_2;
 int VAR_3;
 VAR_3 = 16;
 while (VAR_3 < VAR_1) {
  VAR_3 *= 2;
 }
 VAR_0->hashmod = VAR_3 - 1;
 VAR_0->cap = VAR_1;
 VAR_0->count = 0;
 VAR_0->id = FUNC_1(VAR_1 * sizeof(struct hashid_node));
 for (VAR_2=0;VAR_2<VAR_1;VAR_2++) {
  VAR_0->id[VAR_2].id = -1;
  VAR_0->id[VAR_2].next = ((void*)0);
 }
 VAR_0->hash = FUNC_1(VAR_3 * sizeof(struct hashid_node *));
 FUNC_0(VAR_0->hash, 0, VAR_3 * sizeof(struct hashid_node *));
}
