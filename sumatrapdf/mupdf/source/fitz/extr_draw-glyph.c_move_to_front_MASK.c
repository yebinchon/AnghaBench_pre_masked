
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {struct TYPE_5__* lru_prev; struct TYPE_5__* lru_next; } ;
typedef TYPE_1__ fz_glyph_cache_entry ;
struct TYPE_6__ {TYPE_1__* lru_head; TYPE_1__* lru_tail; } ;
typedef TYPE_2__ fz_glyph_cache ;



__attribute__((used)) static inline void
FUNC_0(fz_glyph_cache *VAR_0, fz_glyph_cache_entry *VAR_1)
{
 if (VAR_1->lru_prev == ((void*)0))
  return;


 VAR_1->lru_prev->lru_next = VAR_1->lru_next;
 if (VAR_1->lru_next)
  VAR_1->lru_next->lru_prev = VAR_1->lru_prev;
 else
  VAR_0->lru_tail = VAR_1->lru_prev;

 VAR_1->lru_next = VAR_0->lru_head;
 if (VAR_1->lru_next)
  VAR_1->lru_next->lru_prev = VAR_1;
 VAR_0->lru_head = VAR_1;
 VAR_1->lru_prev = ((void*)0);
}
