
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int flags; int hash_extended_proc; int hash_proc; int cmp_proc; int eq_opr; int type_id; } ;
typedef TYPE_1__ TypeCacheEntry ;
typedef int Oid ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int ) ;
 TYPE_1__* FUNC_2 (int ,int) ;

__attribute__((used)) static void
FUNC_3(TypeCacheEntry *VAR_9)
{
 Oid VAR_10 = FUNC_1(VAR_9->type_id);

 if (FUNC_0(VAR_10))
 {
  TypeCacheEntry *VAR_11;

  VAR_11 = FUNC_2(VAR_10,
           VAR_6 |
           VAR_5 |
           VAR_8 |
           VAR_7);
  if (FUNC_0(VAR_11->eq_opr))
   VAR_9->flags |= VAR_2;
  if (FUNC_0(VAR_11->cmp_proc))
   VAR_9->flags |= VAR_1;
  if (FUNC_0(VAR_11->hash_proc))
   VAR_9->flags |= VAR_4;
  if (FUNC_0(VAR_11->hash_extended_proc))
   VAR_9->flags |= VAR_3;
 }
 VAR_9->flags |= VAR_0;
}
