
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct parman_ops {size_t algo; int base_count; } ;
struct parman {int algo; int limit_count; void* priv; struct parman_ops const* ops; int prio_list; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 struct parman* FUNC_1 (int,int ) ;
 int * VAR_1 ;

struct parman *FUNC_2(const struct parman_ops *VAR_2, void *VAR_3)
{
 struct parman *VAR_4;

 VAR_4 = FUNC_1(sizeof(*VAR_4), VAR_0);
 if (!VAR_4)
  return ((void*)0);
 FUNC_0(&VAR_4->prio_list);
 VAR_4->ops = VAR_2;
 VAR_4->priv = VAR_3;
 VAR_4->limit_count = VAR_2->base_count;
 VAR_4->algo = VAR_1[VAR_2->algo];
 return VAR_4;
}
