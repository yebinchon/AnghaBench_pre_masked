
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int zval ;
struct TYPE_6__ {int key; } ;
typedef TYPE_1__ zend_hash_key ;
typedef int zend_bool ;
struct TYPE_7__ {scalar_t__ status; } ;
typedef TYPE_2__ php_dir_entry ;
typedef int HashTable ;


 int FUNC_0 (int ) ;
 TYPE_2__* FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;
 TYPE_2__* FUNC_3 (int *,int ) ;

__attribute__((used)) static zend_bool FUNC_4(HashTable *VAR_1, zval *VAR_2, zend_hash_key *VAR_3, void *VAR_4)
{
 php_dir_entry *VAR_5 = FUNC_1(VAR_2);
 php_dir_entry *VAR_6;

 if ((VAR_6 = FUNC_3(VAR_1, VAR_3->key)) == ((void*)0)) {
  return 1;
 }

 if (VAR_5->status >= VAR_6->status) {

  FUNC_2((VAR_0, "ADDING/OVERWRITING %s (%d vs. %d)\n", FUNC_0(VAR_3->key), VAR_5->status, VAR_6->status));
  return 1;
 } else {
  return 0;
 }
}
