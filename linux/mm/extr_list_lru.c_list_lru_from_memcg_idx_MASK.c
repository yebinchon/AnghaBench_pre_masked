
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct list_lru_one {int dummy; } ;
struct list_lru_node {struct list_lru_one lru; } ;



__attribute__((used)) static inline struct list_lru_one *
FUNC_0(struct list_lru_node *VAR_0, int VAR_1)
{
 return &VAR_0->lru;
}
