
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ right; } ;
struct TYPE_7__ {int texthost; TYPE_1__ rcFormat; scalar_t__ bHaveFocus; int * pCursors; } ;
typedef TYPE_2__ ME_TextEditor ;


 int FUNC_0 (int ,int *,int ,int) ;
 int FUNC_1 (int ,int,int) ;
 int FUNC_2 (TYPE_2__*,int *,int*,int*,int*) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (int,scalar_t__) ;

void
FUNC_5(ME_TextEditor *VAR_0)
{
  int VAR_1, VAR_2, VAR_3;

  FUNC_2(VAR_0, &VAR_0->pCursors[0], &VAR_1, &VAR_2, &VAR_3);
  if(VAR_0->bHaveFocus && !FUNC_3(VAR_0))
  {
    VAR_1 = FUNC_4(VAR_1, VAR_0->rcFormat.right-1);
    FUNC_0(VAR_0->texthost, ((void*)0), 0, VAR_3);
    FUNC_1(VAR_0->texthost, VAR_1, VAR_2);
  }
}
