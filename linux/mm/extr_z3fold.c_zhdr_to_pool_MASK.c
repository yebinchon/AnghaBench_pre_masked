
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct z3fold_pool {int dummy; } ;
struct z3fold_header {struct z3fold_pool* pool; } ;



__attribute__((used)) static inline struct z3fold_pool *FUNC_0(struct z3fold_header *VAR_0)
{
 return VAR_0->pool;
}
