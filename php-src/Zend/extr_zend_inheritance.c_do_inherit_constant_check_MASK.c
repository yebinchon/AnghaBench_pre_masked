
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int zval ;
typedef int zend_string ;
struct TYPE_5__ {int * name; } ;
typedef TYPE_1__ zend_class_entry ;
struct TYPE_6__ {scalar_t__ ce; } ;
typedef TYPE_2__ zend_class_constant ;
typedef int zend_bool ;
typedef int HashTable ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int ,char*,int ,int ) ;
 int * FUNC_3 (int *,int *,int) ;

__attribute__((used)) static zend_bool FUNC_4(HashTable *VAR_1, zend_class_constant *VAR_2, zend_string *VAR_3, const zend_class_entry *VAR_4)
{
 zval *VAR_5 = FUNC_3(VAR_1, VAR_3, 1);
 zend_class_constant *VAR_6;

 if (VAR_5 != ((void*)0)) {
  VAR_6 = (zend_class_constant*)FUNC_1(VAR_5);
  if (VAR_6->ce != VAR_2->ce) {
   FUNC_2(VAR_0, "Cannot inherit previously-inherited or override constant %s from interface %s", FUNC_0(VAR_3), FUNC_0(VAR_4->name));
  }
  return 0;
 }
 return 1;
}
