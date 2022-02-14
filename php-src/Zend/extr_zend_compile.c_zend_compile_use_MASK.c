
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int zend_string ;
typedef int zend_bool ;
struct TYPE_7__ {scalar_t__ children; TYPE_2__** child; } ;
typedef TYPE_1__ zend_ast_list ;
struct TYPE_8__ {scalar_t__ attr; struct TYPE_8__** child; } ;
typedef TYPE_2__ zend_ast ;
typedef scalar_t__ uint32_t ;
typedef int HashTable ;


 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (int ) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (int *) ;
 char* FUNC_2 (int *) ;
 int VAR_5 ;
 int FUNC_3 (char*,char*,int) ;
 TYPE_1__* FUNC_4 (TYPE_2__*) ;
 int * FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (scalar_t__,int *,int *,int *) ;
 int FUNC_7 (int ,char*,char*) ;
 int FUNC_8 (int ,char*,...) ;
 int * FUNC_9 (scalar_t__) ;
 scalar_t__ FUNC_10 (int *,char const**,size_t*) ;
 char* FUNC_11 (scalar_t__) ;
 int FUNC_12 (int *,int *,int *) ;
 scalar_t__ FUNC_13 (int *,scalar_t__) ;
 scalar_t__ FUNC_14 (int *) ;
 int * FUNC_15 (int *) ;
 int FUNC_16 (char*,char*,int) ;
 int FUNC_17 (int *) ;
 int * FUNC_18 (int,int ) ;
 int * FUNC_19 (int *) ;
 int FUNC_20 (int *) ;
 scalar_t__ FUNC_21 (int *,char*) ;
 int * FUNC_22 (char const*,size_t,int ) ;
 int FUNC_23 (int *,int ) ;
 int * FUNC_24 (int *) ;

void FUNC_25(zend_ast *VAR_6)
{
 zend_ast_list *VAR_7 = FUNC_4(VAR_6);
 uint32_t VAR_8;
 zend_string *VAR_9 = FUNC_0(VAR_5);
 uint32_t VAR_10 = VAR_6->attr;
 HashTable *VAR_11 = FUNC_9(VAR_10);
 zend_bool VAR_12 = VAR_10 == VAR_4;

 for (VAR_8 = 0; VAR_8 < VAR_7->children; ++VAR_8) {
  zend_ast *VAR_13 = VAR_7->child[VAR_8];
  zend_ast *VAR_14 = VAR_13->child[0];
  zend_ast *VAR_15 = VAR_13->child[1];
  zend_string *VAR_16 = FUNC_5(VAR_14);
  zend_string *VAR_17, *VAR_18;

  if (VAR_15) {
   VAR_17 = FUNC_19(FUNC_5(VAR_15));
  } else {
   const char *VAR_19;
   size_t VAR_20;
   if (FUNC_10(VAR_16, &VAR_19, &VAR_20)) {

    VAR_17 = FUNC_22(VAR_19, VAR_20, 0);
   } else {
    VAR_17 = FUNC_19(VAR_16);

    if (!VAR_9) {
     if (VAR_10 == VAR_2 && FUNC_21(VAR_17, "strict")) {
      FUNC_8(VAR_0,
       "You seem to be trying to use a different language...");
     }

     FUNC_7(VAR_1, "The use statement with non-compound name '%s' "
      "has no effect", FUNC_2(VAR_17));
    }
   }
  }

  if (VAR_12) {
   VAR_18 = FUNC_19(VAR_17);
  } else {
   VAR_18 = FUNC_24(VAR_17);
  }

  if (VAR_10 == VAR_3 && FUNC_14(VAR_17)) {
   FUNC_8(VAR_0, "Cannot use %s as %s because '%s' "
    "is a special class name", FUNC_2(VAR_16), FUNC_2(VAR_17), FUNC_2(VAR_17));
  }

  if (VAR_9) {
   zend_string *VAR_21 = FUNC_18(FUNC_1(VAR_9) + 1 + FUNC_1(VAR_17), 0);
   FUNC_16(FUNC_2(VAR_21), FUNC_2(VAR_9), FUNC_1(VAR_9));
   FUNC_2(VAR_21)[FUNC_1(VAR_9)] = '\\';
   FUNC_3(FUNC_2(VAR_21) + FUNC_1(VAR_9) + 1, FUNC_2(VAR_18), FUNC_1(VAR_18) + 1);

   if (FUNC_13(VAR_21, VAR_10)) {
    FUNC_6(VAR_10, VAR_16, VAR_17, VAR_21);
   }

   FUNC_20(VAR_21);
  } else if (FUNC_13(VAR_18, VAR_10)) {
   FUNC_6(VAR_10, VAR_16, VAR_17, VAR_18);
  }

  FUNC_17(VAR_16);
  VAR_16 = FUNC_15(VAR_16);
  if (!FUNC_12(VAR_11, VAR_18, VAR_16)) {
   FUNC_8(VAR_0, "Cannot use%s %s as %s because the name "
    "is already in use", FUNC_11(VAR_10), FUNC_2(VAR_16), FUNC_2(VAR_17));
  }

  FUNC_23(VAR_18, 0);
  FUNC_23(VAR_17, 0);
 }
}
