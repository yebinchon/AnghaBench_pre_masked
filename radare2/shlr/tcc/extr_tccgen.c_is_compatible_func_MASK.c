
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* ref; } ;
struct TYPE_5__ {scalar_t__ c; struct TYPE_5__* next; int type; int r; } ;
typedef TYPE_1__ Sym ;
typedef TYPE_2__ CType ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,int *) ;

__attribute__((used)) static int FUNC_3(CType *VAR_1, CType *VAR_2) {
 Sym *VAR_3, *VAR_4;

 VAR_3 = VAR_1->ref;
 VAR_4 = VAR_2->ref;
 if (!FUNC_2 (&VAR_3->type, &VAR_4->type)) {
  return 0;
 }

 if (FUNC_0 (VAR_3->r) != FUNC_0 (VAR_4->r)) {
  return 0;
 }

 if (VAR_3->c == VAR_0 || VAR_4->c == VAR_0) {
  return 1;
 }
 if (VAR_3->c != VAR_4->c) {
  return 0;
 }
 while (VAR_3 != ((void*)0)) {
  if (VAR_4 == ((void*)0)) {
   return 0;
  }
  if (!FUNC_1 (&VAR_3->type, &VAR_4->type)) {
   return 0;
  }
  VAR_3 = VAR_3->next;
  VAR_4 = VAR_4->next;
 }
 if (VAR_4) {
  return 0;
 }
 return 1;
}
