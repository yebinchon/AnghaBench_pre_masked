
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32 ;
struct TYPE_2__ {int key; } ;
typedef TYPE_1__ ShippableCacheEntry ;
typedef int HASH_SEQ_STATUS ;
typedef int Datum ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*) ;
 int * FUNC_1 (int ,void*,int ,int *) ;
 int FUNC_2 (int *,int ) ;
 scalar_t__ FUNC_3 (int *) ;

__attribute__((used)) static void
FUNC_4(Datum VAR_3, int VAR_4, uint32 VAR_5)
{
 HASH_SEQ_STATUS VAR_6;
 ShippableCacheEntry *VAR_7;







 FUNC_2(&VAR_6, VAR_2);
 while ((VAR_7 = (ShippableCacheEntry *) FUNC_3(&VAR_6)) != ((void*)0))
 {
  if (FUNC_1(VAR_2,
      (void *) &VAR_7->key,
      VAR_1,
      ((void*)0)) == ((void*)0))
   FUNC_0(VAR_0, "hash table corrupted");
 }
}
