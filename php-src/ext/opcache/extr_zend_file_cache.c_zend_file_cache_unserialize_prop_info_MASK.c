
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int zval ;
struct TYPE_5__ {int type; int * doc_comment; int * name; struct TYPE_5__* ce; } ;
typedef TYPE_1__ zend_property_info ;
typedef int zend_persistent_script ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int) ;
 TYPE_1__* FUNC_4 (int *) ;
 int FUNC_5 (int *,int *,void*) ;

__attribute__((used)) static void FUNC_6(zval *VAR_0,
                                                  zend_persistent_script *VAR_1,
                                                  void *VAR_2)
{
 if (!FUNC_0(FUNC_4(VAR_0))) {
  zend_property_info *VAR_3;

  FUNC_1(FUNC_4(VAR_0));
  VAR_3 = FUNC_4(VAR_0);

  FUNC_3(VAR_3->ce != ((void*)0) && VAR_3->name != ((void*)0));
  if (!FUNC_0(VAR_3->ce)) {
   FUNC_1(VAR_3->ce);
   FUNC_2(VAR_3->name);
   if (VAR_3->doc_comment) {
    FUNC_2(VAR_3->doc_comment);
   }
   FUNC_5(&VAR_3->type, VAR_1, VAR_2);
  }
 }
}
