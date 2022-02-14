
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int zend_string ;
typedef int zend_function ;
struct TYPE_3__ {int * __debugInfo; int * __tostring; int * __callstatic; int ce_flags; int * __isset; int * __unset; int * __call; int * __set; int * __get; int * destructor; int * constructor; int * clone; int * unserialize_func; int * serialize_func; } ;
typedef TYPE_1__ zend_class_entry ;


 int VAR_0 ;
 char* VAR_1 ;
 char* VAR_2 ;
 char* VAR_3 ;
 char* VAR_4 ;
 char* VAR_5 ;
 char* VAR_6 ;
 char* VAR_7 ;
 char* VAR_8 ;
 char* VAR_9 ;
 char* VAR_10 ;
 char* VAR_11 ;
 char* FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *,char*) ;

__attribute__((used)) static void FUNC_2(zend_class_entry* VAR_12, zend_string* VAR_13, zend_function* VAR_14)
{
 if (FUNC_1(VAR_13, "serialize")) {
  VAR_12->serialize_func = VAR_14;
 } else if (FUNC_1(VAR_13, "unserialize")) {
  VAR_12->unserialize_func = VAR_14;
 } else if (FUNC_0(VAR_13)[0] != '_' || FUNC_0(VAR_13)[1] != '_') {

 } else if (FUNC_1(VAR_13, VAR_3)) {
  VAR_12->clone = VAR_14;
 } else if (FUNC_1(VAR_13, VAR_4)) {
  VAR_12->constructor = VAR_14;
 } else if (FUNC_1(VAR_13, VAR_6)) {
  VAR_12->destructor = VAR_14;
 } else if (FUNC_1(VAR_13, VAR_7)) {
  VAR_12->__get = VAR_14;
  VAR_12->ce_flags |= VAR_0;
 } else if (FUNC_1(VAR_13, VAR_9)) {
  VAR_12->__set = VAR_14;
  VAR_12->ce_flags |= VAR_0;
 } else if (FUNC_1(VAR_13, VAR_2)) {
  VAR_12->__call = VAR_14;
 } else if (FUNC_1(VAR_13, VAR_11)) {
  VAR_12->__unset = VAR_14;
  VAR_12->ce_flags |= VAR_0;
 } else if (FUNC_1(VAR_13, VAR_8)) {
  VAR_12->__isset = VAR_14;
  VAR_12->ce_flags |= VAR_0;
 } else if (FUNC_1(VAR_13, VAR_1)) {
  VAR_12->__callstatic = VAR_14;
 } else if (FUNC_1(VAR_13, VAR_10)) {
  VAR_12->__tostring = VAR_14;
 } else if (FUNC_1(VAR_13, VAR_5)) {
  VAR_12->__debugInfo = VAR_14;
 }
}
