
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {TYPE_2__* constructor; int name; int __debugInfo; int destructor; int unserialize; int unserialize_func; int serialize; int serialize_func; int clone; int __tostring; int __callstatic; int __call; int __isset; int __unset; int __set; int __get; scalar_t__ iterator_funcs_ptr; int get_iterator; int create_object; struct TYPE_7__* parent; } ;
typedef TYPE_3__ zend_class_entry ;
struct TYPE_5__ {int fn_flags; int function_name; } ;
struct TYPE_6__ {TYPE_1__ common; } ;


 scalar_t__ FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int) ;
 int VAR_1 ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,char*,int ,int ,int ,int ) ;

__attribute__((used)) static void FUNC_5(zend_class_entry *VAR_2)
{
 zend_class_entry *VAR_3 = VAR_2->parent;

 FUNC_2(VAR_3 != ((void*)0));


 VAR_2->create_object = VAR_3->create_object;


 if (FUNC_0(!VAR_2->get_iterator)) {
  VAR_2->get_iterator = VAR_3->get_iterator;
 }
 if (VAR_3->iterator_funcs_ptr) {

  FUNC_2(VAR_2->iterator_funcs_ptr);
 }
 if (FUNC_0(!VAR_2->__get)) {
  VAR_2->__get = VAR_3->__get;
 }
 if (FUNC_0(!VAR_2->__set)) {
  VAR_2->__set = VAR_3->__set;
 }
 if (FUNC_0(!VAR_2->__unset)) {
  VAR_2->__unset = VAR_3->__unset;
 }
 if (FUNC_0(!VAR_2->__isset)) {
  VAR_2->__isset = VAR_3->__isset;
 }
 if (FUNC_0(!VAR_2->__call)) {
  VAR_2->__call = VAR_3->__call;
 }
 if (FUNC_0(!VAR_2->__callstatic)) {
  VAR_2->__callstatic = VAR_3->__callstatic;
 }
 if (FUNC_0(!VAR_2->__tostring)) {
  VAR_2->__tostring = VAR_3->__tostring;
 }
 if (FUNC_0(!VAR_2->clone)) {
  VAR_2->clone = VAR_3->clone;
 }
 if (FUNC_0(!VAR_2->serialize_func)) {
  VAR_2->serialize_func = VAR_3->serialize_func;
 }
 if (FUNC_0(!VAR_2->serialize)) {
  VAR_2->serialize = VAR_3->serialize;
 }
 if (FUNC_0(!VAR_2->unserialize_func)) {
  VAR_2->unserialize_func = VAR_3->unserialize_func;
 }
 if (FUNC_0(!VAR_2->unserialize)) {
  VAR_2->unserialize = VAR_3->unserialize;
 }
 if (!VAR_2->destructor) {
  VAR_2->destructor = VAR_3->destructor;
 }
 if (FUNC_0(!VAR_2->__debugInfo)) {
  VAR_2->__debugInfo = VAR_3->__debugInfo;
 }

 if (VAR_2->constructor) {
  if (VAR_3->constructor && FUNC_1(VAR_3->constructor->common.fn_flags & VAR_1)) {
   FUNC_4(VAR_0, "Cannot override final %s::%s() with %s::%s()",
    FUNC_3(VAR_3->name), FUNC_3(VAR_3->constructor->common.function_name),
    FUNC_3(VAR_2->name), FUNC_3(VAR_2->constructor->common.function_name));
  }
  return;
 }

 VAR_2->constructor = VAR_3->constructor;
}
