
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int zval ;
struct TYPE_7__ {int name; } ;
typedef TYPE_1__ zend_class_entry ;
typedef int smart_str ;
struct TYPE_8__ {int error_code; } ;
typedef TYPE_2__ php_json_encoder ;
typedef int HashTable ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int VAR_4 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *,char*) ;
 scalar_t__ FUNC_6 (int ) ;
 TYPE_1__* FUNC_7 (int *) ;
 int * FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (int *) ;
 scalar_t__ FUNC_10 (int ) ;
 int FUNC_11 (int *,int *,int *,int *,int ,int *) ;
 int VAR_5 ;
 int FUNC_12 (int *,int *,int,TYPE_2__*) ;
 int FUNC_13 (int *,int *,int,TYPE_2__*) ;
 int FUNC_14 (int *,char*,int) ;
 int FUNC_15 (int *,int ,char*,int ) ;
 int FUNC_16 (int *) ;

__attribute__((used)) static int FUNC_17(smart_str *VAR_6, zval *VAR_7, int VAR_8, php_json_encoder *VAR_9)
{
 zend_class_entry *VAR_10 = FUNC_7(VAR_7);
 HashTable* VAR_11 = FUNC_8(VAR_7);
 zval VAR_12, VAR_13;
 int VAR_14;

 if (VAR_11 && FUNC_1(VAR_11)) {
  VAR_9->error_code = VAR_3;
  if (VAR_8 & VAR_4) {
   FUNC_14(VAR_6, "null", 4);
  }
  return VAR_0;
 }

 FUNC_2(VAR_11);

 FUNC_5(&VAR_13, "jsonSerialize");

 if (VAR_0 == FUNC_11(((void*)0), VAR_7, &VAR_13, &VAR_12, 0, ((void*)0)) || FUNC_10(VAR_12) == VAR_2) {
  if (!FUNC_0(VAR_5)) {
   FUNC_15(((void*)0), 0, "Failed calling %s::jsonSerialize()", FUNC_4(VAR_10->name));
  }
  FUNC_16(&VAR_13);

  if (VAR_8 & VAR_4) {
   FUNC_14(VAR_6, "null", 4);
  }
  FUNC_3(VAR_11);
  return VAR_0;
 }

 if (FUNC_0(VAR_5)) {

  FUNC_16(&VAR_12);
  FUNC_16(&VAR_13);

  if (VAR_8 & VAR_4) {
   FUNC_14(VAR_6, "null", 4);
  }
  FUNC_3(VAR_11);
  return VAR_0;
 }

 if ((FUNC_10(VAR_12) == VAR_1) &&
  (FUNC_6(VAR_12) == FUNC_9(VAR_7))) {

  FUNC_3(VAR_11);
  VAR_14 = FUNC_12(VAR_6, &VAR_12, VAR_8, VAR_9);
 } else {

  VAR_14 = FUNC_13(VAR_6, &VAR_12, VAR_8, VAR_9);
  FUNC_3(VAR_11);
 }

 FUNC_16(&VAR_12);
 FUNC_16(&VAR_13);

 return VAR_14;
}
