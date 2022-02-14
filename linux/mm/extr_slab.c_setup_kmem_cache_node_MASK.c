
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kmem_cache_node {int list_lock; struct alien_cache** alien; struct array_cache* shared; } ;
struct kmem_cache {int shared; int batchcount; int limit; } ;
struct array_cache {scalar_t__ avail; int entry; } ;
struct alien_cache {int dummy; } ;
typedef int gfp_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 struct alien_cache** FUNC_1 (int,int ,int ) ;
 struct array_cache* FUNC_2 (int,int,int,int ) ;
 int FUNC_3 (struct alien_cache**) ;
 int FUNC_4 (struct kmem_cache*,int ,scalar_t__,int,int *) ;
 struct kmem_cache_node* FUNC_5 (struct kmem_cache*,int) ;
 int FUNC_6 (struct kmem_cache*,int,int ) ;
 int FUNC_7 (struct array_cache*) ;
 int VAR_1 ;
 int FUNC_8 (struct kmem_cache*,int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 () ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static int FUNC_12(struct kmem_cache *VAR_3,
    int VAR_4, gfp_t VAR_5, bool VAR_6)
{
 int VAR_7 = -VAR_0;
 struct kmem_cache_node *VAR_8;
 struct array_cache *VAR_9 = ((void*)0);
 struct array_cache *VAR_10 = ((void*)0);
 struct alien_cache **VAR_11 = ((void*)0);
 FUNC_0(VAR_1);

 if (VAR_2) {
  VAR_11 = FUNC_1(VAR_4, VAR_3->limit, VAR_5);
  if (!VAR_11)
   goto fail;
 }

 if (VAR_3->shared) {
  VAR_10 = FUNC_2(VAR_4,
   VAR_3->shared * VAR_3->batchcount, 0xbaadf00d, VAR_5);
  if (!VAR_10)
   goto fail;
 }

 VAR_7 = FUNC_6(VAR_3, VAR_4, VAR_5);
 if (VAR_7)
  goto fail;

 VAR_8 = FUNC_5(VAR_3, VAR_4);
 FUNC_9(&VAR_8->list_lock);
 if (VAR_8->shared && VAR_6) {
  FUNC_4(VAR_3, VAR_8->shared->entry,
    VAR_8->shared->avail, VAR_4, &VAR_1);
  VAR_8->shared->avail = 0;
 }

 if (!VAR_8->shared || VAR_6) {
  VAR_9 = VAR_8->shared;
  VAR_8->shared = VAR_10;
  VAR_10 = ((void*)0);
 }

 if (!VAR_8->alien) {
  VAR_8->alien = VAR_11;
  VAR_11 = ((void*)0);
 }

 FUNC_10(&VAR_8->list_lock);
 FUNC_8(VAR_3, &VAR_1);







 if (VAR_9 && VAR_6)
  FUNC_11();

fail:
 FUNC_7(VAR_9);
 FUNC_7(VAR_10);
 FUNC_3(VAR_11);

 return VAR_7;
}
