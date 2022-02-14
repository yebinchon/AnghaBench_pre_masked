
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* pBuffer; } ;
struct TYPE_4__ {int * pCharStyle; } ;
typedef TYPE_2__ ME_TextEditor ;
typedef int ME_Style ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

void FUNC_2(ME_TextEditor *VAR_0, ME_Style *VAR_1)
{
  ME_Style *VAR_2 = VAR_0->pBuffer->pCharStyle;

  if (VAR_1) FUNC_0( VAR_1 );
  VAR_0->pBuffer->pCharStyle = VAR_1;
  if (VAR_2) FUNC_1( VAR_2 );
}
