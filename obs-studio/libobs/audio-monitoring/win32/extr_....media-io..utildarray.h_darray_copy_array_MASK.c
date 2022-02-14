
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct darray {size_t const num; int array; } ;


 int FUNC_0 (size_t const,struct darray*,size_t const) ;
 int FUNC_1 (int ,void const*,size_t const) ;

__attribute__((used)) static inline void FUNC_2(const size_t VAR_0,
         struct darray *VAR_1, const void *VAR_2,
         const size_t VAR_3)
{
 FUNC_0(VAR_0, VAR_1, VAR_3);
 FUNC_1(VAR_1->array, VAR_2, VAR_0 * VAR_1->num);
}
