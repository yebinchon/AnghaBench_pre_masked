
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_8__ ;
typedef struct TYPE_22__ TYPE_7__ ;
typedef struct TYPE_21__ TYPE_6__ ;
typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


struct TYPE_20__ {int font; } ;
struct TYPE_21__ {size_t hash; int val; TYPE_5__ key; TYPE_4__* bucket_next; TYPE_3__* bucket_prev; TYPE_2__* lru_next; TYPE_1__* lru_prev; } ;
typedef TYPE_6__ fz_glyph_cache_entry ;
struct TYPE_22__ {TYPE_4__** entry; int total; TYPE_2__* lru_head; TYPE_1__* lru_tail; } ;
typedef TYPE_7__ fz_glyph_cache ;
struct TYPE_23__ {TYPE_7__* glyph_cache; } ;
typedef TYPE_8__ fz_context ;
struct TYPE_19__ {TYPE_3__* bucket_prev; } ;
struct TYPE_18__ {TYPE_4__* bucket_next; } ;
struct TYPE_17__ {TYPE_1__* lru_prev; } ;
struct TYPE_16__ {TYPE_2__* lru_next; } ;


 int FUNC_0 (TYPE_8__*,int ) ;
 int FUNC_1 (TYPE_8__*,int ) ;
 int FUNC_2 (TYPE_8__*,TYPE_6__*) ;
 scalar_t__ FUNC_3 (TYPE_8__*,int ) ;

__attribute__((used)) static void
FUNC_4(fz_context *VAR_0, fz_glyph_cache_entry *VAR_1)
{
 fz_glyph_cache *VAR_2 = VAR_0->glyph_cache;

 if (VAR_1->lru_next)
  VAR_1->lru_next->lru_prev = VAR_1->lru_prev;
 else
  VAR_2->lru_tail = VAR_1->lru_prev;
 if (VAR_1->lru_prev)
  VAR_1->lru_prev->lru_next = VAR_1->lru_next;
 else
  VAR_2->lru_head = VAR_1->lru_next;
 VAR_2->total -= FUNC_3(VAR_0, VAR_1->val);
 if (VAR_1->bucket_next)
  VAR_1->bucket_next->bucket_prev = VAR_1->bucket_prev;
 if (VAR_1->bucket_prev)
  VAR_1->bucket_prev->bucket_next = VAR_1->bucket_next;
 else
  VAR_2->entry[VAR_1->hash] = VAR_1->bucket_next;
 FUNC_0(VAR_0, VAR_1->key.font);
 FUNC_1(VAR_0, VAR_1->val);
 FUNC_2(VAR_0, VAR_1);
}
