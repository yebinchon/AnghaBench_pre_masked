
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int zval ;
typedef int zend_persistent_script ;
typedef int zend_file_cache_metainfo ;
struct TYPE_6__ {scalar_t__ doc_comment; int value; struct TYPE_6__* ce; } ;
typedef TYPE_1__ zend_class_constant ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int ) ;
 TYPE_1__* FUNC_5 (int *) ;
 int FUNC_6 (int *,int *,int *,void*) ;

__attribute__((used)) static void FUNC_7(zval *VAR_0,
                                                     zend_persistent_script *VAR_1,
                                                     zend_file_cache_metainfo *VAR_2,
                                                     void *VAR_3)
{
 if (!FUNC_0(FUNC_5(VAR_0))) {
  zend_class_constant *VAR_4;

  FUNC_1(FUNC_5(VAR_0));
  VAR_4 = FUNC_5(VAR_0);
  FUNC_3(VAR_4);

  FUNC_4(VAR_4->ce != ((void*)0));
  if (!FUNC_0(VAR_4->ce)) {
   FUNC_1(VAR_4->ce);

   FUNC_6(&VAR_4->value, VAR_1, VAR_2, VAR_3);

   if (VAR_4->doc_comment) {
    FUNC_2(VAR_4->doc_comment);
   }
  }
 }
}
