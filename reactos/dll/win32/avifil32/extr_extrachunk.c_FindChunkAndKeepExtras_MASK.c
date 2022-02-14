
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int UINT ;
struct TYPE_12__ {int cb; int lp; } ;
struct TYPE_11__ {scalar_t__ ckid; scalar_t__ fccType; } ;
typedef scalar_t__ MMRESULT ;
typedef TYPE_1__ MMCKINFO ;
typedef TYPE_2__* LPEXTRACHUNKS ;
typedef int HRESULT ;
typedef int * HMMIO ;
typedef scalar_t__ FOURCC ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_1 (TYPE_2__*,int *,TYPE_1__*) ;
 int FUNC_2 (char*,scalar_t__,scalar_t__,...) ;
 int FUNC_3 (int ) ;
 scalar_t__ VAR_9 ;
 scalar_t__ FUNC_4 (int *,TYPE_1__*,int ) ;
 scalar_t__ FUNC_5 (int *,TYPE_1__*,TYPE_1__*,int ) ;
 scalar_t__ FUNC_6 (char,char,char,char) ;

HRESULT FUNC_7(LPEXTRACHUNKS VAR_10,HMMIO VAR_11,MMCKINFO *VAR_12,
          MMCKINFO *VAR_13,UINT VAR_14)
{
  FOURCC VAR_15;
  FOURCC VAR_16;
  MMRESULT VAR_17;


  FUNC_3(VAR_10 != ((void*)0));
  FUNC_3(VAR_11 != ((void*)0));
  FUNC_3(VAR_12 != ((void*)0));

  FUNC_2("({%p,%u},%p,%p,%p,0x%X)\n", VAR_10->lp, VAR_10->cb, VAR_11, VAR_12,
 VAR_13, VAR_14);


  if (VAR_14 & VAR_5) {
    VAR_15 = VAR_12->ckid;
    VAR_16 = 0;
  } else if (VAR_14 & VAR_6) {
    VAR_15 = VAR_2;
    VAR_16 = VAR_12->fccType;
  } else if (VAR_14 & VAR_7) {
    VAR_15 = VAR_3;
    VAR_16 = VAR_12->fccType;
  } else
    VAR_15 = VAR_16 = (FOURCC)-1;

  FUNC_2(": find ckid=0x%08X fccType=0x%08X\n", VAR_15, VAR_16);

  for (;;) {
    VAR_17 = FUNC_5(VAR_11, VAR_12, VAR_13, 0);
    if (VAR_17 != VAR_8) {

      if (VAR_14 == 0 && VAR_17 == VAR_4)
 return VAR_1;
      else
        return VAR_0;
    }


    if ((VAR_12->ckid == VAR_15) &&
 (VAR_16 == 0 || VAR_12->fccType == VAR_16))
      return VAR_1;


    if (VAR_12->ckid == VAR_9 ||
 VAR_12->ckid == FUNC_6('p','a','d','d'))
    {
      VAR_17 = FUNC_4(VAR_11, VAR_12, 0);
      if (VAR_17 != VAR_8) return VAR_0;
    }
    else
    {
      HRESULT VAR_18 = FUNC_1(VAR_10, VAR_11, VAR_12);
      if (FUNC_0(VAR_18))
        return VAR_18;
    }
  }
}
