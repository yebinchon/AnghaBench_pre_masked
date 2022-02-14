
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef size_t zend_ulong ;
typedef scalar_t__ zend_bool ;
struct TYPE_5__ {int indirect; size_t hash_value; scalar_t__ key_length; char const* key; struct TYPE_5__* next; struct TYPE_5__* data; } ;
typedef TYPE_1__ zend_accel_hash_entry ;
struct TYPE_6__ {size_t max_num_entries; size_t num_entries; TYPE_1__** hash_table; int num_direct_entries; TYPE_1__* hash_entries; } ;
typedef TYPE_2__ zend_accel_hash ;
typedef scalar_t__ uint32_t ;


 size_t FUNC_0 (int ) ;
 int FUNC_1 (char const*,char const*,scalar_t__) ;
 int VAR_0 ;
 size_t FUNC_2 (char const*,scalar_t__) ;

zend_accel_hash_entry* FUNC_3(zend_accel_hash *VAR_1, const char *VAR_2, uint32_t VAR_3, zend_bool VAR_4, void *VAR_5)
{
 zend_ulong VAR_6;
 zend_ulong VAR_7;
 zend_accel_hash_entry *VAR_8;
 zend_accel_hash_entry *VAR_9 = ((void*)0);

 if (VAR_4) {
  VAR_9 = (zend_accel_hash_entry*)VAR_5;
  while (VAR_9->indirect) {
   VAR_9 = (zend_accel_hash_entry*)VAR_9->data;
  }
 }

 VAR_6 = FUNC_2(VAR_2, VAR_3);

 VAR_6 ^= FUNC_0(VAR_0);

 VAR_7 = VAR_6 % VAR_1->max_num_entries;


 VAR_8 = VAR_1->hash_table[VAR_7];
 while (VAR_8) {
  if (VAR_8->hash_value == VAR_6
   && VAR_8->key_length == VAR_3
   && !FUNC_1(VAR_8->key, VAR_2, VAR_3)) {

   if (VAR_8->indirect) {
    if (VAR_9) {
     VAR_8->data = VAR_9;
    } else {
     ((zend_accel_hash_entry*)VAR_8->data)->data = VAR_5;
    }
   } else {
    if (VAR_9) {
     VAR_1->num_direct_entries--;
     VAR_8->data = VAR_9;
     VAR_8->indirect = 1;
    } else {
     VAR_8->data = VAR_5;
    }
   }
   return VAR_8;
  }
  VAR_8 = VAR_8->next;
 }


 if (VAR_1->num_entries == VAR_1->max_num_entries) {
  return ((void*)0);
 }

 VAR_8 = &VAR_1->hash_entries[VAR_1->num_entries++];
 if (VAR_4) {
  VAR_8->data = VAR_9;
  VAR_8->indirect = 1;
 } else {
  VAR_1->num_direct_entries++;
  VAR_8->data = VAR_5;
  VAR_8->indirect = 0;
 }
 VAR_8->hash_value = VAR_6;
 VAR_8->key = VAR_2;
 VAR_8->key_length = VAR_3;
 VAR_8->next = VAR_1->hash_table[VAR_7];
 VAR_1->hash_table[VAR_7] = VAR_8;
 return VAR_8;
}
