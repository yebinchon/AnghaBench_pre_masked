
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ dwUsed; int dwSize; scalar_t__ buffer; TYPE_1__* editstream; } ;
struct TYPE_4__ {int dwCookie; int (* pfnCallback ) (int ,int *,int,int *) ;int dwError; } ;
typedef TYPE_2__ ME_InStream ;
typedef int LONG ;
typedef int BYTE ;


 int FUNC_0 (int ,int *,int,int *) ;

void
FUNC_1(ME_InStream *VAR_0)
{
  VAR_0->editstream->dwError = VAR_0->editstream->pfnCallback(VAR_0->editstream->dwCookie,
                                                                (BYTE *)VAR_0->buffer,
                                                                sizeof(VAR_0->buffer),
                                                                (LONG *)&VAR_0->dwSize);
  VAR_0->dwUsed = 0;
}
