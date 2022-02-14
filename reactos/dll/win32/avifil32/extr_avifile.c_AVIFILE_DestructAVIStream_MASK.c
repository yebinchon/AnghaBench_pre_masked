
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ cb; int * lp; } ;
struct TYPE_5__ {int lLastFrame; scalar_t__ cbFormat; int * lpFormat; TYPE_1__ extra; scalar_t__ cbHandlerData; int * lpHandlerData; scalar_t__ cbBuffer; int * lpBuffer; int * idxFmtChanges; scalar_t__ nIdxFrames; int * idxFrames; int * paf; scalar_t__ dwCurrentFrame; } ;
typedef TYPE_2__ IAVIStreamImpl ;
typedef scalar_t__ DWORD ;


 int FUNC_0 () ;
 int FUNC_1 (int ,int ,int *) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(IAVIStreamImpl *VAR_0)
{

  FUNC_2(VAR_0 != ((void*)0));

  VAR_0->dwCurrentFrame = (DWORD)-1;
  VAR_0->lLastFrame = -1;
  VAR_0->paf = ((void*)0);
  if (VAR_0->idxFrames != ((void*)0)) {
    FUNC_1(FUNC_0(), 0, VAR_0->idxFrames);
    VAR_0->idxFrames = ((void*)0);
    VAR_0->nIdxFrames = 0;
  }
  FUNC_1(FUNC_0(), 0, VAR_0->idxFmtChanges);
  VAR_0->idxFmtChanges = ((void*)0);
  if (VAR_0->lpBuffer != ((void*)0)) {
    FUNC_1(FUNC_0(), 0, VAR_0->lpBuffer);
    VAR_0->lpBuffer = ((void*)0);
    VAR_0->cbBuffer = 0;
  }
  if (VAR_0->lpHandlerData != ((void*)0)) {
    FUNC_1(FUNC_0(), 0, VAR_0->lpHandlerData);
    VAR_0->lpHandlerData = ((void*)0);
    VAR_0->cbHandlerData = 0;
  }
  if (VAR_0->extra.lp != ((void*)0)) {
    FUNC_1(FUNC_0(), 0, VAR_0->extra.lp);
    VAR_0->extra.lp = ((void*)0);
    VAR_0->extra.cb = 0;
  }
  if (VAR_0->lpFormat != ((void*)0)) {
    FUNC_1(FUNC_0(), 0, VAR_0->lpFormat);
    VAR_0->lpFormat = ((void*)0);
    VAR_0->cbFormat = 0;
  }
}
