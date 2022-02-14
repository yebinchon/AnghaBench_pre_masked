
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stable_node {int dummy; } ;
struct page {void* mapping; } ;


 unsigned long VAR_0 ;

__attribute__((used)) static inline void FUNC_0(struct page *VAR_1,
     struct stable_node *VAR_2)
{
 VAR_1->mapping = (void *)((unsigned long)VAR_2 | VAR_0);
}
