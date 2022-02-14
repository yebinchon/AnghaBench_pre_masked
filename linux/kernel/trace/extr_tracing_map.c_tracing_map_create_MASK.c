
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tracing_map_ops {int dummy; } ;
struct tracing_map_entry {int dummy; } ;
struct tracing_map {unsigned int map_bits; int max_elts; int map_size; unsigned int key_size; int* key_idx; int map; void* private_data; struct tracing_map_ops const* ops; int next_elt; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct tracing_map* FUNC_0 (int ) ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 int FUNC_1 (int *,int) ;
 struct tracing_map* FUNC_2 (int,int ) ;
 int FUNC_3 (int,int) ;
 int FUNC_4 (struct tracing_map*) ;

struct tracing_map *FUNC_5(unsigned int VAR_6,
           unsigned int VAR_7,
           const struct tracing_map_ops *VAR_8,
           void *VAR_9)
{
 struct tracing_map *VAR_10;
 unsigned int VAR_11;

 if (VAR_6 < VAR_4 ||
     VAR_6 > VAR_3)
  return FUNC_0(-VAR_0);

 VAR_10 = FUNC_2(sizeof(*VAR_10), VAR_2);
 if (!VAR_10)
  return FUNC_0(-VAR_1);

 VAR_10->map_bits = VAR_6;
 VAR_10->max_elts = (1 << VAR_6);
 FUNC_1(&VAR_10->next_elt, -1);

 VAR_10->map_size = (1 << (VAR_6 + 1));
 VAR_10->ops = VAR_8;

 VAR_10->private_data = VAR_9;

 VAR_10->map = FUNC_3(VAR_10->map_size,
        sizeof(struct tracing_map_entry));
 if (!VAR_10->map)
  goto free;

 VAR_10->key_size = VAR_7;
 for (VAR_11 = 0; VAR_11 < VAR_5; VAR_11++)
  VAR_10->key_idx[VAR_11] = -1;
 out:
 return VAR_10;
 free:
 FUNC_4(VAR_10);
 VAR_10 = FUNC_0(-VAR_1);

 goto out;
}
