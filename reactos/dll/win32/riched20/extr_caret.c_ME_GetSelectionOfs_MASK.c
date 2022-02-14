
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * pCursors; } ;
typedef TYPE_1__ ME_TextEditor ;


 int FUNC_0 (int *) ;

int FUNC_1(ME_TextEditor *VAR_0, int *VAR_1, int *VAR_2)
{
  *VAR_1 = FUNC_0(&VAR_0->pCursors[0]);
  *VAR_2 = FUNC_0(&VAR_0->pCursors[1]);

  if (*VAR_1 > *VAR_2)
  {
    int VAR_3 = *VAR_1;
    *VAR_1 = *VAR_2;
    *VAR_2 = VAR_3;
    return 1;
  }
  return 0;
}
