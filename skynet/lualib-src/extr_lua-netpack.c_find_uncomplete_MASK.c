
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int id; } ;
struct uncomplete {struct uncomplete* next; TYPE_1__ pack; } ;
struct queue {struct uncomplete** hash; } ;


 int FUNC_0 (int) ;

__attribute__((used)) static struct uncomplete *
FUNC_1(struct queue *VAR_0, int VAR_1) {
 if (VAR_0 == ((void*)0))
  return ((void*)0);
 int VAR_2 = FUNC_0(VAR_1);
 struct uncomplete * VAR_3 = VAR_0->hash[VAR_2];
 if (VAR_3 == ((void*)0))
  return ((void*)0);
 if (VAR_3->pack.id == VAR_1) {
  VAR_0->hash[VAR_2] = VAR_3->next;
  return VAR_3;
 }
 struct uncomplete * VAR_4 = VAR_3;
 while (VAR_4->next) {
  VAR_3 = VAR_4->next;
  if (VAR_3->pack.id == VAR_1) {
   VAR_4->next = VAR_3->next;
   return VAR_3;
  }
  VAR_4 = VAR_3;
 }
 return ((void*)0);
}
