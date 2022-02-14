
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fpm_array_s {scalar_t__ allocated; scalar_t__ used; scalar_t__ sz; scalar_t__ data; } ;


 int FUNC_0 (scalar_t__) ;

__attribute__((used)) static inline void FUNC_1(struct fpm_array_s *VAR_0)
{
 FUNC_0(VAR_0->data);
 VAR_0->data = 0;
 VAR_0->sz = 0;
 VAR_0->used = VAR_0->allocated = 0;
}
