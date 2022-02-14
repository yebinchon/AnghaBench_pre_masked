
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int WCHAR ;
struct TYPE_9__ {int pRun; int * pPara; scalar_t__ nOffset; } ;
struct TYPE_8__ {TYPE_2__* pCursors; } ;
typedef TYPE_1__ ME_TextEditor ;
typedef int ME_Style ;
typedef int ME_DisplayItem ;
typedef TYPE_2__ ME_Cursor ;


 int FUNC_0 (int *,int ) ;
 int * FUNC_1 (TYPE_1__*,int) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (TYPE_1__*,int ,int *,int const*,int,int) ;
 int FUNC_4 (TYPE_1__*,TYPE_2__*) ;
 int VAR_0 ;

__attribute__((used)) static ME_DisplayItem* FUNC_5(ME_TextEditor *VAR_1,
                                                  int VAR_2,
                                                  const WCHAR *VAR_3, int VAR_4,
                                                  int VAR_5)
{
  ME_Style *VAR_6 = FUNC_1(VAR_1, VAR_2);
  ME_DisplayItem *VAR_7;
  ME_Cursor* VAR_8 = &VAR_1->pCursors[VAR_2];
  if (VAR_8->nOffset)
    FUNC_4(VAR_1, VAR_8);

  VAR_7 = FUNC_3(VAR_1, VAR_8->pRun, VAR_6, VAR_3, VAR_4, VAR_5);
  FUNC_2(VAR_6);
  VAR_8->pPara = VAR_7;
  VAR_8->pRun = FUNC_0(VAR_7, VAR_0);
  return VAR_7;
}
