
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tracing_map_elt {void* var_set; void* vars; void* fields; void* key; struct tracing_map* map; } ;
struct tracing_map {int key_size; TYPE_1__* ops; int n_vars; int n_fields; } ;
struct TYPE_2__ {int (* elt_alloc ) (struct tracing_map_elt*) ;} ;


 int VAR_0 ;
 struct tracing_map_elt* FUNC_0 (int) ;
 int VAR_1 ;
 void* FUNC_1 (int ,int,int ) ;
 void* FUNC_2 (int,int ) ;
 int FUNC_3 (struct tracing_map_elt*) ;
 int FUNC_4 (struct tracing_map_elt*) ;
 int FUNC_5 (struct tracing_map_elt*) ;

__attribute__((used)) static struct tracing_map_elt *FUNC_6(struct tracing_map *VAR_2)
{
 struct tracing_map_elt *VAR_3;
 int VAR_4 = 0;

 VAR_3 = FUNC_2(sizeof(*VAR_3), VAR_1);
 if (!VAR_3)
  return FUNC_0(-VAR_0);

 VAR_3->map = VAR_2;

 VAR_3->key = FUNC_2(VAR_2->key_size, VAR_1);
 if (!VAR_3->key) {
  VAR_4 = -VAR_0;
  goto free;
 }

 VAR_3->fields = FUNC_1(VAR_2->n_fields, sizeof(*VAR_3->fields), VAR_1);
 if (!VAR_3->fields) {
  VAR_4 = -VAR_0;
  goto free;
 }

 VAR_3->vars = FUNC_1(VAR_2->n_vars, sizeof(*VAR_3->vars), VAR_1);
 if (!VAR_3->vars) {
  VAR_4 = -VAR_0;
  goto free;
 }

 VAR_3->var_set = FUNC_1(VAR_2->n_vars, sizeof(*VAR_3->var_set), VAR_1);
 if (!VAR_3->var_set) {
  VAR_4 = -VAR_0;
  goto free;
 }

 FUNC_5(VAR_3);

 if (VAR_2->ops && VAR_2->ops->elt_alloc) {
  VAR_4 = VAR_2->ops->elt_alloc(VAR_3);
  if (VAR_4)
   goto free;
 }
 return VAR_3;
 free:
 FUNC_4(VAR_3);

 return FUNC_0(VAR_4);
}
