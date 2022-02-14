
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {unsigned int size; scalar_t__ lock; int load; int keylen; TYPE_2__* ents; } ;
typedef TYPE_1__ fz_hash_table ;
struct TYPE_5__ {int * val; int key; } ;
typedef TYPE_2__ fz_hash_entry ;
typedef int fz_context ;


 int FUNC_0 (int *,scalar_t__) ;
 unsigned int FUNC_1 (int ,int ) ;

__attribute__((used)) static void
FUNC_2(fz_context *VAR_0, fz_hash_table *VAR_1, const void *VAR_2, unsigned VAR_3)
{
 fz_hash_entry *VAR_4 = VAR_1->ents;
 unsigned VAR_5 = VAR_1->size;
 unsigned VAR_6, VAR_7;

 if (VAR_1->lock >= 0)
  FUNC_0(VAR_0, VAR_1->lock);

 VAR_4[VAR_3].val = ((void*)0);

 VAR_6 = VAR_3 + 1;
 if (VAR_6 == VAR_5)
  VAR_6 = 0;

 while (VAR_4[VAR_6].val)
 {
  VAR_7 = FUNC_1(VAR_4[VAR_6].key, VAR_1->keylen) % VAR_5;
  if ((VAR_7 <= VAR_3 && VAR_3 < VAR_6) ||
   (VAR_6 < VAR_7 && VAR_7 <= VAR_3) ||
   (VAR_3 < VAR_6 && VAR_6 < VAR_7))
  {
   VAR_4[VAR_3] = VAR_4[VAR_6];
   VAR_4[VAR_6].val = ((void*)0);
   VAR_3 = VAR_6;
  }

  VAR_6++;
  if (VAR_6 == VAR_5)
   VAR_6 = 0;
 }

 VAR_1->load --;
}
