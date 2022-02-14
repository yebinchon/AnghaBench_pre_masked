
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int sInfo ;
struct TYPE_13__ {int dwStreams; int dwScale; int dwRate; scalar_t__ dwSuggestedBufferSize; scalar_t__ dwLength; scalar_t__ dwWidth; scalar_t__ dwHeight; } ;
struct TYPE_9__ {scalar_t__ right; scalar_t__ left; scalar_t__ bottom; scalar_t__ top; } ;
struct TYPE_12__ {int dwScale; int dwRate; scalar_t__ dwSuggestedBufferSize; TYPE_1__ rcFrame; int dwLength; } ;
struct TYPE_10__ {int * lpVtbl; } ;
struct TYPE_11__ {int ref; TYPE_2__ IAVIFile_iface; TYPE_5__ fInfo; int * ppStreams; } ;
typedef int PAVISTREAM ;
typedef TYPE_2__* PAVIFILE ;
typedef TYPE_3__ ITmpFileImpl ;
typedef scalar_t__ DWORD ;
typedef TYPE_4__ AVISTREAMINFOW ;


 int FUNC_0 (int const) ;
 int FUNC_1 (int const,TYPE_4__*,int) ;
 int FUNC_2 (int const,int ) ;
 int FUNC_3 () ;
 int VAR_0 ;
 void* FUNC_4 (int ,int ,int) ;
 int FUNC_5 (int ,int ,TYPE_3__*) ;
 scalar_t__ FUNC_6 (int ,int,int) ;
 int VAR_1 ;
 int FUNC_7 (TYPE_5__*,int ,int) ;

PAVIFILE FUNC_8(int VAR_2, const PAVISTREAM *VAR_3)
{
  ITmpFileImpl *VAR_4;
  int VAR_5;

  VAR_4 = FUNC_4(FUNC_3(), VAR_0, sizeof(ITmpFileImpl));
  if (VAR_4 == ((void*)0))
    return ((void*)0);

  VAR_4->IAVIFile_iface.lpVtbl = &VAR_1;
  VAR_4->ref = 1;
  FUNC_7(&VAR_4->fInfo, 0, sizeof(VAR_4->fInfo));

  VAR_4->fInfo.dwStreams = VAR_2;
  VAR_4->ppStreams = FUNC_4(FUNC_3(), 0, VAR_2 * sizeof(PAVISTREAM));
  if (VAR_4->ppStreams == ((void*)0)) {
    FUNC_5(FUNC_3(), 0, VAR_4);
    return ((void*)0);
  }

  for (VAR_5 = 0; VAR_5 < VAR_2; VAR_5++) {
    AVISTREAMINFOW VAR_6;

    VAR_4->ppStreams[VAR_5] = VAR_3[VAR_5];

    FUNC_0(VAR_3[VAR_5]);
    FUNC_1(VAR_3[VAR_5], &VAR_6, sizeof(VAR_6));
    if (VAR_5 == 0) {
      VAR_4->fInfo.dwScale = VAR_6.dwScale;
      VAR_4->fInfo.dwRate = VAR_6.dwRate;
      if (!VAR_6.dwScale || !VAR_6.dwRate) {
        VAR_4->fInfo.dwScale = 1;
        VAR_4->fInfo.dwRate = 100;
      }
    }

    if (VAR_4->fInfo.dwSuggestedBufferSize < VAR_6.dwSuggestedBufferSize)
      VAR_4->fInfo.dwSuggestedBufferSize = VAR_6.dwSuggestedBufferSize;

    {
      DWORD VAR_7;

      VAR_7 = FUNC_6(FUNC_2(VAR_3[VAR_5], VAR_6.dwLength),
                   VAR_4->fInfo.dwScale, VAR_4->fInfo.dwRate * 1000);
      if (VAR_4->fInfo.dwLength < VAR_7)
        VAR_4->fInfo.dwLength = VAR_7;

      VAR_7 = VAR_6.rcFrame.right - VAR_6.rcFrame.left;
      if (VAR_4->fInfo.dwWidth < VAR_7)
        VAR_4->fInfo.dwWidth = VAR_7;
      VAR_7 = VAR_6.rcFrame.bottom - VAR_6.rcFrame.top;
      if (VAR_4->fInfo.dwHeight < VAR_7)
        VAR_4->fInfo.dwHeight = VAR_7;
    }
  }

  return &VAR_4->IAVIFile_iface;
}
