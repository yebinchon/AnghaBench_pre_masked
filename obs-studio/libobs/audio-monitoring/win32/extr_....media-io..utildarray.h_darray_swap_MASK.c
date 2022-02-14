
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct darray {size_t const num; } ;


 int FUNC_0 (int) ;
 void* FUNC_1 (size_t const,struct darray*,size_t const) ;
 int FUNC_2 (void*) ;
 void* FUNC_3 (size_t const) ;
 int FUNC_4 (void*,void*,size_t const) ;

__attribute__((used)) static inline void FUNC_5(const size_t VAR_0, struct darray *VAR_1,
          const size_t VAR_2, const size_t VAR_3)
{
 void *VAR_4, *VAR_5, *VAR_6;

 FUNC_0(VAR_2 < VAR_1->num);
 FUNC_0(VAR_3 < VAR_1->num);

 if (VAR_2 == VAR_3)
  return;

 VAR_4 = FUNC_3(VAR_0);
 VAR_5 = FUNC_1(VAR_0, VAR_1, VAR_2);
 VAR_6 = FUNC_1(VAR_0, VAR_1, VAR_3);

 FUNC_4(VAR_4, VAR_5, VAR_0);
 FUNC_4(VAR_5, VAR_6, VAR_0);
 FUNC_4(VAR_6, VAR_4, VAR_0);

 FUNC_2(VAR_4);
}
