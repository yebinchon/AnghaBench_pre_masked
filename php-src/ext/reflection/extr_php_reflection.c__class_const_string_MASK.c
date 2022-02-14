
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int zend_string ;
struct TYPE_3__ {int value; int ce; } ;
typedef TYPE_1__ zend_class_constant ;
typedef int smart_str ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int *,char*,char*,char*,char const*,char*,...) ;
 int FUNC_4 (int *) ;
 char* FUNC_5 (int ) ;
 char* FUNC_6 (int *) ;
 int * FUNC_7 (int *,int **) ;
 int FUNC_8 (int *,int ) ;

__attribute__((used)) static void FUNC_9(smart_str *VAR_1, char *VAR_2, zend_class_constant *VAR_3, char *VAR_4)
{
 char *VAR_5 = FUNC_5(FUNC_1(VAR_3->value));
 const char *VAR_6;

 FUNC_8(&VAR_3->value, VAR_3->ce);
 VAR_6 = FUNC_6(&VAR_3->value);

 if (FUNC_2(VAR_3->value) == VAR_0) {
  FUNC_3(VAR_1, "%sConstant [ %s %s %s ] { Array }\n",
      VAR_4, VAR_5, VAR_6, VAR_2);
 } else {
  zend_string *VAR_7;
  zend_string *VAR_8 = FUNC_7(&VAR_3->value, &VAR_7);

  FUNC_3(VAR_1, "%sConstant [ %s %s %s ] { %s }\n",
      VAR_4, VAR_5, VAR_6, VAR_2, FUNC_0(VAR_8));

  FUNC_4(VAR_7);
 }
}
