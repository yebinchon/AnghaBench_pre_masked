
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int zend_accel_hash_entry ;
struct TYPE_3__ {int max_num_entries; int hash_table; scalar_t__ num_direct_entries; scalar_t__ num_entries; } ;
typedef TYPE_1__ zend_accel_hash ;


 int FUNC_0 (int ,int ,int) ;

void FUNC_1(zend_accel_hash *VAR_0)
{
 VAR_0->num_entries = 0;
 VAR_0->num_direct_entries = 0;
 FUNC_0(VAR_0->hash_table, 0, sizeof(zend_accel_hash_entry *)*VAR_0->max_num_entries);
}
