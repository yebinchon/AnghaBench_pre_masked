
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_1__ ;


typedef int zval ;
struct TYPE_14__ {int val; } ;
typedef TYPE_1__ zend_reference ;
typedef int zend_persistent_script ;
typedef int zend_file_cache_metainfo ;
typedef TYPE_1__ zend_ast_ref ;
typedef TYPE_1__ HashTable ;


 int FUNC_0 (TYPE_1__*) ;



 int FUNC_1 (TYPE_1__*) ;

 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;
 TYPE_1__* FUNC_5 (int *) ;
 TYPE_1__* FUNC_6 (int *) ;
 TYPE_1__* FUNC_7 (int *) ;
 TYPE_1__* FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int ,int *,int *,void*) ;
 int FUNC_11 (TYPE_1__*,int *,int *,void*,void (*) (int *,int *,int *,void*)) ;

__attribute__((used)) static void FUNC_12(zval *VAR_0,
                                           zend_persistent_script *VAR_1,
                                           zend_file_cache_metainfo *VAR_2,
                                           void *VAR_3)
{
 switch (FUNC_9(VAR_0)) {
  case 128:
   if (!FUNC_1(FUNC_8(VAR_0))) {
    FUNC_3(FUNC_8(VAR_0));
   }
   break;
  case 131:
   if (!FUNC_1(FUNC_5(VAR_0))) {
    HashTable *VAR_4;

    FUNC_2(FUNC_5(VAR_0));
    VAR_4 = FUNC_5(VAR_0);
    FUNC_4(VAR_4);
    FUNC_11(VAR_4, VAR_1, VAR_2, VAR_3, FUNC_12);
   }
   break;
  case 129:
   if (!FUNC_1(FUNC_7(VAR_0))) {
    zend_reference *VAR_5;

    FUNC_2(FUNC_7(VAR_0));
    VAR_5 = FUNC_7(VAR_0);
    FUNC_4(VAR_5);
    FUNC_12(&VAR_5->val, VAR_1, VAR_2, VAR_3);
   }
   break;
  case 130:
   if (!FUNC_1(FUNC_6(VAR_0))) {
    zend_ast_ref *VAR_6;

    FUNC_2(FUNC_6(VAR_0));
    VAR_6 = FUNC_6(VAR_0);
    FUNC_4(VAR_6);
    FUNC_10(FUNC_0(VAR_6), VAR_1, VAR_2, VAR_3);
   }
   break;
 }
}
