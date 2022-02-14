
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int zend_accel_hash_entry ;
struct TYPE_3__ {size_t max_num_entries; void* hash_table; void* hash_entries; scalar_t__ num_direct_entries; scalar_t__ num_entries; } ;
typedef TYPE_1__ zend_accel_hash ;
typedef size_t uint32_t ;


 int VAR_0 ;
 int FUNC_0 (void*,int ,int) ;
 size_t VAR_1 ;
 size_t* VAR_2 ;
 int FUNC_1 (int ,char*) ;
 void* FUNC_2 (int) ;

void FUNC_3(zend_accel_hash *VAR_3, uint32_t VAR_4)
{
 uint32_t VAR_5;

 for (VAR_5=0; VAR_5<VAR_1; VAR_5++) {
  if (VAR_4 <= VAR_2[VAR_5]) {
   VAR_4 = VAR_2[VAR_5];
   break;
  }
 }

 VAR_3->num_entries = 0;
 VAR_3->num_direct_entries = 0;
 VAR_3->max_num_entries = VAR_4;


 VAR_3->hash_table = FUNC_2(sizeof(zend_accel_hash_entry *)*VAR_3->max_num_entries);
 if (!VAR_3->hash_table) {
  FUNC_1(VAR_0, "Insufficient shared memory!");
  return;
 }


 VAR_3->hash_entries = FUNC_2(sizeof(zend_accel_hash_entry)*VAR_3->max_num_entries);
 if (!VAR_3->hash_entries) {
  FUNC_1(VAR_0, "Insufficient shared memory!");
  return;
 }
 FUNC_0(VAR_3->hash_table, 0, sizeof(zend_accel_hash_entry *)*VAR_3->max_num_entries);
}
