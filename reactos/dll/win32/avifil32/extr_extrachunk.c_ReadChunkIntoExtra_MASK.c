
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ cb; scalar_t__* lp; } ;
struct TYPE_5__ {scalar_t__ cksize; int dwDataOffset; scalar_t__ ckid; } ;
typedef TYPE_1__ MMCKINFO ;
typedef TYPE_2__* LPEXTRACHUNKS ;
typedef scalar_t__* LPDWORD ;
typedef scalar_t__ LPBYTE ;
typedef scalar_t__ LONG ;
typedef int HRESULT ;
typedef int HPSTR ;
typedef int * HMMIO ;
typedef int DWORD ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 () ;
 int VAR_3 ;
 scalar_t__* FUNC_1 (int ,int ,int) ;
 scalar_t__* FUNC_2 (int ,int ,scalar_t__*,scalar_t__) ;
 int VAR_4 ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int *,int ,scalar_t__) ;
 int FUNC_5 (int *,int ,int ) ;

HRESULT FUNC_6(LPEXTRACHUNKS VAR_5,HMMIO VAR_6,const MMCKINFO *VAR_7)
{
  LPDWORD VAR_8;
  DWORD VAR_9;


  FUNC_3(VAR_5 != ((void*)0));
  FUNC_3(VAR_6 != ((void*)0));
  FUNC_3(VAR_7 != ((void*)0));

  VAR_9 = VAR_7->cksize + 2 * sizeof(DWORD);
  VAR_9 += (VAR_9 & 1);

  if (VAR_5->lp != ((void*)0))
    VAR_8 = FUNC_2(FUNC_0(), VAR_3, VAR_5->lp, VAR_5->cb + VAR_9);
  else
    VAR_8 = FUNC_1(FUNC_0(), VAR_3, VAR_9);

  if (VAR_8 == ((void*)0))
    return VAR_1;

  VAR_5->lp = VAR_8;
  VAR_8 = (LPDWORD) ((LPBYTE)VAR_8 + VAR_5->cb);
  VAR_5->cb += VAR_9;


  VAR_8[0] = VAR_7->ckid;
  VAR_8[1] = VAR_7->cksize;

  if (VAR_7->cksize > 0) {
    if (FUNC_5(VAR_6, VAR_7->dwDataOffset, VAR_4) == -1)
      return VAR_0;
    if (FUNC_4(VAR_6, (HPSTR)&VAR_8[2], VAR_7->cksize) != (LONG)VAR_7->cksize)
      return VAR_0;
  }

  return VAR_2;
}
