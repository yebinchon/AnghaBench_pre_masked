
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FSE_CTable ;


 size_t FUNC_0 (size_t) ;
 size_t FUNC_1 (void*,size_t,void const*,size_t,int const*,int) ;

size_t FUNC_2(void *VAR_0, size_t VAR_1, const void *VAR_2, size_t VAR_3, const FSE_CTable *VAR_4)
{
 unsigned const VAR_5 = (VAR_1 >= FUNC_0(VAR_3));

 if (VAR_5)
  return FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4, 1);
 else
  return FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4, 0);
}
