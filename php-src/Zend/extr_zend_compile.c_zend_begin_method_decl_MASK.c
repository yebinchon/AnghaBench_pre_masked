
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int zend_string ;
struct TYPE_6__ {int fn_flags; int function_name; TYPE_2__* scope; } ;
typedef TYPE_1__ zend_op_array ;
typedef int zend_function ;
struct TYPE_7__ {int ce_flags; int * __debugInfo; int * __tostring; int * __isset; int * __unset; int * __set; int * __get; int * __callstatic; int * __call; int * clone; int * destructor; int * constructor; int * unserialize_func; int * serialize_func; int * name; int function_table; } ;
typedef TYPE_2__ zend_class_entry ;
typedef int zend_bool ;
typedef int uint32_t ;


 TYPE_2__* FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 char* VAR_8 ;
 char* VAR_9 ;
 char* VAR_10 ;
 char* VAR_11 ;
 char* VAR_12 ;
 char* VAR_13 ;
 char* VAR_14 ;
 char* VAR_15 ;
 char* VAR_16 ;
 char* VAR_17 ;
 char* VAR_18 ;
 char* VAR_19 ;
 char* FUNC_1 (int *) ;
 int VAR_20 ;
 int FUNC_2 (int,char*,int) ;
 int FUNC_3 (int ,char*,char*,char*,...) ;
 int * FUNC_4 (int *,int *,TYPE_1__*) ;
 int * FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int *,char*) ;
 int FUNC_8 (int *,int ) ;
 int * FUNC_9 (int *) ;

void FUNC_10(zend_op_array *VAR_21, zend_string *VAR_22, zend_bool VAR_23)
{
 zend_class_entry *VAR_24 = FUNC_0(VAR_20);
 zend_bool VAR_25 = (VAR_24->ce_flags & VAR_4) != 0;
 uint32_t VAR_26 = VAR_21->fn_flags;

 zend_string *VAR_27;

 if (VAR_25) {
  if (!(VAR_26 & VAR_6) || (VAR_26 & (VAR_2|VAR_1))) {
   FUNC_3(VAR_0, "Access type for interface method "
    "%s::%s() must be omitted", FUNC_1(VAR_24->name), FUNC_1(VAR_22));
  }
  VAR_21->fn_flags |= VAR_1;
 }

 if (VAR_21->fn_flags & VAR_1) {
  if (VAR_21->fn_flags & VAR_5) {
   FUNC_3(VAR_0, "%s function %s::%s() cannot be declared private",
    VAR_25 ? "Interface" : "Abstract", FUNC_1(VAR_24->name), FUNC_1(VAR_22));
  }

  if (VAR_23) {
   FUNC_3(VAR_0, "%s function %s::%s() cannot contain body",
    VAR_25 ? "Interface" : "Abstract", FUNC_1(VAR_24->name), FUNC_1(VAR_22));
  }

  VAR_24->ce_flags |= VAR_3;
 } else if (!VAR_23) {
  FUNC_3(VAR_0, "Non-abstract method %s::%s() must contain body",
   FUNC_1(VAR_24->name), FUNC_1(VAR_22));
 }

 VAR_21->scope = VAR_24;
 VAR_21->function_name = FUNC_6(VAR_22);

 VAR_27 = FUNC_9(VAR_22);
 VAR_27 = FUNC_5(VAR_27);

 if (FUNC_4(&VAR_24->function_table, VAR_27, VAR_21) == ((void*)0)) {
  FUNC_3(VAR_0, "Cannot redeclare %s::%s()",
   FUNC_1(VAR_24->name), FUNC_1(VAR_22));
 }

 if (FUNC_7(VAR_27, "serialize")) {
  VAR_24->serialize_func = (zend_function *) VAR_21;
 } else if (FUNC_7(VAR_27, "unserialize")) {
  VAR_24->unserialize_func = (zend_function *) VAR_21;
 } else if (FUNC_1(VAR_27)[0] != '_' || FUNC_1(VAR_27)[1] != '_') {

 } else if (FUNC_7(VAR_27, VAR_11)) {
  VAR_24->constructor = (zend_function *) VAR_21;
 } else if (FUNC_7(VAR_27, VAR_13)) {
  VAR_24->destructor = (zend_function *) VAR_21;
 } else if (FUNC_7(VAR_27, VAR_10)) {
  VAR_24->clone = (zend_function *) VAR_21;
 } else if (FUNC_7(VAR_27, VAR_9)) {
  FUNC_2(VAR_26, "__call", 0);
  VAR_24->__call = (zend_function *) VAR_21;
 } else if (FUNC_7(VAR_27, VAR_8)) {
  FUNC_2(VAR_26, "__callStatic", 1);
  VAR_24->__callstatic = (zend_function *) VAR_21;
 } else if (FUNC_7(VAR_27, VAR_14)) {
  FUNC_2(VAR_26, "__get", 0);
  VAR_24->__get = (zend_function *) VAR_21;
  VAR_24->ce_flags |= VAR_7;
 } else if (FUNC_7(VAR_27, VAR_17)) {
  FUNC_2(VAR_26, "__set", 0);
  VAR_24->__set = (zend_function *) VAR_21;
  VAR_24->ce_flags |= VAR_7;
 } else if (FUNC_7(VAR_27, VAR_19)) {
  FUNC_2(VAR_26, "__unset", 0);
  VAR_24->__unset = (zend_function *) VAR_21;
  VAR_24->ce_flags |= VAR_7;
 } else if (FUNC_7(VAR_27, VAR_16)) {
  FUNC_2(VAR_26, "__isset", 0);
  VAR_24->__isset = (zend_function *) VAR_21;
  VAR_24->ce_flags |= VAR_7;
 } else if (FUNC_7(VAR_27, VAR_18)) {
  FUNC_2(VAR_26, "__toString", 0);
  VAR_24->__tostring = (zend_function *) VAR_21;
 } else if (FUNC_7(VAR_27, VAR_15)) {
  FUNC_2(VAR_26, "__invoke", 0);
 } else if (FUNC_7(VAR_27, VAR_12)) {
  FUNC_2(VAR_26, "__debugInfo", 0);
  VAR_24->__debugInfo = (zend_function *) VAR_21;
 }

 FUNC_8(VAR_27, 0);
}
