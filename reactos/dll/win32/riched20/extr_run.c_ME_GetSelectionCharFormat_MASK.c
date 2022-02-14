
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {TYPE_2__* pBuffer; } ;
struct TYPE_9__ {TYPE_1__* pCharStyle; } ;
struct TYPE_8__ {int fmt; } ;
typedef TYPE_3__ ME_TextEditor ;
typedef int ME_Cursor ;
typedef int CHARFORMAT2W ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (TYPE_3__*,int *,int *,int *) ;
 int FUNC_2 (TYPE_3__*,int **,int **) ;
 int FUNC_3 (TYPE_3__*) ;

void FUNC_4(ME_TextEditor *VAR_0, CHARFORMAT2W *VAR_1)
{
  ME_Cursor *VAR_2, *VAR_3;
  if (!FUNC_3(VAR_0) && VAR_0->pBuffer->pCharStyle)
  {
    FUNC_0(VAR_1, &VAR_0->pBuffer->pCharStyle->fmt);
    return;
  }
  FUNC_2(VAR_0, &VAR_2, &VAR_3);
  FUNC_1(VAR_0, VAR_2, VAR_3, VAR_1);
}
