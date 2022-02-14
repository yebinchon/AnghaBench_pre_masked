
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ typtype; scalar_t__ typrelid; int flags; scalar_t__ tupDesc_identifier; TYPE_2__* tupDesc; } ;
typedef TYPE_1__ TypeCacheEntry ;
struct TYPE_4__ {scalar_t__ tdrefcount; } ;
typedef scalar_t__ Oid ;
typedef int HASH_SEQ_STATUS ;
typedef int Datum ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_2__*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int *,int ) ;
 scalar_t__ FUNC_3 (int *) ;

__attribute__((used)) static void
FUNC_4(Datum VAR_5, Oid VAR_6)
{
 HASH_SEQ_STATUS VAR_7;
 TypeCacheEntry *VAR_8;


 FUNC_2(&VAR_7, VAR_4);
 while ((VAR_8 = (TypeCacheEntry *) FUNC_3(&VAR_7)) != ((void*)0))
 {
  if (VAR_8->typtype == VAR_2)
  {

   if (VAR_6 != VAR_8->typrelid && VAR_6 != VAR_0)
    continue;


   if (VAR_8->tupDesc != ((void*)0))
   {





    FUNC_0(VAR_8->tupDesc->tdrefcount > 0);
    if (--VAR_8->tupDesc->tdrefcount == 0)
     FUNC_1(VAR_8->tupDesc);
    VAR_8->tupDesc = ((void*)0);
    VAR_8->tupDesc_identifier = 0;
   }


   VAR_8->flags = 0;
  }
  else if (VAR_8->typtype == VAR_3)
  {






   if (VAR_8->flags & VAR_1)
    VAR_8->flags = 0;
  }
 }
}
