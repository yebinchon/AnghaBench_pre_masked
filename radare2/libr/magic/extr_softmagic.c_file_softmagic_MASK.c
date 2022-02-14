
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int ut8 ;
struct mlist {int nmagic; int magic; struct mlist* next; } ;
struct TYPE_4__ {struct mlist* mlist; } ;
typedef TYPE_1__ RMagic ;


 int FUNC_0 (TYPE_1__*,int ,int ,int const*,size_t,int) ;

int FUNC_1(RMagic *VAR_0, const ut8 *VAR_1, size_t VAR_2, int VAR_3) {
 struct mlist *VAR_4;
 int VAR_5;
 for (VAR_4 = VAR_0->mlist->next; VAR_4 != VAR_0->mlist; VAR_4 = VAR_4->next) {
  if ((VAR_5 = FUNC_0(VAR_0, VAR_4->magic, VAR_4->nmagic, VAR_1, VAR_2, VAR_3)) != 0) {
   return VAR_5;
  }
 }
 return 0;
}
