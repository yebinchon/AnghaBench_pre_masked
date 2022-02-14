
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_8__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int wfx ;
typedef int dwFactLength ;
struct TYPE_15__ {int nBlockAlign; scalar_t__ wFormatTag; } ;
typedef TYPE_3__ WAVEFORMATEX ;
struct TYPE_18__ {scalar_t__ wFormatTag; } ;
struct TYPE_14__ {scalar_t__ cb; int * lp; } ;
struct TYPE_13__ {scalar_t__ cksize; int dwDataOffset; } ;
struct TYPE_17__ {int cbFormat; int hmmio; TYPE_2__ extra; TYPE_1__ ckData; TYPE_8__* lpFormat; } ;
struct TYPE_16__ {int cksize; int ckid; int fccType; } ;
typedef int PCMWAVEFORMAT ;
typedef TYPE_4__ MMCKINFO ;
typedef TYPE_5__ IAVIFileImpl ;
typedef int HRESULT ;
typedef int * HPSTR ;
typedef int HACMSTREAM ;
typedef int DWORD ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ FUNC_1 (int *,TYPE_8__*,TYPE_3__*,int,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int *,int *,TYPE_8__*,TYPE_3__*,int *,int ,int ,int ) ;
 int FUNC_4 (int ,scalar_t__,int *,int ) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 scalar_t__ FUNC_5 (int ,TYPE_4__*,int ) ;
 scalar_t__ FUNC_6 (int ,TYPE_4__*,int ) ;
 scalar_t__ FUNC_7 (int ,int ) ;
 int FUNC_8 (int ,int,int ) ;
 scalar_t__ FUNC_9 (int ,int *,int) ;

__attribute__((used)) static HRESULT FUNC_10(const IAVIFileImpl *VAR_15)
{
  MMCKINFO VAR_16;
  MMCKINFO VAR_17;

  FUNC_8(VAR_15->hmmio, 0, VAR_7);


  VAR_16.fccType = VAR_14;
  VAR_16.cksize = 0;
  if (FUNC_6(VAR_15->hmmio, &VAR_16, VAR_5) != VAR_8)
    return VAR_3;


  VAR_17.ckid = VAR_13;
  VAR_17.cksize = VAR_15->cbFormat;
  if (FUNC_6(VAR_15->hmmio, &VAR_17, 0) != VAR_8)
    return VAR_3;
  if (VAR_15->lpFormat != ((void*)0) && VAR_15->cbFormat > 0) {
    if (FUNC_9(VAR_15->hmmio, (HPSTR)VAR_15->lpFormat, VAR_17.cksize) != VAR_17.cksize)
      return VAR_3;
  }
  if (FUNC_5(VAR_15->hmmio, &VAR_17, 0) != VAR_8)
    return VAR_3;


  if (VAR_15->lpFormat != ((void*)0) && VAR_15->cbFormat > sizeof(PCMWAVEFORMAT) &&
      VAR_15->lpFormat->wFormatTag != VAR_9) {
    WAVEFORMATEX VAR_18;
    DWORD VAR_19;
    HACMSTREAM VAR_20;



    VAR_18.wFormatTag = VAR_9;
    if (FUNC_1(((void*)0), VAR_15->lpFormat, &VAR_18,
    sizeof(VAR_18), VAR_0)) {
      FUNC_3(&VAR_20, ((void*)0), VAR_15->lpFormat, &VAR_18, ((void*)0),
      0, 0, VAR_1);
      FUNC_4(VAR_20, VAR_15->ckData.cksize, &VAR_19,
      VAR_2);
      VAR_19 /= VAR_18.nBlockAlign;
      FUNC_2(VAR_20, 0);


      VAR_17.ckid = VAR_12;
      VAR_17.cksize = sizeof(VAR_19);


      if (FUNC_8(VAR_15->hmmio, 0, VAR_6) > VAR_15->ckData.dwDataOffset
   - VAR_17.cksize - 4 * sizeof(DWORD))
 return VAR_3;
      if (FUNC_6(VAR_15->hmmio, &VAR_17, 0) != VAR_8)
 return VAR_3;
      if (FUNC_9(VAR_15->hmmio, (HPSTR)&VAR_19, VAR_17.cksize) != VAR_17.cksize)
 return VAR_3;
      if (FUNC_5(VAR_15->hmmio, &VAR_17, 0) != VAR_8)
 return VAR_3;
    } else
      FUNC_0(": fact chunk is needed for non-pcm files -- currently no codec found, so skipped!\n");
  }


  if (FUNC_8(VAR_15->hmmio, 0, VAR_6) + 2 * sizeof(DWORD) < VAR_15->ckData.dwDataOffset) {
    VAR_17.ckid = VAR_10;
    VAR_17.cksize = 0;
    if (FUNC_6(VAR_15->hmmio, &VAR_17, 0) != VAR_8)
      return VAR_3;

    if (FUNC_8(VAR_15->hmmio, VAR_15->ckData.dwDataOffset
   - 2 * sizeof(DWORD), VAR_7) == -1)
      return VAR_3;
    if (FUNC_5(VAR_15->hmmio, &VAR_17, 0) != VAR_8)
      return VAR_3;
  }


  VAR_17.ckid = VAR_11;
  VAR_17.cksize = VAR_15->ckData.cksize;
  if (FUNC_6(VAR_15->hmmio, &VAR_17, 0) != VAR_8)
    return VAR_3;
  if (FUNC_8(VAR_15->hmmio, VAR_15->ckData.cksize, VAR_6) == -1)
    return VAR_3;
  if (FUNC_5(VAR_15->hmmio, &VAR_17, 0) != VAR_8)
    return VAR_3;


  if (VAR_15->extra.lp != ((void*)0) && VAR_15->extra.cb > 0) {

    if (FUNC_9(VAR_15->hmmio, VAR_15->extra.lp, VAR_15->extra.cb) != VAR_15->extra.cb)
      return VAR_3;
  }


  if (FUNC_5(VAR_15->hmmio, &VAR_16, 0) != VAR_8)
    return VAR_3;
  if (FUNC_7(VAR_15->hmmio, 0) != VAR_8)
    return VAR_3;

  return VAR_4;
}
