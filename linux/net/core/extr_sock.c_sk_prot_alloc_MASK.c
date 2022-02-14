
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int dummy; } ;
struct proto {int owner; int obj_size; struct kmem_cache* slab; } ;
struct kmem_cache {int dummy; } ;
typedef int gfp_t ;


 int VAR_0 ;
 int FUNC_0 (struct sock*) ;
 struct sock* FUNC_1 (int ,int) ;
 struct sock* FUNC_2 (struct kmem_cache*,int) ;
 int FUNC_3 (struct kmem_cache*,struct sock*) ;
 scalar_t__ FUNC_4 (struct sock*,int,int) ;
 int FUNC_5 (struct sock*) ;
 int FUNC_6 (struct sock*,int ) ;
 int FUNC_7 (struct sock*) ;
 int FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (int) ;

__attribute__((used)) static struct sock *FUNC_10(struct proto *VAR_1, gfp_t VAR_2,
  int VAR_3)
{
 struct sock *VAR_4;
 struct kmem_cache *VAR_5;

 VAR_5 = VAR_1->slab;
 if (VAR_5 != ((void*)0)) {
  VAR_4 = FUNC_2(VAR_5, VAR_2 & ~VAR_0);
  if (!VAR_4)
   return VAR_4;
  if (FUNC_9(VAR_2))
   FUNC_6(VAR_4, VAR_1->obj_size);
 } else
  VAR_4 = FUNC_1(VAR_1->obj_size, VAR_2);

 if (VAR_4 != ((void*)0)) {
  if (FUNC_4(VAR_4, VAR_3, VAR_2))
   goto out_free;

  if (!FUNC_8(VAR_1->owner))
   goto out_free_sec;
  FUNC_7(VAR_4);
 }

 return VAR_4;

out_free_sec:
 FUNC_5(VAR_4);
out_free:
 if (VAR_5 != ((void*)0))
  FUNC_3(VAR_5, VAR_4);
 else
  FUNC_0(VAR_4);
 return ((void*)0);
}
