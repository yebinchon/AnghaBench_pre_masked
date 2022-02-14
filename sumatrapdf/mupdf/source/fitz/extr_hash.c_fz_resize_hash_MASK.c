
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int size; int load; scalar_t__ lock; TYPE_2__* ents; } ;
typedef TYPE_1__ fz_hash_table ;
struct TYPE_9__ {scalar_t__ val; int key; } ;
typedef TYPE_2__ fz_hash_entry ;
typedef int fz_context ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *,TYPE_1__*,int ,scalar_t__) ;
 int FUNC_1 (int *,TYPE_2__*) ;
 int FUNC_2 (int *,scalar_t__) ;
 TYPE_2__* FUNC_3 (int *,int) ;
 int FUNC_4 (int *,int ,char*,int) ;
 int FUNC_5 (int *,scalar_t__) ;
 int FUNC_6 (int *,char*) ;
 int FUNC_7 (TYPE_2__*,int ,int) ;

__attribute__((used)) static void
FUNC_8(fz_context *VAR_2, fz_hash_table *VAR_3, int VAR_4)
{
 fz_hash_entry *VAR_5 = VAR_3->ents;
 fz_hash_entry *VAR_6;
 int VAR_7 = VAR_3->size;
 int VAR_8 = VAR_3->load;
 int VAR_9;

 if (VAR_4 < VAR_8 * 8 / 10)
 {
  FUNC_6(VAR_2, "assert: resize hash too small");
  return;
 }

 if (VAR_3->lock == VAR_1)
  FUNC_5(VAR_2, VAR_3->lock);
 VAR_6 = FUNC_3(VAR_2, VAR_4 * sizeof (fz_hash_entry));
 if (VAR_3->lock == VAR_1)
  FUNC_2(VAR_2, VAR_3->lock);
 if (VAR_3->lock >= 0)
 {
  if (VAR_3->size >= VAR_4)
  {

   if (VAR_3->lock == VAR_1)
    FUNC_5(VAR_2, VAR_3->lock);
   FUNC_1(VAR_2, VAR_6);
   if (VAR_3->lock == VAR_1)
    FUNC_2(VAR_2, VAR_3->lock);
   return;
  }
 }
 if (VAR_6 == ((void*)0))
  FUNC_4(VAR_2, VAR_0, "hash table resize failed; out of memory (%d entries)", VAR_4);
 VAR_3->ents = VAR_6;
 FUNC_7(VAR_3->ents, 0, sizeof(fz_hash_entry) * VAR_4);
 VAR_3->size = VAR_4;
 VAR_3->load = 0;

 for (VAR_9 = 0; VAR_9 < VAR_7; VAR_9++)
 {
  if (VAR_5[VAR_9].val)
  {
   FUNC_0(VAR_2, VAR_3, VAR_5[VAR_9].key, VAR_5[VAR_9].val);
  }
 }

 if (VAR_3->lock == VAR_1)
  FUNC_5(VAR_2, VAR_3->lock);
 FUNC_1(VAR_2, VAR_5);
 if (VAR_3->lock == VAR_1)
  FUNC_2(VAR_2, VAR_3->lock);
}
