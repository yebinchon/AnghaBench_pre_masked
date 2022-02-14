
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mem_zone_bm_rtree {unsigned long start_pfn; unsigned long end_pfn; int leaves; int nodes; } ;
struct chain_allocator {int dummy; } ;
typedef int gfp_t ;


 int VAR_0 ;
 unsigned int FUNC_0 (unsigned long,int ) ;
 int FUNC_1 (int *) ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (struct mem_zone_bm_rtree*,int ,int,struct chain_allocator*) ;
 struct mem_zone_bm_rtree* FUNC_3 (struct chain_allocator*,int) ;
 int FUNC_4 (struct mem_zone_bm_rtree*,int ) ;

__attribute__((used)) static struct mem_zone_bm_rtree *FUNC_5(gfp_t VAR_2,
            int VAR_3,
            struct chain_allocator *VAR_4,
            unsigned long VAR_5,
            unsigned long VAR_6)
{
 struct mem_zone_bm_rtree *VAR_7;
 unsigned int VAR_8, VAR_9;
 unsigned long VAR_10;

 VAR_10 = VAR_6 - VAR_5;
 VAR_7 = FUNC_3(VAR_4, sizeof(struct mem_zone_bm_rtree));
 if (!VAR_7)
  return ((void*)0);

 FUNC_1(&VAR_7->nodes);
 FUNC_1(&VAR_7->leaves);
 VAR_7->start_pfn = VAR_5;
 VAR_7->end_pfn = VAR_6;
 VAR_9 = FUNC_0(VAR_10, VAR_0);

 for (VAR_8 = 0; VAR_8 < VAR_9; VAR_8++) {
  if (FUNC_2(VAR_7, VAR_2, VAR_3, VAR_4)) {
   FUNC_4(VAR_7, VAR_1);
   return ((void*)0);
  }
 }

 return VAR_7;
}
