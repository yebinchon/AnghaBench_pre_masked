
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ _flag; } ;
typedef TYPE_1__ FILE ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_0 (int) ;

__attribute__((used)) static FILE* FUNC_1(void)
{
  int VAR_2;
  FILE *VAR_3;

  for (VAR_2 = 3; VAR_2 < VAR_0; VAR_2++)
  {
    VAR_3 = FUNC_0(VAR_2);
    if (!VAR_3)
      return ((void*)0);

    if (VAR_3->_flag == 0)
    {
      if (VAR_2 == VAR_1) VAR_1++;
      return VAR_3;
    }
  }

  return ((void*)0);
}
