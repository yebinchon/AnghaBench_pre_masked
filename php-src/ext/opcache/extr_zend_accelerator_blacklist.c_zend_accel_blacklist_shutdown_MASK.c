
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {struct TYPE_6__* next; int re; struct TYPE_6__* path; } ;
typedef TYPE_1__ zend_regexp_list ;
typedef TYPE_1__ zend_blacklist_entry ;
struct TYPE_7__ {int pos; TYPE_1__* regexp_list; TYPE_1__* entries; } ;
typedef TYPE_3__ zend_blacklist ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ) ;

void FUNC_2(zend_blacklist *VAR_0)
{
 zend_blacklist_entry *VAR_1 = VAR_0->entries, *VAR_2 = VAR_0->entries + VAR_0->pos;

 while (VAR_1<VAR_2) {
  FUNC_0(VAR_1->path);
  VAR_1++;
 }
 FUNC_0(VAR_0->entries);
 VAR_0->entries = ((void*)0);
 if (VAR_0->regexp_list) {
  zend_regexp_list *VAR_3, *VAR_4 = VAR_0->regexp_list;
  while (VAR_4) {
   FUNC_1(VAR_4->re);
   VAR_3 = VAR_4;
   VAR_4 = VAR_4->next;
   FUNC_0(VAR_3);
  }
 }
}
