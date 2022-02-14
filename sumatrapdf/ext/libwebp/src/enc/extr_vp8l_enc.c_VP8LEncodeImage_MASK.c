
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_4__ ;
typedef struct TYPE_23__ TYPE_3__ ;
typedef struct TYPE_22__ TYPE_2__ ;
typedef struct TYPE_21__ TYPE_1__ ;


struct TYPE_21__ {int width; int height; TYPE_3__* const extra_info; TYPE_3__* stats; int * argb; } ;
typedef TYPE_1__ WebPPicture ;
typedef scalar_t__ WebPEncodingError ;
struct TYPE_22__ {scalar_t__ image_hint; } ;
typedef TYPE_2__ WebPConfig ;
struct TYPE_23__ {float* PSNR; int coded_size; int lossless_size; } ;
typedef TYPE_3__ WebPAuxStats ;
struct TYPE_24__ {scalar_t__ error_; } ;
typedef TYPE_4__ VP8LBitWriter ;


 int FUNC_0 (TYPE_4__*,int) ;
 int FUNC_1 (TYPE_4__*) ;
 scalar_t__ FUNC_2 (TYPE_2__ const* const,TYPE_1__ const* const,TYPE_4__*,int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_3 (TYPE_1__ const* const,scalar_t__) ;
 int FUNC_4 (TYPE_1__ const* const) ;
 int FUNC_5 (TYPE_1__ const* const,int,int*) ;
 scalar_t__ FUNC_6 (TYPE_1__ const* const,TYPE_4__*,size_t*) ;
 int FUNC_7 (TYPE_1__ const* const,TYPE_4__*) ;
 int FUNC_8 (TYPE_4__*,int) ;
 int FUNC_9 (TYPE_3__* const,int ,int const) ;

int FUNC_10(const WebPConfig* const VAR_5,
                    const WebPPicture* const VAR_6) {
  int VAR_7, VAR_8;
  int VAR_9;
  size_t VAR_10;
  int VAR_11 = 0;
  int VAR_12;
  WebPEncodingError VAR_13 = VAR_3;
  VP8LBitWriter VAR_14;

  if (VAR_6 == ((void*)0)) return 0;

  if (VAR_5 == ((void*)0) || VAR_6->argb == ((void*)0)) {
    VAR_13 = VAR_0;
    FUNC_3(VAR_6, VAR_13);
    return 0;
  }

  VAR_7 = VAR_6->width;
  VAR_8 = VAR_6->height;


  VAR_12 = (VAR_5->image_hint == VAR_4) ?
      VAR_7 * VAR_8 : VAR_7 * VAR_8 * 2;
  if (!FUNC_0(&VAR_14, VAR_12)) {
    VAR_13 = VAR_1;
    goto Error;
  }

  if (!FUNC_5(VAR_6, 1, &VAR_11)) {
 UserAbort:
    VAR_13 = VAR_2;
    goto Error;
  }

  if (VAR_6->stats != ((void*)0)) {
    WebPAuxStats* const VAR_15 = VAR_6->stats;
    FUNC_9(VAR_15, 0, sizeof(*VAR_15));
    VAR_15->PSNR[0] = 99.f;
    VAR_15->PSNR[1] = 99.f;
    VAR_15->PSNR[2] = 99.f;
    VAR_15->PSNR[3] = 99.f;
    VAR_15->PSNR[4] = 99.f;
  }


  if (!FUNC_7(VAR_6, &VAR_14)) {
    VAR_13 = VAR_1;
    goto Error;
  }

  VAR_9 = FUNC_4(VAR_6);

  if (!FUNC_8(&VAR_14, VAR_9)) {
    VAR_13 = VAR_1;
    goto Error;
  }

  if (!FUNC_5(VAR_6, 5, &VAR_11)) goto UserAbort;


  VAR_13 = FUNC_2(VAR_5, VAR_6, &VAR_14, 1 );
  if (VAR_13 != VAR_3) goto Error;

  if (!FUNC_5(VAR_6, 90, &VAR_11)) goto UserAbort;


  VAR_13 = FUNC_6(VAR_6, &VAR_14, &VAR_10);
  if (VAR_13 != VAR_3) goto Error;

  if (!FUNC_5(VAR_6, 100, &VAR_11)) goto UserAbort;



  if (VAR_6->stats != ((void*)0)) {
    VAR_6->stats->coded_size += (int)VAR_10;
    VAR_6->stats->lossless_size = (int)VAR_10;
  }


  if (VAR_6->extra_info != ((void*)0)) {
    const int VAR_16 = (VAR_7 + 15) >> 4;
    const int VAR_17 = (VAR_8 + 15) >> 4;
    FUNC_9(VAR_6->extra_info, 0, VAR_16 * VAR_17 * sizeof(*VAR_6->extra_info));
  }

 Error:
  if (VAR_14.error_) VAR_13 = VAR_1;
  FUNC_1(&VAR_14);
  if (VAR_13 != VAR_3) {
    FUNC_3(VAR_6, VAR_13);
    return 0;
  }
  return 1;
}
