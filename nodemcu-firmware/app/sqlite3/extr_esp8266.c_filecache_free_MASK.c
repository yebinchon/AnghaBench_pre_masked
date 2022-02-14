
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_1__* pLinkedList_t ;
typedef TYPE_2__* pFileCache_t ;
struct TYPE_6__ {TYPE_1__* list; } ;
struct TYPE_5__ {struct TYPE_5__* next; } ;


 int FUNC_0 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_1 (pFileCache_t VAR_0) {
 pLinkedList_t VAR_1 = VAR_0->list, VAR_2;

 while (VAR_1 != ((void*)0)) {
  VAR_2 = VAR_1->next;
  FUNC_0 (VAR_1);
  VAR_1 = VAR_2;
 }
}
