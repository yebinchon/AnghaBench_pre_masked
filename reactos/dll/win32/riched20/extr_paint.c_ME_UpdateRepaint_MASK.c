
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int nEventMask; int texthost; int * pCursors; } ;
typedef TYPE_1__ ME_TextEditor ;
typedef scalar_t__ BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,scalar_t__) ;
 int FUNC_1 (TYPE_1__*,int *) ;
 int FUNC_2 (TYPE_1__*,int ) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;
 scalar_t__ FUNC_5 (TYPE_1__*) ;

void FUNC_6(ME_TextEditor *VAR_2, BOOL VAR_3)
{

  BOOL VAR_4;

  VAR_4 = FUNC_5(VAR_2);
  if (VAR_4)
    FUNC_4(VAR_2);


  FUNC_1(VAR_2, &VAR_2->pCursors[0]);

  FUNC_0(VAR_2->texthost, VAR_3);

  FUNC_3(VAR_2);


  if(VAR_2->nEventMask & VAR_0)
  {
    VAR_2->nEventMask &= ~VAR_0;
    FUNC_2(VAR_2, VAR_1);
    VAR_2->nEventMask |= VAR_0;
  }
}
