
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int zend_blacklist_entry ;
struct TYPE_4__ {int * regexp_list; int * entries; int size; scalar_t__ pos; } ;
typedef TYPE_1__ zend_blacklist ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int,int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ,char*) ;

void FUNC_3(zend_blacklist *VAR_2)
{
 VAR_2->pos = 0;
 VAR_2->size = VAR_1;

 if (VAR_2->entries != ((void*)0)) {
  FUNC_1(VAR_2);
 }

 VAR_2->entries = (zend_blacklist_entry *) FUNC_0(sizeof(zend_blacklist_entry), VAR_2->size);
 if (!VAR_2->entries) {
  FUNC_2(VAR_0, "Blacklist initialization: no memory\n");
  return;
 }
 VAR_2->regexp_list = ((void*)0);
}
