
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct kmem_cache {int flags; int ctor; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (void const*) ;
 int FUNC_1 (struct kmem_cache*,int ,void*) ;
 int FUNC_2 () ;
 int FUNC_3 (void const*) ;

__attribute__((used)) static u8 FUNC_4(struct kmem_cache *VAR_2, const void *VAR_3,
   bool VAR_4, bool VAR_5)
{






 if (VAR_5)
  return FUNC_0(VAR_3);





 if (!VAR_2->ctor && !(VAR_2->flags & VAR_1))
  return VAR_4 ? VAR_0 : FUNC_2();
 return VAR_4 ? FUNC_2() : FUNC_0(VAR_3);

}
