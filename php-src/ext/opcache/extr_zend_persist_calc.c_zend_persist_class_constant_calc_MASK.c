
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_6__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int zval ;
struct TYPE_7__ {scalar_t__ doc_comment; int value; } ;
typedef TYPE_1__ zend_class_constant ;
struct TYPE_8__ {scalar_t__ save_comments; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (scalar_t__) ;
 TYPE_6__ FUNC_2 (int ) ;
 TYPE_1__* FUNC_3 (int *) ;
 int VAR_0 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*,TYPE_1__*) ;

__attribute__((used)) static void FUNC_7(zval *VAR_1)
{
 zend_class_constant *VAR_2 = FUNC_3(VAR_1);

 if (!FUNC_5(VAR_2)) {
  FUNC_6(VAR_2, VAR_2);
  FUNC_0(sizeof(zend_class_constant));
  FUNC_4(&VAR_2->value);
  if (FUNC_2(VAR_0).save_comments && VAR_2->doc_comment) {
   FUNC_1(VAR_2->doc_comment);
  }
 }
}
