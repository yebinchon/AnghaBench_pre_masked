
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pfect_lru_node {int dummy; } ;
struct pfect_lru {int map_fd; int free_nodes; unsigned int lru_size; scalar_t__ total; scalar_t__ nr_misses; scalar_t__ nr_unique; scalar_t__ cur_size; int list; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,int,int,unsigned int,int ) ;
 int FUNC_3 (unsigned int) ;

__attribute__((used)) static void FUNC_4(struct pfect_lru *VAR_1, unsigned int VAR_2,
      unsigned int VAR_3)
{
 VAR_1->map_fd = FUNC_2(VAR_0,
         sizeof(unsigned long long),
         sizeof(struct pfect_lru_node *),
         VAR_3, 0);
 FUNC_1(VAR_1->map_fd != -1);

 VAR_1->free_nodes = FUNC_3(VAR_2 * sizeof(struct pfect_lru_node));
 FUNC_1(VAR_1->free_nodes);

 FUNC_0(&VAR_1->list);
 VAR_1->cur_size = 0;
 VAR_1->lru_size = VAR_2;
 VAR_1->nr_unique = VAR_1->nr_misses = VAR_1->total = 0;
}
