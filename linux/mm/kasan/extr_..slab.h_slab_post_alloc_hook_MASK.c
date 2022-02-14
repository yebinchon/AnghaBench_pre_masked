
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kmem_cache {int flags; int object_size; } ;
typedef int gfp_t ;


 int VAR_0 ;
 void* FUNC_0 (struct kmem_cache*,void*,int ) ;
 int FUNC_1 (void*,int ,int,int ,int ) ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (struct kmem_cache*) ;

__attribute__((used)) static inline void FUNC_4(struct kmem_cache *VAR_1, gfp_t VAR_2,
     size_t VAR_3, void **VAR_4)
{
 size_t VAR_5;

 VAR_2 &= VAR_0;
 for (VAR_5 = 0; VAR_5 < VAR_3; VAR_5++) {
  VAR_4[VAR_5] = FUNC_0(VAR_1, VAR_4[VAR_5], VAR_2);

  FUNC_1(VAR_4[VAR_5], VAR_1->object_size, 1,
      VAR_1->flags, VAR_2);
 }

 if (FUNC_2())
  FUNC_3(VAR_1);
}
