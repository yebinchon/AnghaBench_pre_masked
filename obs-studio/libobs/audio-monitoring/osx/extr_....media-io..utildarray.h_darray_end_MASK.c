
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct darray {scalar_t__ num; } ;


 void* FUNC_0 (size_t const,struct darray const*,scalar_t__) ;

__attribute__((used)) static inline void *FUNC_1(const size_t VAR_0,
          const struct darray *VAR_1)
{
 if (!VAR_1->num)
  return ((void*)0);

 return FUNC_0(VAR_0, VAR_1, VAR_1->num - 1);
}
