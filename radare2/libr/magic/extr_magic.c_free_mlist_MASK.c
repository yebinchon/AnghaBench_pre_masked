
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct r_magic {int dummy; } ;
struct mlist {int nmagic; int mapped; struct r_magic* magic; struct mlist* next; } ;


 int FUNC_0 (struct r_magic*,int ,int ) ;
 int FUNC_1 (struct mlist*) ;

__attribute__((used)) static void FUNC_2(struct mlist *VAR_0) {
 struct mlist *VAR_1;
 if (!VAR_0) {
  return;
 }
 for (VAR_1 = VAR_0->next; VAR_1 != VAR_0;) {
  struct mlist *VAR_2 = VAR_1->next;
  struct r_magic *VAR_3 = VAR_1->magic;
  FUNC_0 (VAR_3, VAR_1->mapped, VAR_1->nmagic);
  FUNC_1 (VAR_1);
  VAR_1 = VAR_2;
 }
 FUNC_1 (VAR_1);
}
