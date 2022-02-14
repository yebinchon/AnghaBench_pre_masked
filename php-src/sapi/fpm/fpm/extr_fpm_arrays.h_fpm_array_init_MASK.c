
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fpm_array_s {unsigned int sz; unsigned int allocated; scalar_t__ used; int data; } ;


 int FUNC_0 (unsigned int,unsigned int) ;
 int FUNC_1 (void*) ;
 struct fpm_array_s* FUNC_2 (int) ;

__attribute__((used)) static inline struct fpm_array_s *FUNC_3(struct fpm_array_s *VAR_0, unsigned int VAR_1, unsigned int VAR_2)
{
 void *VAR_3 = 0;

 if (!VAR_0) {
  VAR_0 = FUNC_2(sizeof(struct fpm_array_s));

  if (!VAR_0) {
   return 0;
  }

  VAR_3 = VAR_0;
 }

 VAR_0->sz = VAR_1;

 VAR_0->data = FUNC_0(VAR_1, VAR_2);

 if (!VAR_0->data) {
  FUNC_1(VAR_3);
  return 0;
 }

 VAR_0->allocated = VAR_2;
 VAR_0->used = 0;

 return VAR_0;
}
