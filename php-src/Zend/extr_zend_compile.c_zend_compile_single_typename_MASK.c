
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int zend_uchar ;
typedef int zend_type ;
typedef int zend_string ;
struct TYPE_6__ {int attr; scalar_t__ kind; } ;
typedef TYPE_1__ zend_ast ;
typedef scalar_t__ uint32_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int *,int ,int ) ;
 int FUNC_3 (int,int ,int ) ;
 int VAR_5 ;
 int FUNC_4 (int *) ;
 int VAR_6 ;
 int FUNC_5 (int *) ;
 int * FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (scalar_t__) ;
 int FUNC_8 (int ,char*,int ,char const*,char const*,...) ;
 int FUNC_9 (int ,char*,int ) ;
 scalar_t__ FUNC_10 (TYPE_1__*) ;
 scalar_t__ FUNC_11 (int *,char const**) ;
 scalar_t__ FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 int * FUNC_14 (TYPE_1__*) ;
 int FUNC_15 (int *) ;
 int * FUNC_16 (int *) ;

__attribute__((used)) static zend_type FUNC_17(zend_ast *VAR_7)
{
 FUNC_1(!(VAR_7->attr & VAR_5));
 if (VAR_7->kind == VAR_2) {
  return (zend_type) FUNC_3(VAR_7->attr, 0, 0);
 } else {
  zend_string *VAR_8 = FUNC_6(VAR_7);
  zend_uchar VAR_9 = FUNC_13(VAR_8);

  if (VAR_9 != 0) {
   if ((VAR_7->attr & VAR_4) != VAR_4) {
    FUNC_9(VAR_0,
     "Type declaration '%s' must be unqualified",
     FUNC_4(FUNC_16(VAR_8)));
   }
   return (zend_type) FUNC_3(VAR_9, 0, 0);
  } else {
   const char *VAR_10;
   zend_string *VAR_11 = FUNC_6(VAR_7);
   uint32_t VAR_12 = FUNC_10(VAR_7);
   if (VAR_12 == VAR_3) {
    VAR_8 = FUNC_14(VAR_7);
    FUNC_5(VAR_8);
   } else {
    FUNC_7(VAR_12);
    FUNC_15(VAR_8);
   }

   if (VAR_7->attr == VAR_4
     && FUNC_11(VAR_11, &VAR_10)
     && FUNC_12(VAR_11)) {
    const char *VAR_13 =
     FUNC_0(VAR_6) ? " or import the class with \"use\"" : "";
    if (VAR_10) {
     FUNC_8(VAR_1,
      "\"%s\" will be interpreted as a class name. Did you mean \"%s\"? "
      "Write \"\\%s\"%s to suppress this warning",
      FUNC_4(VAR_11), VAR_10, FUNC_4(VAR_8), VAR_13);
    } else {
     FUNC_8(VAR_1,
      "\"%s\" is not a supported builtin type "
      "and will be interpreted as a class name. "
      "Write \"\\%s\"%s to suppress this warning",
      FUNC_4(VAR_11), FUNC_4(VAR_8), VAR_13);
    }
   }

   return (zend_type) FUNC_2(VAR_8, 0, 0);
  }
 }
}
