
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int nCursors; int nModifyStep; int * pCursors; } ;
typedef TYPE_1__ ME_TextEditor ;
typedef int BOOL ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int *,int,int ) ;
 int FUNC_1 (int) ;

BOOL FUNC_2(ME_TextEditor *VAR_1, int VAR_2, int VAR_3)
{
  FUNC_1(VAR_2>=0 && VAR_2<VAR_1->nCursors);

  VAR_1->nModifyStep = 1;
  return FUNC_0(VAR_1, &VAR_1->pCursors[VAR_2],
                               VAR_3, VAR_0);
}
