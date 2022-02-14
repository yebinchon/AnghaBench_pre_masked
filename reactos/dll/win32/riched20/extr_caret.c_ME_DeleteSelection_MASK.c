
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int * pCursors; } ;
typedef TYPE_1__ ME_TextEditor ;


 int FUNC_0 (TYPE_1__*,int,int) ;
 int FUNC_1 (TYPE_1__*,int*,int*) ;

void FUNC_2(ME_TextEditor *VAR_0)
{
  int VAR_1, VAR_2;
  int VAR_3 = FUNC_1(VAR_0, &VAR_1, &VAR_2);
  int VAR_4 = VAR_3 ^ 1;
  FUNC_0(VAR_0, VAR_3, VAR_2 - VAR_1);
  VAR_0->pCursors[VAR_4] = VAR_0->pCursors[VAR_3];
}
