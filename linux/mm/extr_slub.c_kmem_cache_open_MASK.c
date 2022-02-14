
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kmem_cache {int flags; int remote_node_defrag_ratio; int size; scalar_t__ offset; int object_size; int random; int ctor; int name; } ;
typedef int slab_flags_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (struct kmem_cache*) ;
 int FUNC_1 (struct kmem_cache*,int) ;
 scalar_t__ VAR_5 ;
 int FUNC_2 (struct kmem_cache*) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 () ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (struct kmem_cache*) ;
 int FUNC_7 (struct kmem_cache*) ;
 int FUNC_8 (int ,int ,int ,int ) ;
 int FUNC_9 (struct kmem_cache*) ;
 int FUNC_10 (struct kmem_cache*,int) ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_11 () ;

__attribute__((used)) static int FUNC_12(struct kmem_cache *VAR_7, slab_flags_t VAR_8)
{
 VAR_7->flags = FUNC_8(VAR_7->size, VAR_8, VAR_7->name, VAR_7->ctor);




 if (!FUNC_1(VAR_7, -1))
  goto error;
 if (VAR_5) {




  if (FUNC_3(VAR_7->size) > FUNC_3(VAR_7->object_size)) {
   VAR_7->flags &= ~VAR_0;
   VAR_7->offset = 0;
   if (!FUNC_1(VAR_7, -1))
    goto error;
  }
 }
 FUNC_10(VAR_7, FUNC_5(VAR_7->size) / 2);

 FUNC_9(VAR_7);






 if (VAR_6 >= VAR_3) {
  if (FUNC_6(VAR_7))
   goto error;
 }

 if (!FUNC_7(VAR_7))
  goto error;

 if (FUNC_0(VAR_7))
  return 0;

 FUNC_2(VAR_7);
error:
 return -VAR_1;
}
