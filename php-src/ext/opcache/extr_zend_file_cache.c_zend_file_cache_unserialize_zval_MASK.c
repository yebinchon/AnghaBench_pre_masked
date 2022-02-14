
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int zval ;
struct TYPE_2__ {int val; } ;
typedef TYPE_1__ zend_reference ;
typedef int zend_persistent_script ;
typedef int HashTable ;






 int FUNC_0 (void*) ;
 int FUNC_1 (void*) ;
 int FUNC_2 (void*) ;
 int VAR_0 ;
 void* FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 void* FUNC_5 (int *) ;
 void* FUNC_6 (int *) ;
 void* FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int ,int *,void*) ;
 int FUNC_10 (int *,int *,void*,void (*) (int *,int *,void*),int ) ;

__attribute__((used)) static void FUNC_11(zval *VAR_1,
                                             zend_persistent_script *VAR_2,
                                             void *VAR_3)
{
 switch (FUNC_8(VAR_1)) {
  case 128:
   if (!FUNC_0(FUNC_7(VAR_1))) {
    FUNC_2(FUNC_7(VAR_1));
   }
   break;
  case 131:
   if (!FUNC_0(FUNC_3(VAR_1))) {
    HashTable *VAR_4;

    FUNC_1(FUNC_3(VAR_1));
    VAR_4 = FUNC_3(VAR_1);
    FUNC_10(VAR_4,
      VAR_2, VAR_3, FUNC_11, VAR_0);
   }
   break;
  case 129:
   if (!FUNC_0(FUNC_6(VAR_1))) {
    zend_reference *VAR_5;

    FUNC_1(FUNC_6(VAR_1));
    VAR_5 = FUNC_6(VAR_1);
    FUNC_11(&VAR_5->val, VAR_2, VAR_3);
   }
   break;
  case 130:
   if (!FUNC_0(FUNC_5(VAR_1))) {
    FUNC_1(FUNC_5(VAR_1));
    FUNC_9(FUNC_4(VAR_1), VAR_2, VAR_3);
   }
   break;
 }
}
