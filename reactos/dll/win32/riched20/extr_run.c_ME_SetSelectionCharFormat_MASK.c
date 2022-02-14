
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {TYPE_1__* pBuffer; } ;
struct TYPE_9__ {int * pCharStyle; } ;
typedef TYPE_2__ ME_TextEditor ;
typedef int ME_Style ;
typedef int ME_Cursor ;
typedef int CHARFORMAT2W ;


 int * FUNC_0 (TYPE_2__*,int *,int *) ;
 int * FUNC_1 (TYPE_2__*,int ) ;
 int FUNC_2 (TYPE_2__*,int **,int **) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (TYPE_2__*,int *,int *,int *) ;

void FUNC_6(ME_TextEditor *VAR_0, CHARFORMAT2W *VAR_1)
{
  if (!FUNC_3(VAR_0))
  {
    ME_Style *VAR_2;
    if (!VAR_0->pBuffer->pCharStyle)
      VAR_0->pBuffer->pCharStyle = FUNC_1(VAR_0, 0);
    VAR_2 = FUNC_0(VAR_0, VAR_0->pBuffer->pCharStyle, VAR_1);
    FUNC_4(VAR_0->pBuffer->pCharStyle);
    VAR_0->pBuffer->pCharStyle = VAR_2;
  } else {
    ME_Cursor *VAR_3, *VAR_4;
    FUNC_2(VAR_0, &VAR_3, &VAR_4);
    FUNC_5(VAR_0, VAR_3, VAR_4, VAR_1);
  }
}
