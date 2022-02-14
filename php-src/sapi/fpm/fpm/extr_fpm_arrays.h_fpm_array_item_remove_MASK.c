
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fpm_array_s {int used; int sz; } ;


 void* FUNC_0 (struct fpm_array_s*,unsigned int) ;
 int FUNC_1 (void*,void*,int ) ;

__attribute__((used)) static inline int FUNC_2(struct fpm_array_s *VAR_0, unsigned int VAR_1)
{
 int VAR_2 = -1;

 if (VAR_1 < VAR_0->used - 1) {
  void *VAR_3 = FUNC_0(VAR_0, VAR_0->used - 1);
  void *VAR_4 = FUNC_0(VAR_0, VAR_1);

  FUNC_1(VAR_4, VAR_3, VAR_0->sz);

  VAR_2 = VAR_1;
 }

 --VAR_0->used;

 return VAR_2;
}
