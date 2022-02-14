
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct darray {size_t const num; } ;



__attribute__((used)) static inline size_t FUNC_0(const size_t VAR_0,
           const struct darray *VAR_1)
{
 return VAR_0 * VAR_1->num;
}
