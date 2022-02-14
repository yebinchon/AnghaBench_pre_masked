
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct darray {size_t num; } ;


 int FUNC_0 (size_t const,struct darray*,size_t) ;
 int FUNC_1 (size_t const,struct darray*,size_t const) ;
 int FUNC_2 (int ,void const*,size_t const) ;

__attribute__((used)) static inline size_t FUNC_3(const size_t VAR_0,
         struct darray *VAR_1,
         const void *VAR_2, const size_t VAR_3)
{
 size_t VAR_4;
 if (!VAR_1)
  return 0;
 if (!VAR_2 || !VAR_3)
  return VAR_1->num;

 VAR_4 = VAR_1->num;
 FUNC_1(VAR_0, VAR_1, VAR_1->num + VAR_3);
 FUNC_2(FUNC_0(VAR_0, VAR_1, VAR_4), VAR_2,
        VAR_0 * VAR_3);

 return VAR_4;
}
