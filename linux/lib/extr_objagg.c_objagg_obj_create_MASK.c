
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct objagg_obj {int list; int ht_node; int obj; } ;
struct objagg {int obj_count; int obj_list; int ht_params; int obj_ht; TYPE_1__* ops; } ;
struct TYPE_2__ {scalar_t__ obj_size; } ;


 int VAR_0 ;
 struct objagg_obj* FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (struct objagg_obj*) ;
 struct objagg_obj* FUNC_2 (scalar_t__,int ) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int ,void*,scalar_t__) ;
 int FUNC_5 (struct objagg*,struct objagg_obj*) ;
 int FUNC_6 (struct objagg*,struct objagg_obj*) ;
 int FUNC_7 (struct objagg_obj*) ;
 int FUNC_8 (int *,int *,int ) ;
 int FUNC_9 (struct objagg*,struct objagg_obj*) ;

__attribute__((used)) static struct objagg_obj *FUNC_10(struct objagg *VAR_2, void *VAR_3)
{
 struct objagg_obj *VAR_4;
 int VAR_5;

 VAR_4 = FUNC_2(sizeof(*VAR_4) + VAR_2->ops->obj_size,
        VAR_1);
 if (!VAR_4)
  return FUNC_0(-VAR_0);
 FUNC_7(VAR_4);
 FUNC_4(VAR_4->obj, VAR_3, VAR_2->ops->obj_size);

 VAR_5 = FUNC_6(VAR_2, VAR_4);
 if (VAR_5)
  goto err_obj_init;

 VAR_5 = FUNC_8(&VAR_2->obj_ht, &VAR_4->ht_node,
         VAR_2->ht_params);
 if (VAR_5)
  goto err_ht_insert;
 FUNC_3(&VAR_4->list, &VAR_2->obj_list);
 VAR_2->obj_count++;
 FUNC_9(VAR_2, VAR_4);

 return VAR_4;

err_ht_insert:
 FUNC_5(VAR_2, VAR_4);
err_obj_init:
 FUNC_1(VAR_4);
 return FUNC_0(VAR_5);
}
