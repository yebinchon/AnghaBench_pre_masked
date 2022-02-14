
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct darray {size_t const num; int array; } ;


 int FUNC_0 (struct darray*) ;
 int FUNC_1 (size_t const,struct darray*,size_t const) ;
 int FUNC_2 (int ,int ,size_t const) ;

__attribute__((used)) static inline void FUNC_3(const size_t VAR_0, struct darray *VAR_1,
          const struct darray *VAR_2)
{
 if (VAR_2->num == 0) {
  FUNC_0(VAR_1);
 } else {
  FUNC_1(VAR_0, VAR_1, VAR_2->num);
  FUNC_2(VAR_1->array, VAR_2->array, VAR_0 * VAR_2->num);
 }
}
