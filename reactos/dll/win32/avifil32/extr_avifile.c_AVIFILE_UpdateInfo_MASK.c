
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef size_t UINT ;
struct TYPE_8__ {scalar_t__ right; scalar_t__ left; scalar_t__ bottom; scalar_t__ top; } ;
struct TYPE_11__ {scalar_t__ dwScale; scalar_t__ dwRate; scalar_t__ dwLength; scalar_t__ dwInitialFrames; scalar_t__ dwSuggestedBufferSize; scalar_t__ dwSampleSize; TYPE_2__ rcFrame; } ;
struct TYPE_9__ {int dwCaps; scalar_t__ dwSuggestedBufferSize; scalar_t__ dwWidth; scalar_t__ dwHeight; scalar_t__ dwScale; scalar_t__ dwRate; scalar_t__ dwLength; size_t dwStreams; scalar_t__ dwMaxBytesPerSec; } ;
struct TYPE_10__ {scalar_t__ dwInitialFrames; TYPE_3__ fInfo; TYPE_1__** ppStreams; } ;
struct TYPE_7__ {int IAVIStream_iface; TYPE_5__ sInfo; } ;
typedef TYPE_4__ IAVIFileImpl ;
typedef scalar_t__ DWORD ;
typedef TYPE_5__ AVISTREAMINFOW ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *,int *,scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_2 (int) ;

__attribute__((used)) static void FUNC_3(IAVIFileImpl *VAR_2)
{
  UINT VAR_3;


  FUNC_2(VAR_2 != ((void*)0));

  VAR_2->fInfo.dwMaxBytesPerSec = 0;
  VAR_2->fInfo.dwCaps = VAR_0|VAR_1;
  VAR_2->fInfo.dwSuggestedBufferSize = 0;
  VAR_2->fInfo.dwWidth = 0;
  VAR_2->fInfo.dwHeight = 0;
  VAR_2->fInfo.dwScale = 0;
  VAR_2->fInfo.dwRate = 0;
  VAR_2->fInfo.dwLength = 0;
  VAR_2->dwInitialFrames = 0;

  for (VAR_3 = 0; VAR_3 < VAR_2->fInfo.dwStreams; VAR_3++) {
    AVISTREAMINFOW *VAR_4;
    DWORD VAR_5;


    FUNC_2(VAR_2->ppStreams[VAR_3] != ((void*)0));

    VAR_4 = &VAR_2->ppStreams[VAR_3]->sInfo;
    FUNC_2(VAR_4->dwScale != 0);
    FUNC_2(VAR_4->dwRate != 0);

    if (VAR_3 == 0) {

      VAR_2->fInfo.dwScale = VAR_4->dwScale;
      VAR_2->fInfo.dwRate = VAR_4->dwRate;
      VAR_2->fInfo.dwLength = VAR_4->dwLength;
    } else {
      VAR_5 = FUNC_0(&VAR_2->ppStreams[0]->IAVIStream_iface,
                                  &VAR_2->ppStreams[VAR_3]->IAVIStream_iface, VAR_4->dwLength);
      if (VAR_2->fInfo.dwLength < VAR_5)
 VAR_2->fInfo.dwLength = VAR_5;
    }

    if (VAR_2->dwInitialFrames < VAR_4->dwInitialFrames)
      VAR_2->dwInitialFrames = VAR_4->dwInitialFrames;

    if (VAR_2->fInfo.dwSuggestedBufferSize < VAR_4->dwSuggestedBufferSize)
      VAR_2->fInfo.dwSuggestedBufferSize = VAR_4->dwSuggestedBufferSize;

    if (VAR_4->dwSampleSize != 0) {

      VAR_2->fInfo.dwMaxBytesPerSec += FUNC_1(VAR_4->dwSampleSize, VAR_4->dwRate,
          VAR_4->dwScale);
    } else {

      VAR_2->fInfo.dwMaxBytesPerSec += FUNC_1(VAR_4->dwSuggestedBufferSize,
          VAR_4->dwRate, VAR_4->dwScale);


      VAR_5 = VAR_4->rcFrame.right - VAR_4->rcFrame.left;
      if (VAR_2->fInfo.dwWidth < VAR_5)
 VAR_2->fInfo.dwWidth = VAR_5;
      VAR_5 = VAR_4->rcFrame.bottom - VAR_4->rcFrame.top;
      if (VAR_2->fInfo.dwHeight < VAR_5)
 VAR_2->fInfo.dwHeight = VAR_5;
    }
  }
}
