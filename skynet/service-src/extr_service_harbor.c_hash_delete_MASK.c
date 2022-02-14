
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct keyvalue {int queue; struct keyvalue* next; struct keyvalue** node; } ;
struct hashmap {int queue; struct hashmap* next; struct hashmap** node; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct keyvalue*) ;

__attribute__((used)) static void
FUNC_2(struct hashmap *VAR_1) {
 int VAR_2;
 for (VAR_2=0;VAR_2<VAR_0;VAR_2++) {
  struct keyvalue * VAR_3 = VAR_1->node[VAR_2];
  while (VAR_3) {
   struct keyvalue * VAR_4 = VAR_3->next;
   FUNC_0(VAR_3->queue);
   FUNC_1(VAR_3);
   VAR_3 = VAR_4;
  }
 }
 FUNC_1(VAR_1);
}
