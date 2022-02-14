
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {TYPE_1__* prev; struct TYPE_9__* next; scalar_t__ data; } ;
typedef TYPE_2__ zend_llist_element ;
struct TYPE_10__ {int count; TYPE_1__* tail; TYPE_2__* head; } ;
typedef TYPE_3__ zend_llist ;
struct TYPE_11__ {size_t header_len; char* header; } ;
typedef TYPE_4__ sapi_header_struct ;
struct TYPE_8__ {TYPE_2__* next; } ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (char*,char*,size_t) ;

__attribute__((used)) static void FUNC_3(zend_llist *VAR_0, char *VAR_1, size_t VAR_2) {
 sapi_header_struct *VAR_3;
 zend_llist_element *VAR_4;
 zend_llist_element *VAR_5=VAR_0->head;

 while (VAR_5) {
  VAR_3 = (sapi_header_struct *)(VAR_5->data);
  VAR_4 = VAR_5->next;
  if (VAR_3->header_len > VAR_2 && VAR_3->header[VAR_2] == ':'
    && !FUNC_2(VAR_3->header, VAR_1, VAR_2)) {
   if (VAR_5->prev) {
    VAR_5->prev->next = VAR_4;
   } else {
    VAR_0->head = VAR_4;
   }
   if (VAR_4) {
    VAR_4->prev = VAR_5->prev;
   } else {
    VAR_0->tail = VAR_5->prev;
   }
   FUNC_1(VAR_3);
   FUNC_0(VAR_5);
   --VAR_0->count;
  }
  VAR_5 = VAR_4;
 }
}
