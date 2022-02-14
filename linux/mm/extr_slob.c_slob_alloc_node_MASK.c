
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kmem_cache {int size; int flags; int (* ctor ) (void*) ;int object_size; int align; } ;
typedef int gfp_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int VAR_4 ;
 int FUNC_5 (void*,int,int,int ,int) ;
 void* FUNC_6 (int,int,int ,int,int ) ;
 void* FUNC_7 (int,int,int) ;
 int FUNC_8 (void*) ;
 int FUNC_9 (int ,void*,int ,int,int,int) ;

__attribute__((used)) static void *FUNC_10(struct kmem_cache *VAR_5, gfp_t VAR_6, int VAR_7)
{
 void *VAR_8;

 VAR_6 &= VAR_4;

 FUNC_2(VAR_6);
 FUNC_3(VAR_6);

 if (VAR_5->size < VAR_0) {
  VAR_8 = FUNC_6(VAR_5->size, VAR_6, VAR_5->align, VAR_7, 0);
  FUNC_9(VAR_2, VAR_8, VAR_5->object_size,
         FUNC_0(VAR_5->size) * VAR_1,
         VAR_6, VAR_7);
 } else {
  VAR_8 = FUNC_7(VAR_6, FUNC_4(VAR_5->size), VAR_7);
  FUNC_9(VAR_2, VAR_8, VAR_5->object_size,
         VAR_0 << FUNC_4(VAR_5->size),
         VAR_6, VAR_7);
 }

 if (VAR_8 && VAR_5->ctor) {
  FUNC_1(VAR_6 & VAR_3);
  VAR_5->ctor(VAR_8);
 }

 FUNC_5(VAR_8, VAR_5->size, 1, VAR_5->flags, VAR_6);
 return VAR_8;
}
