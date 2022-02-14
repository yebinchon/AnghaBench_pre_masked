
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kmem_cache {int size; unsigned int num; int gfporder; } ;
typedef int slab_flags_t ;
typedef int freelist_idx_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct kmem_cache*) ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 unsigned int FUNC_1 (int,size_t,int,size_t*) ;
 struct kmem_cache* FUNC_2 (size_t,unsigned int) ;
 int VAR_5 ;

__attribute__((used)) static size_t FUNC_3(struct kmem_cache *VAR_6,
    size_t VAR_7, slab_flags_t VAR_8)
{
 size_t VAR_9 = 0;
 int VAR_10;

 for (VAR_10 = 0; VAR_10 <= VAR_1; VAR_10++) {
  unsigned int VAR_11;
  size_t VAR_12;

  VAR_11 = FUNC_1(VAR_10, VAR_7, VAR_8, &VAR_12);
  if (!VAR_11)
   continue;


  if (VAR_11 > VAR_3)
   break;

  if (VAR_8 & VAR_0) {
   struct kmem_cache *VAR_13;
   size_t VAR_14;

   VAR_14 = VAR_11 * sizeof(freelist_idx_t);
   VAR_13 = FUNC_2(VAR_14, 0u);
   if (!VAR_13)
    continue;





   if (FUNC_0(VAR_13))
    continue;


   if (VAR_13->size > VAR_6->size / 2)
    continue;
  }


  VAR_6->num = VAR_11;
  VAR_6->gfporder = VAR_10;
  VAR_9 = VAR_12;






  if (VAR_8 & VAR_4)
   break;





  if (VAR_10 >= VAR_5)
   break;




  if (VAR_9 * 8 <= (VAR_2 << VAR_10))
   break;
 }
 return VAR_9;
}
