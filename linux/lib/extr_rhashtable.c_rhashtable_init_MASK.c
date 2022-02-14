
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct rhashtable_params {int hashfn; scalar_t__ max_size; scalar_t__ min_size; int obj_cmpfn; scalar_t__ obj_hashfn; int key_len; } ;
struct TYPE_3__ {int max_size; int key_len; void* min_size; int hashfn; } ;
struct rhashtable {unsigned int max_elems; int key_len; int run_work; int tbl; int nelems; TYPE_1__ p; int lock; int mutex; } ;
struct bucket_table {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int ,struct bucket_table*) ;
 int VAR_3 ;
 int FUNC_2 (int *,int ) ;
 struct bucket_table* FUNC_3 (struct rhashtable*,size_t,int) ;
 int VAR_4 ;
 void* FUNC_4 (int ,void*,int ) ;
 int FUNC_5 (TYPE_1__*,struct rhashtable_params const*,int) ;
 int FUNC_6 (struct rhashtable*,int ,int) ;
 int FUNC_7 (int *) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_8 (scalar_t__) ;
 size_t FUNC_9 (TYPE_1__*) ;
 void* FUNC_10 (scalar_t__) ;
 int FUNC_11 (int *) ;
 int VAR_7 ;
 scalar_t__ FUNC_12 (int ) ;

int FUNC_13(struct rhashtable *VAR_8,
      const struct rhashtable_params *VAR_9)
{
 struct bucket_table *VAR_10;
 size_t VAR_11;

 if ((!VAR_9->key_len && !VAR_9->obj_hashfn) ||
     (VAR_9->obj_hashfn && !VAR_9->obj_cmpfn))
  return -VAR_0;

 FUNC_6(VAR_8, 0, sizeof(*VAR_8));
 FUNC_7(&VAR_8->mutex);
 FUNC_11(&VAR_8->lock);
 FUNC_5(&VAR_8->p, VAR_9, sizeof(*VAR_9));

 if (VAR_9->min_size)
  VAR_8->p.min_size = FUNC_10(VAR_9->min_size);


 VAR_8->max_elems = 1u << 31;

 if (VAR_9->max_size) {
  VAR_8->p.max_size = FUNC_8(VAR_9->max_size);
  if (VAR_8->p.max_size < VAR_8->max_elems / 2)
   VAR_8->max_elems = VAR_8->p.max_size * 2;
 }

 VAR_8->p.min_size = FUNC_4(VAR_7, VAR_8->p.min_size, VAR_2);

 VAR_11 = FUNC_9(&VAR_8->p);

 VAR_8->key_len = VAR_8->p.key_len;
 if (!VAR_9->hashfn) {
  VAR_8->p.hashfn = VAR_4;

  if (!(VAR_8->key_len & (sizeof(u32) - 1))) {
   VAR_8->key_len /= sizeof(u32);
   VAR_8->p.hashfn = VAR_5;
  }
 }






 VAR_10 = FUNC_3(VAR_8, VAR_11, VAR_1);
 if (FUNC_12(VAR_10 == ((void*)0))) {
  VAR_11 = FUNC_4(VAR_7, VAR_8->p.min_size, VAR_2);
  VAR_10 = FUNC_3(VAR_8, VAR_11, VAR_1 | VAR_3);
 }

 FUNC_2(&VAR_8->nelems, 0);

 FUNC_1(VAR_8->tbl, VAR_10);

 FUNC_0(&VAR_8->run_work, VAR_6);

 return 0;
}
