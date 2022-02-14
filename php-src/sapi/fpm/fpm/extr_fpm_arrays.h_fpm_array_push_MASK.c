
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fpm_array_s {size_t used; size_t allocated; size_t sz; void* data; } ;


 void* FUNC_0 (struct fpm_array_s*,size_t) ;
 void* FUNC_1 (void*,size_t) ;

__attribute__((used)) static inline void *FUNC_2(struct fpm_array_s *VAR_0)
{
 void *VAR_1;

 if (VAR_0->used == VAR_0->allocated) {
  size_t VAR_2 = VAR_0->allocated ? VAR_0->allocated * 2 : 20;
  void *VAR_3 = FUNC_1(VAR_0->data, VAR_0->sz * VAR_2);

  if (!VAR_3) {
   return 0;
  }

  VAR_0->data = VAR_3;
  VAR_0->allocated = VAR_2;
 }

 VAR_1 = FUNC_0(VAR_0, VAR_0->used);

 ++VAR_0->used;

 return VAR_1;
}
