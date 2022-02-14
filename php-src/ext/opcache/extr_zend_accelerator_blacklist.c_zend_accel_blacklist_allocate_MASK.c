
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int zend_blacklist_entry ;
struct TYPE_3__ {int pos; int size; int * entries; } ;
typedef TYPE_1__ zend_blacklist ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int *,int) ;

__attribute__((used)) static inline void FUNC_1(zend_blacklist *VAR_1)
{
 if (VAR_1->pos == VAR_1->size) {
  VAR_1->size += VAR_0;
  VAR_1->entries = (zend_blacklist_entry *) FUNC_0(VAR_1->entries, sizeof(zend_blacklist_entry)*VAR_1->size);
 }
}
