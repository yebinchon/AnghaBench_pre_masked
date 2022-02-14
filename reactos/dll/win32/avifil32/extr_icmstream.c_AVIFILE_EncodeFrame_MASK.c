
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int biSizeImage; } ;
struct TYPE_6__ {scalar_t__ dwStart; int dwQuality; } ;
struct TYPE_7__ {scalar_t__ lKeyFrameEvery; scalar_t__ lCurrent; scalar_t__ lLastKey; int dwBytesPerFrame; int dwUnusedBytes; int dwICMFlags; int dwLastQuality; int * lpPrev; int * lpbiPrev; int lpCur; TYPE_3__* lpbiCur; int hic; TYPE_1__ sInfo; } ;
typedef int LPVOID ;
typedef int LPBITMAPINFOHEADER ;
typedef TYPE_2__ IAVIStreamImpl ;
typedef int HRESULT ;
typedef int DWORD ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,...) ;
 int VAR_4 ;
 int FUNC_1 (int ,int,TYPE_3__*,int ,int ,int ,int*,int*,scalar_t__,int,int,int *,int *) ;
 int FUNC_2 (int ,int ,TYPE_3__*,int ,int *,int *) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;

__attribute__((used)) static HRESULT FUNC_3(IAVIStreamImpl *VAR_14,
       LPBITMAPINFOHEADER VAR_15, LPVOID VAR_16)
{
  DWORD VAR_17, VAR_18, VAR_19;
  DWORD VAR_20;
  DWORD VAR_21 = 0;
  DWORD VAR_22 = 0;
  BOOL VAR_23 = VAR_3;
  BOOL VAR_24;
  BOOL VAR_25;


  if ((VAR_14->lKeyFrameEvery != 0 &&
       (VAR_14->lCurrent - VAR_14->lLastKey) >= VAR_14->lKeyFrameEvery) ||
      VAR_14->lCurrent == VAR_14->sInfo.dwStart) {
    VAR_22 = VAR_2;
    VAR_21 = VAR_4;
  }

  if (VAR_14->lKeyFrameEvery != 0) {
    if (VAR_14->lCurrent == VAR_14->sInfo.dwStart) {
      if (VAR_22 & VAR_2) {

 VAR_20 = VAR_14->dwBytesPerFrame + VAR_14->dwUnusedBytes;
 VAR_14->dwUnusedBytes = 0;
      } else {

 DWORD VAR_26 = 0;
 DWORD VAR_27;

 if (VAR_14->dwBytesPerFrame >= VAR_14->dwUnusedBytes)
   VAR_26 = VAR_14->dwBytesPerFrame / VAR_14->lKeyFrameEvery;
 VAR_27 = (VAR_14->dwUnusedBytes + VAR_26) / VAR_14->lKeyFrameEvery;

 VAR_20 = VAR_14->dwBytesPerFrame - VAR_26 + VAR_27;
 VAR_14->dwUnusedBytes -= VAR_27;
      }
    } else
      VAR_20 = VAR_8;
  } else {

    if (VAR_14->lCurrent == VAR_14->sInfo.dwStart) {
      VAR_20 = VAR_14->dwBytesPerFrame + VAR_14->dwUnusedBytes;
      VAR_14->dwUnusedBytes = 0;
    } else
      VAR_20 = VAR_8;
  }



  VAR_24 = (VAR_20 != 0 && ((VAR_14->dwICMFlags & (VAR_11|VAR_13)) == 0));

  VAR_18 = VAR_19 = VAR_14->sInfo.dwQuality;
  VAR_17 = VAR_7;

  VAR_25 = VAR_10;
  if ((VAR_21 & VAR_4) == 0 &&
      (VAR_14->dwICMFlags & VAR_12) == 0)
    VAR_25 = VAR_3;

  do {
    DWORD VAR_28 = 0;
    DWORD VAR_29;

    VAR_29 = FUNC_1(VAR_14->hic,VAR_21,VAR_14->lpbiCur,VAR_14->lpCur,VAR_15,VAR_16,
       &VAR_28, &VAR_22, VAR_14->lCurrent, VAR_20, VAR_19,
       VAR_25 ? ((void*)0):VAR_14->lpbiPrev, VAR_25 ? ((void*)0):VAR_14->lpPrev);
    if (VAR_29 == VAR_5) {
      FUNC_0(": codec has changed palette -- unhandled!\n");
    } else if (VAR_29 != VAR_6)
      return VAR_0;


    if (! VAR_24)
      break;

    if (VAR_20 >= VAR_14->lpbiCur->biSizeImage) {

      if (VAR_18 - VAR_19 > 10) {
 DWORD VAR_30 = VAR_20 / 8;

 if (VAR_30 < VAR_9)
   VAR_30 = VAR_9;

 if (VAR_30 < VAR_20 - VAR_14->lpbiCur->biSizeImage && VAR_23) {
   VAR_30 = VAR_19;
   VAR_19 = (VAR_17 + VAR_18) / 2;
   VAR_17 = VAR_30;
   continue;
 }
      } else
 break;
    } else if (VAR_18 - VAR_17 <= 1) {
      break;
    } else {
      VAR_18 = VAR_19;

      if (VAR_23 || VAR_19 == VAR_14->dwLastQuality)
 VAR_19 = (VAR_17 + VAR_18) / 2;
      else
 FUNC_0(": no new quality computed min=%u cur=%u max=%u last=%u\n",
       VAR_17, VAR_19, VAR_18, VAR_14->dwLastQuality);

      VAR_23 = VAR_10;
    }
  } while (VAR_10);


  VAR_14->dwLastQuality = VAR_19;
  VAR_14->dwUnusedBytes = VAR_20 - VAR_14->lpbiCur->biSizeImage;
  if (VAR_21 & VAR_4)
    VAR_14->lLastKey = VAR_14->lCurrent;


  if (VAR_14->lpPrev != ((void*)0) && VAR_14->lKeyFrameEvery != 1)
    FUNC_2(VAR_14->hic, 0, VAR_14->lpbiCur, VAR_14->lpCur,
   VAR_14->lpbiPrev, VAR_14->lpPrev);

  return VAR_1;
}
