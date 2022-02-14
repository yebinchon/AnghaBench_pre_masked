
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int type_t ;


 scalar_t__ FUNC_0 (int const*) ;
 int * FUNC_1 (int const*) ;

__attribute__((used)) static int FUNC_2(const type_t *VAR_0, const type_t ** VAR_1)
{
  const type_t * VAR_2;
  for (VAR_2 = VAR_0; VAR_2 != ((void*)0); VAR_2 = FUNC_1(VAR_2))
    if (FUNC_0(VAR_2))
    {
      if(VAR_1)
        *VAR_1 = FUNC_1(VAR_2);
      return 1;
    }
  return 0;
}
