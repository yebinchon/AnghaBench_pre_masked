
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct callchain_node {int count; int children_count; } ;



__attribute__((used)) static inline unsigned FUNC_0(struct callchain_node *VAR_0)
{
 return VAR_0->count + VAR_0->children_count;
}
