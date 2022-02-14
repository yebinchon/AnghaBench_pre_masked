
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ nOffset; } ;
struct TYPE_7__ {TYPE_2__* pCursors; } ;
typedef TYPE_1__ ME_TextEditor ;
typedef TYPE_2__ ME_Cursor ;
typedef int BOOL ;


 int FUNC_0 (TYPE_2__*) ;
 int VAR_0 ;

int FUNC_1(ME_TextEditor *VAR_1, ME_Cursor **VAR_2, ME_Cursor **VAR_3)
{
  int VAR_4 = FUNC_0( &VAR_1->pCursors[0] );
  int VAR_5 = FUNC_0( &VAR_1->pCursors[1] );
  BOOL VAR_6 = (VAR_4 > VAR_5);

  if (VAR_4 == VAR_5)
  {


      if (VAR_1->pCursors[0].nOffset < VAR_1->pCursors[1].nOffset)
          VAR_6 = VAR_0;
  }

  if (!VAR_6)
  {
    *VAR_2 = &VAR_1->pCursors[0];
    *VAR_3 = &VAR_1->pCursors[1];
    return 0;
  } else {
    *VAR_2 = &VAR_1->pCursors[1];
    *VAR_3 = &VAR_1->pCursors[0];
    return 1;
  }
}
