
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int dwSuggestedBufferSize; } ;
struct TYPE_11__ {TYPE_2__* lpFrame; TYPE_1__ sInfo; int * pg; int * pCurStream; } ;
struct TYPE_10__ {int biSizeImage; } ;
typedef int * PGETFRAME ;
typedef int * PAVISTREAM ;
typedef TYPE_2__* LPVOID ;
typedef int LONG ;
typedef TYPE_3__ IAVIEditStreamImpl ;


 TYPE_2__* FUNC_0 (int *,int ) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int *,int *) ;
 int FUNC_3 (char*) ;
 scalar_t__ FUNC_4 (int *,TYPE_2__*,int *,int ,int ,int,int) ;
 scalar_t__ VAR_0 ;
 int FUNC_5 (char*,TYPE_3__* const,int *,int ) ;

__attribute__((used)) static LPVOID FUNC_6(IAVIEditStreamImpl* const VAR_1,
                                PAVISTREAM VAR_2, LONG VAR_3)
{
  PGETFRAME VAR_4;

  FUNC_5("(%p,%p,%d)\n",VAR_1,VAR_2,VAR_3);

  if (VAR_2 == ((void*)0))
    return ((void*)0);


  if (VAR_1->pCurStream != VAR_2) {
    VAR_4 = FUNC_2(VAR_2, ((void*)0));
    if (VAR_4 == ((void*)0))
      return ((void*)0);
    if (VAR_1->pg != ((void*)0)) {
      if (FUNC_4(VAR_4, VAR_1->lpFrame, ((void*)0), 0, 0, -1, -1) != VAR_0) {
        FUNC_1(VAR_4);
        FUNC_3(": IGetFrame_SetFormat failed\n");
        return ((void*)0);
      }
      FUNC_1(VAR_1->pg);
    }
    VAR_1->pg = VAR_4;
    VAR_1->pCurStream = VAR_2;
  }


  VAR_1->lpFrame = FUNC_0(VAR_1->pg, VAR_3);
  if (VAR_1->lpFrame != ((void*)0))
    VAR_1->sInfo.dwSuggestedBufferSize = VAR_1->lpFrame->biSizeImage;

  return VAR_1->lpFrame;
}
