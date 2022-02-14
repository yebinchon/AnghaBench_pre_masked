
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ typtype; int flags; int hash_extended_proc; int hash_proc; TYPE_1__* rngelemtype; } ;
typedef TYPE_2__ TypeCacheEntry ;
struct TYPE_6__ {int type_id; } ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (TYPE_2__*) ;
 TYPE_2__* FUNC_2 (int ,int) ;

__attribute__((used)) static void
FUNC_3(TypeCacheEntry *VAR_6)
{

 if (VAR_6->rngelemtype == ((void*)0) &&
  VAR_6->typtype == VAR_5)
  FUNC_1(VAR_6);

 if (VAR_6->rngelemtype != ((void*)0))
 {
  TypeCacheEntry *VAR_7;


  VAR_7 = FUNC_2(VAR_6->rngelemtype->type_id,
           VAR_4 |
           VAR_3);
  if (FUNC_0(VAR_7->hash_proc))
   VAR_6->flags |= VAR_2;
  if (FUNC_0(VAR_7->hash_extended_proc))
   VAR_6->flags |= VAR_1;
 }
 VAR_6->flags |= VAR_0;
}
