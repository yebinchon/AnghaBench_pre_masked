
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ relid; int key; } ;
typedef TYPE_1__ RelfilenodeMapEntry ;
typedef scalar_t__ Oid ;
typedef int HASH_SEQ_STATUS ;
typedef int Datum ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int * VAR_3 ;
 int FUNC_1 (int ,char*) ;
 int * FUNC_2 (int *,void*,int ,int *) ;
 int FUNC_3 (int *,int *) ;
 scalar_t__ FUNC_4 (int *) ;

__attribute__((used)) static void
FUNC_5(Datum VAR_4, Oid VAR_5)
{
 HASH_SEQ_STATUS VAR_6;
 RelfilenodeMapEntry *VAR_7;


 FUNC_0(VAR_3 != ((void*)0));

 FUNC_3(&VAR_6, VAR_3);
 while ((VAR_7 = (RelfilenodeMapEntry *) FUNC_4(&VAR_6)) != ((void*)0))
 {





  if (VAR_5 == VAR_2 ||
   VAR_7->relid == VAR_2 ||
   VAR_7->relid == VAR_5)
  {
   if (FUNC_2(VAR_3,
       (void *) &VAR_7->key,
       VAR_1,
       ((void*)0)) == ((void*)0))
    FUNC_1(VAR_0, "hash table corrupted");
  }
 }
}
