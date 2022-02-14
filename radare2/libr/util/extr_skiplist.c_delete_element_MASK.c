
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ (* compare ) (int ,void*) ;int list_level; int size; TYPE_1__* head; } ;
struct TYPE_9__ {struct TYPE_9__** forward; int data; } ;
typedef TYPE_1__ RSkipListNode ;
typedef TYPE_2__ RSkipList ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (TYPE_2__*,void*,TYPE_1__**,int) ;
 int FUNC_1 (TYPE_2__*,TYPE_1__*) ;
 scalar_t__ FUNC_2 (int ,void*) ;

__attribute__((used)) static bool FUNC_3(RSkipList* VAR_1, void* VAR_2, bool VAR_3) {
 int VAR_4;
 RSkipListNode *VAR_5[VAR_0 + 1], *VAR_6;


 VAR_6 = FUNC_0 (VAR_1, VAR_2, VAR_5, VAR_3);

 if (VAR_6 == VAR_1->head || VAR_1->compare(VAR_6->data, VAR_2) != 0) {
  return 0;
 }



 for (VAR_4 = 0; VAR_4 <= VAR_1->list_level; VAR_4++) {
  if (VAR_5[VAR_4]->forward[VAR_4] != VAR_6) {
   break;
  }
  VAR_5[VAR_4]->forward[VAR_4] = VAR_6->forward[VAR_4];
 }
 FUNC_1 (VAR_1, VAR_6);


 while ((VAR_1->list_level > 0) &&
  (VAR_1->head->forward[VAR_1->list_level] == VAR_1->head)) {
  VAR_1->list_level--;
 }
 VAR_1->size--;
 return 1;
}
