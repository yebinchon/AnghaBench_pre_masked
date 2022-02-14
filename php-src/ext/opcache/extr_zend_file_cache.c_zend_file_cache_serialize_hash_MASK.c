
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int zend_persistent_script ;
typedef int zend_file_cache_metainfo ;
typedef int (* serialize_callback_t ) (int *,int *,int *,void*) ;
struct TYPE_9__ {int val; int key; } ;
struct TYPE_8__ {int nNumUsed; TYPE_2__* arData; } ;
typedef TYPE_1__ HashTable ;
typedef TYPE_2__ Bucket ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (TYPE_2__*) ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_2__*) ;
 scalar_t__ FUNC_5 (int ) ;

__attribute__((used)) static void FUNC_6(HashTable *VAR_2,
                                           zend_persistent_script *VAR_3,
                                           zend_file_cache_metainfo *VAR_4,
                                           void *VAR_5,
                                           serialize_callback_t VAR_6)
{
 Bucket *VAR_7, *VAR_8;

 if (FUNC_0(VAR_2) & VAR_0) {
  VAR_2->arData = ((void*)0);
  return;
 }
 if (FUNC_1(VAR_2->arData)) {
  return;
 }
 FUNC_2(VAR_2->arData);
 VAR_7 = VAR_2->arData;
 FUNC_4(VAR_7);
 VAR_8 = VAR_7 + VAR_2->nNumUsed;
 while (VAR_7 < VAR_8) {
  if (FUNC_5(VAR_7->val) != VAR_1) {
   FUNC_3(VAR_7->key);
   VAR_6(&VAR_7->val, VAR_3, VAR_4, VAR_5);
  }
  VAR_7++;
 }
}
