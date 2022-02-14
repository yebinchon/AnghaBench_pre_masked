
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mem_cgroup {int dummy; } ;
struct kmem_cache {char const* name; unsigned int size; unsigned int object_size; unsigned int align; void (* ctor ) (void*) ;unsigned int useroffset; unsigned int usersize; int refcount; int list; } ;
typedef int slab_flags_t ;


 int VAR_0 ;
 struct kmem_cache* FUNC_0 (int) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (struct kmem_cache*,int ) ;
 int FUNC_3 (struct kmem_cache*) ;
 int FUNC_4 (struct kmem_cache*,struct kmem_cache*) ;
 int VAR_2 ;
 int FUNC_5 (int ,struct kmem_cache*) ;
 struct kmem_cache* FUNC_6 (int ,int ) ;
 int FUNC_7 (int *,int *) ;
 int FUNC_8 (struct kmem_cache*,struct mem_cgroup*) ;
 int VAR_3 ;

__attribute__((used)) static struct kmem_cache *FUNC_9(const char *VAR_4,
  unsigned int VAR_5, unsigned int VAR_6,
  slab_flags_t VAR_7, unsigned int VAR_8,
  unsigned int VAR_9, void (*VAR_10)(void *),
  struct mem_cgroup *VAR_11, struct kmem_cache *VAR_12)
{
 struct kmem_cache *VAR_13;
 int VAR_14;

 if (FUNC_1(VAR_8 + VAR_9 > VAR_5))
  VAR_8 = VAR_9 = 0;

 VAR_14 = -VAR_0;
 VAR_13 = FUNC_6(VAR_2, VAR_1);
 if (!VAR_13)
  goto out;

 VAR_13->name = VAR_4;
 VAR_13->size = VAR_13->object_size = VAR_5;
 VAR_13->align = VAR_6;
 VAR_13->ctor = VAR_10;
 VAR_13->useroffset = VAR_8;
 VAR_13->usersize = VAR_9;

 VAR_14 = FUNC_4(VAR_13, VAR_12);
 if (VAR_14)
  goto out_free_cache;

 VAR_14 = FUNC_2(VAR_13, VAR_7);
 if (VAR_14)
  goto out_free_cache;

 VAR_13->refcount = 1;
 FUNC_7(&VAR_13->list, &VAR_3);
 FUNC_8(VAR_13, VAR_11);
out:
 if (VAR_14)
  return FUNC_0(VAR_14);
 return VAR_13;

out_free_cache:
 FUNC_3(VAR_13);
 FUNC_5(VAR_2, VAR_13);
 goto out;
}
