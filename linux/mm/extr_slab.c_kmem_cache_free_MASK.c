
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kmem_cache {int flags; int object_size; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct kmem_cache*,void*,int ) ;
 struct kmem_cache* FUNC_1 (struct kmem_cache*,void*) ;
 int FUNC_2 (void*,int ) ;
 int FUNC_3 (void*,int ) ;
 int FUNC_4 (unsigned long) ;
 int FUNC_5 (unsigned long) ;
 int FUNC_6 (int ,void*) ;

void FUNC_7(struct kmem_cache *VAR_2, void *VAR_3)
{
 unsigned long VAR_4;
 VAR_2 = FUNC_1(VAR_2, VAR_3);
 if (!VAR_2)
  return;

 FUNC_5(VAR_4);
 FUNC_2(VAR_3, VAR_2->object_size);
 if (!(VAR_2->flags & VAR_0))
  FUNC_3(VAR_3, VAR_2->object_size);
 FUNC_0(VAR_2, VAR_3, VAR_1);
 FUNC_4(VAR_4);

 FUNC_6(VAR_1, VAR_3);
}
