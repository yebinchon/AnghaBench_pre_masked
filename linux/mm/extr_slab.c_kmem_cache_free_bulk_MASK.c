
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
 int FUNC_4 () ;
 int FUNC_5 () ;
 struct kmem_cache* FUNC_6 (void*) ;

void FUNC_7(struct kmem_cache *VAR_2, size_t VAR_3, void **VAR_4)
{
 struct kmem_cache *VAR_5;
 size_t VAR_6;

 FUNC_4();
 for (VAR_6 = 0; VAR_6 < VAR_3; VAR_6++) {
  void *VAR_7 = VAR_4[VAR_6];

  if (!VAR_2)
   VAR_5 = FUNC_6(VAR_7);
  else
   VAR_5 = FUNC_1(VAR_2, VAR_7);
  if (!VAR_5)
   continue;

  FUNC_2(VAR_7, VAR_5->object_size);
  if (!(VAR_5->flags & VAR_0))
   FUNC_3(VAR_7, VAR_5->object_size);

  FUNC_0(VAR_5, VAR_7, VAR_1);
 }
 FUNC_5();


}
