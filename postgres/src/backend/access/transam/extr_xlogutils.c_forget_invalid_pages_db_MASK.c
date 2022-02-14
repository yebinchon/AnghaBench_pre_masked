
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ dbNode; } ;
struct TYPE_4__ {int blkno; int forkno; TYPE_3__ node; } ;
struct TYPE_5__ {TYPE_1__ key; } ;
typedef TYPE_2__ xl_invalid_page ;
typedef scalar_t__ Oid ;
typedef int HASH_SEQ_STATUS ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (scalar_t__,char*,...) ;
 int * FUNC_1 (int *,void*,int ,int *) ;
 int FUNC_2 (int *,int *) ;
 scalar_t__ FUNC_3 (int *) ;
 int * VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_4 (char*) ;
 char* FUNC_5 (TYPE_3__,int ) ;

__attribute__((used)) static void
FUNC_6(Oid VAR_6)
{
 HASH_SEQ_STATUS VAR_7;
 xl_invalid_page *VAR_8;

 if (VAR_4 == ((void*)0))
  return;

 FUNC_2(&VAR_7, VAR_4);

 while ((VAR_8 = (xl_invalid_page *) FUNC_3(&VAR_7)) != ((void*)0))
 {
  if (VAR_8->key.node.dbNode == VAR_6)
  {
   if (VAR_5 <= VAR_0 || VAR_3 <= VAR_0)
   {
    char *VAR_9 = FUNC_5(VAR_8->key.node, VAR_8->key.forkno);

    FUNC_0(VAR_0, "page %u of relation %s has been dropped",
      VAR_8->key.blkno, VAR_9);
    FUNC_4(VAR_9);
   }

   if (FUNC_1(VAR_4,
       (void *) &VAR_8->key,
       VAR_2, ((void*)0)) == ((void*)0))
    FUNC_0(VAR_1, "hash table corrupted");
  }
 }
}
