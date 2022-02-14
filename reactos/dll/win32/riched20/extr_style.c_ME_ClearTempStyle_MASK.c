
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* pBuffer; } ;
struct TYPE_4__ {int * pCharStyle; } ;
typedef TYPE_2__ ME_TextEditor ;


 int FUNC_0 (int *) ;

void FUNC_1(ME_TextEditor *VAR_0)
{
  if (!VAR_0->pBuffer->pCharStyle) return;
  FUNC_0(VAR_0->pBuffer->pCharStyle);
  VAR_0->pBuffer->pCharStyle = ((void*)0);
}
