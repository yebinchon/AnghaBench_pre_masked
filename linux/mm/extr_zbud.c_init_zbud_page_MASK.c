
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zbud_header {scalar_t__ under_reclaim; int lru; int buddy; scalar_t__ last_chunks; scalar_t__ first_chunks; } ;
struct page {int dummy; } ;


 int FUNC_0 (int *) ;
 struct zbud_header* FUNC_1 (struct page*) ;

__attribute__((used)) static struct zbud_header *FUNC_2(struct page *VAR_0)
{
 struct zbud_header *VAR_1 = FUNC_1(VAR_0);
 VAR_1->first_chunks = 0;
 VAR_1->last_chunks = 0;
 FUNC_0(&VAR_1->buddy);
 FUNC_0(&VAR_1->lru);
 VAR_1->under_reclaim = 0;
 return VAR_1;
}
