
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct darray {size_t const num; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (size_t const,struct darray*,size_t const) ;
 int FUNC_2 (size_t const,struct darray*,size_t const) ;
 int FUNC_3 (int ,void const*,size_t const) ;
 int FUNC_4 (int ,int ,size_t const) ;

__attribute__((used)) static inline void FUNC_5(const size_t VAR_0,
           struct darray *VAR_1, const size_t VAR_2,
           const void *VAR_3, const size_t VAR_4)
{
 size_t VAR_5;

 FUNC_0(VAR_3 != ((void*)0));
 FUNC_0(VAR_4 != 0);
 FUNC_0(VAR_2 < VAR_1->num);

 VAR_5 = VAR_1->num;
 FUNC_2(VAR_0, VAR_1, VAR_1->num + VAR_4);

 FUNC_4(FUNC_1(VAR_0, VAR_1, VAR_2 + VAR_4),
  FUNC_1(VAR_0, VAR_1, VAR_2),
  VAR_0 * (VAR_5 - VAR_2));
 FUNC_3(FUNC_1(VAR_0, VAR_1, VAR_2), VAR_3, VAR_0 * VAR_4);
}
