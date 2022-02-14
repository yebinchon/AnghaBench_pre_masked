
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ forkno; scalar_t__ blkno; int node; } ;
struct TYPE_4__ {TYPE_1__ key; } ;
typedef TYPE_2__ xl_invalid_page ;
typedef int RelFileNode ;
typedef int HASH_SEQ_STATUS ;
typedef scalar_t__ ForkNumber ;
typedef scalar_t__ BlockNumber ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (scalar_t__,char*,...) ;
 int * FUNC_2 (int *,void*,int ,int *) ;
 int FUNC_3 (int *,int *) ;
 scalar_t__ FUNC_4 (int *) ;
 int * VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_5 (char*) ;
 char* FUNC_6 (int ,scalar_t__) ;

__attribute__((used)) static void
FUNC_7(RelFileNode VAR_6, ForkNumber VAR_7, BlockNumber VAR_8)
{
 HASH_SEQ_STATUS VAR_9;
 xl_invalid_page *VAR_10;

 if (VAR_4 == ((void*)0))
  return;

 FUNC_3(&VAR_9, VAR_4);

 while ((VAR_10 = (xl_invalid_page *) FUNC_4(&VAR_9)) != ((void*)0))
 {
  if (FUNC_0(VAR_10->key.node, VAR_6) &&
   VAR_10->key.forkno == VAR_7 &&
   VAR_10->key.blkno >= VAR_8)
  {
   if (VAR_5 <= VAR_0 || VAR_3 <= VAR_0)
   {
    char *VAR_11 = FUNC_6(VAR_10->key.node, VAR_7);

    FUNC_1(VAR_0, "page %u of relation %s has been dropped",
      VAR_10->key.blkno, VAR_11);
    FUNC_5(VAR_11);
   }

   if (FUNC_2(VAR_4,
       (void *) &VAR_10->key,
       VAR_2, ((void*)0)) == ((void*)0))
    FUNC_1(VAR_1, "hash table corrupted");
  }
 }
}
