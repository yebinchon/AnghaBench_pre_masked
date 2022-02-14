
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_6__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int zval ;
struct TYPE_7__ {scalar_t__ doc_comment; int type; int name; } ;
typedef TYPE_1__ zend_property_info ;
struct TYPE_8__ {scalar_t__ save_comments; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (scalar_t__) ;
 TYPE_6__ FUNC_3 (int ) ;
 TYPE_1__* FUNC_4 (int *) ;
 int VAR_0 ;
 int FUNC_5 (int *) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*,TYPE_1__*) ;

__attribute__((used)) static void FUNC_8(zval *VAR_1)
{
 zend_property_info *VAR_2 = FUNC_4(VAR_1);

 if (!FUNC_6(VAR_2)) {
  FUNC_7(VAR_2, VAR_2);
  FUNC_1(sizeof(zend_property_info));
  FUNC_0(VAR_2->name);
  FUNC_5(&VAR_2->type);
  if (FUNC_3(VAR_0).save_comments && VAR_2->doc_comment) {
   FUNC_2(VAR_2->doc_comment);
  }
 }
}
