
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct darray {scalar_t__ num; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (size_t const,struct darray*,scalar_t__) ;

__attribute__((used)) static inline void FUNC_2(const size_t VAR_0,
       struct darray *VAR_1)
{
 FUNC_0(VAR_1->num != 0);

 if (VAR_1->num)
  FUNC_1(VAR_0, VAR_1, VAR_1->num - 1);
}
