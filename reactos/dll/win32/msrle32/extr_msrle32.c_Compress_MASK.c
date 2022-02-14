
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_16__ {scalar_t__ biSizeImage; int biBitCount; } ;
struct TYPE_15__ {scalar_t__ nPrevFrame; void* pCurFrame; void* pPrevFrame; int bCompress; } ;
struct TYPE_14__ {int dwFlags; int* lpdwFlags; scalar_t__ lFrameNum; scalar_t__ dwFrameSize; int dwQuality; int * lpckid; TYPE_5__* lpbiOutput; int lpOutput; int * lpInput; int * lpbiInput; int * lpPrev; int * lpbiPrev; } ;
typedef scalar_t__ LRESULT ;
typedef void* LPWORD ;
typedef TYPE_1__ ICCOMPRESS ;
typedef int DWORD ;
typedef TYPE_2__ CodecInfo ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_2__*,int *,TYPE_5__*) ;
 scalar_t__ FUNC_1 (TYPE_2__*,int *,TYPE_5__*) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (TYPE_2__*,int *,int *,TYPE_5__*,int ,int) ;
 int FUNC_4 (TYPE_2__*,int *,int *,TYPE_5__*,int ,int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (char*,...) ;
 int VAR_7 ;
 int FUNC_7 (char*,...) ;
 int FUNC_8 (int ) ;
 int VAR_8 ;
 int FUNC_9 (TYPE_2__*,int *,int *) ;

__attribute__((used)) static LRESULT FUNC_10(CodecInfo *VAR_9, ICCOMPRESS* VAR_10, DWORD VAR_11)
{
  BOOL VAR_12;
  int VAR_13;

  FUNC_6("(%p,%p,%u)\n",VAR_9,VAR_10,VAR_11);


  FUNC_8(VAR_9 != ((void*)0));


  if (VAR_10 == ((void*)0) || VAR_11 < sizeof(ICCOMPRESS))
    return VAR_4;
  if (!VAR_10->lpbiOutput || !VAR_10->lpOutput ||
      !VAR_10->lpbiInput || !VAR_10->lpInput)
    return VAR_4;

  FUNC_6("lpic={0x%X,%p,%p,%p,%p,%p,%p,%d,%u,%u,%p,%p}\n",VAR_10->dwFlags,VAR_10->lpbiOutput,VAR_10->lpOutput,VAR_10->lpbiInput,VAR_10->lpInput,VAR_10->lpckid,VAR_10->lpdwFlags,VAR_10->lFrameNum,VAR_10->dwFrameSize,VAR_10->dwQuality,VAR_10->lpbiPrev,VAR_10->lpPrev);

  if (! VAR_9->bCompress) {
    LRESULT VAR_14 = FUNC_0(VAR_9, VAR_10->lpbiInput, VAR_10->lpbiOutput);
    if (VAR_14 != VAR_6)
      return VAR_14;
  } else if (FUNC_1(VAR_9, VAR_10->lpbiInput, VAR_10->lpbiOutput) != VAR_6)
    return VAR_3;

  if (VAR_10->lFrameNum >= VAR_9->nPrevFrame + 1) {



    FUNC_9(VAR_9, VAR_10->lpbiInput, VAR_10->lpInput);
  } else if (VAR_10->lFrameNum == VAR_9->nPrevFrame) {


    LPWORD VAR_15 = VAR_9->pPrevFrame;

    VAR_9->pPrevFrame = VAR_9->pCurFrame;
    VAR_9->pCurFrame = VAR_15;
  } else if ((VAR_10->dwFlags & VAR_2) == 0) {
    LPWORD VAR_16;

    FUNC_7(": prev=%d cur=%d gone back? -- untested\n",VAR_9->nPrevFrame,VAR_10->lFrameNum);
    if (VAR_10->lpbiPrev == ((void*)0) || VAR_10->lpPrev == ((void*)0))
      return VAR_5;
    if (FUNC_1(VAR_9, VAR_10->lpbiPrev, VAR_10->lpbiOutput) != VAR_6)
      return VAR_3;

    FUNC_7(": prev=%d cur=%d compute swapped -- untested\n",VAR_9->nPrevFrame,VAR_10->lFrameNum);
    FUNC_9(VAR_9, VAR_10->lpbiPrev, VAR_10->lpPrev);



    VAR_16 = VAR_9->pPrevFrame;
    VAR_9->pPrevFrame = VAR_9->pCurFrame;
    VAR_9->pCurFrame = VAR_16;
    VAR_9->nPrevFrame = VAR_10->lFrameNum;
  }

  VAR_12 = (VAR_10->dwFlags & VAR_2) != 0;

  for (VAR_13 = 0; VAR_13 < 3; VAR_13++) {
    VAR_10->lpbiOutput->biSizeImage = 0;

    if (VAR_10->lpbiOutput->biBitCount == 4)
      FUNC_3(VAR_9, VAR_10->lpbiInput, VAR_10->lpInput, VAR_10->lpbiOutput, VAR_10->lpOutput, VAR_12);
    else
      FUNC_4(VAR_9, VAR_10->lpbiInput, VAR_10->lpInput, VAR_10->lpbiOutput, VAR_10->lpOutput, VAR_12);

    if (VAR_10->dwFrameSize == 0 ||
 VAR_10->lpbiOutput->biSizeImage < VAR_10->dwFrameSize)
      break;

    if ((*VAR_10->lpdwFlags & VAR_2) == 0) {
      if (VAR_10->lpbiOutput->biBitCount == 4)
        FUNC_3(VAR_9, VAR_10->lpbiInput, VAR_10->lpInput,
                             VAR_10->lpbiOutput, VAR_10->lpOutput, VAR_7);
      else
        FUNC_4(VAR_9, VAR_10->lpbiInput, VAR_10->lpInput,
                             VAR_10->lpbiOutput, VAR_10->lpOutput, VAR_7);

      if (VAR_10->dwFrameSize == 0 ||
   VAR_10->lpbiOutput->biSizeImage < VAR_10->dwFrameSize) {
 FUNC_7("switched to keyframe, was small enough!\n");
        VAR_12 = VAR_7;
 *VAR_10->lpckid = FUNC_2(VAR_8,
           FUNC_5(*VAR_10->lpckid));
 break;
      }
    }

    if (VAR_10->dwQuality < 1000)
      break;

    VAR_10->dwQuality -= 1000;
  }

  {

    LPWORD VAR_17 = VAR_9->pPrevFrame;

    VAR_9->pPrevFrame = VAR_9->pCurFrame;
    VAR_9->pCurFrame = VAR_17;
    VAR_9->nPrevFrame = VAR_10->lFrameNum;
  }


  *VAR_10->lpdwFlags |= VAR_1 | (VAR_12 ? VAR_0 : 0);
  return VAR_6;
}
