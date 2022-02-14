
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fpm_array_s {scalar_t__ used; } ;


 void* FUNC_0 (struct fpm_array_s*,scalar_t__) ;

__attribute__((used)) static inline void *FUNC_1(struct fpm_array_s *VAR_0)
{
 return FUNC_0(VAR_0, VAR_0->used - 1);
}
