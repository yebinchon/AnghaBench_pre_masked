
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zbud_pool {int lock; int * unbuddied; int pages_nr; } ;
struct zbud_header {scalar_t__ last_chunks; scalar_t__ first_chunks; int buddy; int lru; scalar_t__ under_reclaim; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 int FUNC_0 (struct zbud_header*) ;
 struct zbud_header* FUNC_1 (unsigned long) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct zbud_header*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

void FUNC_7(struct zbud_pool *VAR_2, unsigned long VAR_3)
{
 struct zbud_header *VAR_4;
 int VAR_5;

 FUNC_5(&VAR_2->lock);
 VAR_4 = FUNC_1(VAR_3);


 if ((VAR_3 - VAR_1) & ~VAR_0)
  VAR_4->last_chunks = 0;
 else
  VAR_4->first_chunks = 0;

 if (VAR_4->under_reclaim) {

  FUNC_6(&VAR_2->lock);
  return;
 }


 FUNC_3(&VAR_4->buddy);

 if (VAR_4->first_chunks == 0 && VAR_4->last_chunks == 0) {

  FUNC_3(&VAR_4->lru);
  FUNC_0(VAR_4);
  VAR_2->pages_nr--;
 } else {

  VAR_5 = FUNC_4(VAR_4);
  FUNC_2(&VAR_4->buddy, &VAR_2->unbuddied[VAR_5]);
 }

 FUNC_6(&VAR_2->lock);
}
