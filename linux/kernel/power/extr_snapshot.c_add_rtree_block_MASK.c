
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtree_node {unsigned long* data; } ;
struct mem_zone_bm_rtree {unsigned int blocks; int levels; int nodes; struct rtree_node* rtree; int leaves; } ;
struct chain_allocator {int dummy; } ;
typedef int gfp_t ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 struct rtree_node* FUNC_0 (int ,int,struct chain_allocator*,int *) ;

__attribute__((used)) static int FUNC_1(struct mem_zone_bm_rtree *VAR_3, gfp_t VAR_4,
      int VAR_5, struct chain_allocator *VAR_6)
{
 struct rtree_node *VAR_7, *VAR_8, **VAR_9;
 unsigned int VAR_10, VAR_11;
 int VAR_12;

 VAR_11 = VAR_3->blocks;
 VAR_10 = 0;


 while (VAR_11) {
  VAR_10 += 1;
  VAR_11 >>= VAR_1;
 }


 for (VAR_12 = VAR_3->levels; VAR_12 < VAR_10; VAR_12++) {
  VAR_7 = FUNC_0(VAR_4, VAR_5, VAR_6,
     &VAR_3->nodes);
  if (!VAR_7)
   return -VAR_2;

  VAR_7->data[0] = (unsigned long)VAR_3->rtree;
  VAR_3->rtree = VAR_7;
  VAR_3->levels += 1;
 }


 VAR_8 = FUNC_0(VAR_4, VAR_5, VAR_6, &VAR_3->leaves);
 if (!VAR_8)
  return -VAR_2;


 VAR_7 = VAR_3->rtree;
 VAR_9 = &VAR_3->rtree;
 VAR_11 = VAR_3->blocks;
 for (VAR_12 = VAR_3->levels; VAR_12 > 0; VAR_12--) {
  int VAR_13;

  if (!VAR_7) {
   VAR_7 = FUNC_0(VAR_4, VAR_5, VAR_6,
      &VAR_3->nodes);
   if (!VAR_7)
    return -VAR_2;
   *VAR_9 = VAR_7;
  }

  VAR_13 = VAR_11 >> ((VAR_12 - 1) * VAR_1);
  VAR_13 &= VAR_0;
  VAR_9 = (struct rtree_node **)&((*VAR_9)->data[VAR_13]);
  VAR_7 = *VAR_9;
 }

 VAR_3->blocks += 1;
 *VAR_9 = VAR_8;

 return 0;
}
