
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u32 ;
struct crush_map {size_t max_buckets; int choose_args; TYPE_1__** buckets; } ;
struct crush_choose_arg_map {size_t size; struct crush_choose_arg* args; int choose_args_index; } ;
struct crush_choose_arg {scalar_t__ ids_size; } ;
struct TYPE_2__ {scalar_t__ size; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct crush_choose_arg_map* FUNC_0 () ;
 int FUNC_1 (void**,void*,size_t,int ) ;
 int FUNC_2 (void**,void*,int ,int ) ;
 int FUNC_3 (void**,void*,struct crush_choose_arg*) ;
 int VAR_3 ;
 int FUNC_4 (struct crush_choose_arg_map*) ;
 int FUNC_5 (int *,struct crush_choose_arg_map*) ;
 struct crush_choose_arg* FUNC_6 (size_t,int,int ) ;

__attribute__((used)) static int FUNC_7(void **VAR_4, void *VAR_5, struct crush_map *VAR_6)
{
 struct crush_choose_arg_map *VAR_7 = ((void*)0);
 u32 VAR_8, VAR_9;
 int VAR_10;

 FUNC_1(VAR_4, VAR_5, VAR_8, VAR_3);
 while (VAR_8--) {
  VAR_7 = FUNC_0();
  if (!VAR_7) {
   VAR_10 = -VAR_1;
   goto fail;
  }

  FUNC_2(VAR_4, VAR_5, VAR_7->choose_args_index,
        VAR_3);
  VAR_7->size = VAR_6->max_buckets;
  VAR_7->args = FUNC_6(VAR_7->size, sizeof(*VAR_7->args),
     VAR_2);
  if (!VAR_7->args) {
   VAR_10 = -VAR_1;
   goto fail;
  }

  FUNC_1(VAR_4, VAR_5, VAR_9, VAR_3);
  while (VAR_9--) {
   struct crush_choose_arg *VAR_11;
   u32 VAR_12;

   FUNC_1(VAR_4, VAR_5, VAR_12, VAR_3);
   if (VAR_12 >= VAR_7->size)
    goto e_inval;

   VAR_11 = &VAR_7->args[VAR_12];
   VAR_10 = FUNC_3(VAR_4, VAR_5, VAR_11);
   if (VAR_10)
    goto fail;

   if (VAR_11->ids_size &&
       VAR_11->ids_size != VAR_6->buckets[VAR_12]->size)
    goto e_inval;
  }

  FUNC_5(&VAR_6->choose_args, VAR_7);
 }

 return 0;

e_inval:
 VAR_10 = -VAR_0;
fail:
 FUNC_4(VAR_7);
 return VAR_10;
}
