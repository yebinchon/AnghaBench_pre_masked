
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct darray {size_t const num; } ;


 size_t VAR_0 ;
 int FUNC_0 (int) ;
 void* FUNC_1 (size_t const,struct darray const*,size_t) ;
 scalar_t__ FUNC_2 (void*,void const*,size_t const) ;

__attribute__((used)) static inline size_t FUNC_3(const size_t VAR_1,
     const struct darray *VAR_2, const void *VAR_3,
     const size_t VAR_4)
{
 size_t VAR_5;

 FUNC_0(VAR_4 <= VAR_2->num);

 for (VAR_5 = VAR_4; VAR_5 < VAR_2->num; VAR_5++) {
  void *VAR_6 = FUNC_1(VAR_1, VAR_2, VAR_5);
  if (FUNC_2(VAR_6, VAR_3, VAR_1) == 0)
   return VAR_5;
 }

 return VAR_0;
}
