
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32 ;
struct TYPE_2__ {int key; scalar_t__ opts; } ;
typedef int HASH_SEQ_STATUS ;
typedef int Datum ;
typedef TYPE_1__ AttoptCacheEntry ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*) ;
 int * FUNC_1 (int ,void*,int ,int *) ;
 int FUNC_2 (int *,int ) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (scalar_t__) ;

__attribute__((used)) static void
FUNC_5(Datum VAR_3, int VAR_4, uint32 VAR_5)
{
 HASH_SEQ_STATUS VAR_6;
 AttoptCacheEntry *VAR_7;

 FUNC_2(&VAR_6, VAR_0);
 while ((VAR_7 = (AttoptCacheEntry *) FUNC_3(&VAR_6)) != ((void*)0))
 {
  if (VAR_7->opts)
   FUNC_4(VAR_7->opts);
  if (FUNC_1(VAR_0,
      (void *) &VAR_7->key,
      VAR_2,
      ((void*)0)) == ((void*)0))
   FUNC_0(VAR_1, "hash table corrupted");
 }
}
