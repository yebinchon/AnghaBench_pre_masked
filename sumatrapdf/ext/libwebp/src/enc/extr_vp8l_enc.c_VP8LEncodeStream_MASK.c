
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_28__ TYPE_6__ ;
typedef struct TYPE_27__ TYPE_5__ ;
typedef struct TYPE_26__ TYPE_4__ ;
typedef struct TYPE_25__ TYPE_3__ ;
typedef struct TYPE_24__ TYPE_2__ ;
typedef struct TYPE_23__ TYPE_1__ ;


typedef int stats_side ;
struct TYPE_23__ {int (* Sync ) (TYPE_2__*) ;int (* End ) (TYPE_2__*) ;int (* Execute ) (TYPE_2__*) ;int (* Launch ) (TYPE_2__*) ;int (* Reset ) (TYPE_2__*) ;int (* Init ) (TYPE_2__* const) ;} ;
typedef TYPE_1__ WebPWorkerInterface ;
struct TYPE_24__ {int hook; int * data2; TYPE_6__* data1; } ;
typedef TYPE_2__ WebPWorker ;
struct TYPE_25__ {int * stats; } ;
typedef TYPE_3__ WebPPicture ;
typedef void* WebPEncodingError ;
struct TYPE_26__ {scalar_t__ thread_level; } ;
typedef TYPE_4__ WebPConfig ;
typedef int WebPAuxStats ;
struct TYPE_27__ {int * palette_; int palette_size_; int transform_bits_; int histo_bits_; } ;
typedef TYPE_5__ VP8LEncoder ;
typedef int VP8LBitWriter ;
struct TYPE_28__ {int num_crunch_configs_; int use_cache_; int red_and_blue_always_zero_; void* err_; TYPE_5__* enc_; int * bw_; int * stats_; TYPE_3__* picture_; TYPE_4__* config_; void** crunch_configs_; } ;
typedef TYPE_6__ StreamEncodeContext ;
typedef void* CrunchConfig ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_5__* const,void**,int*,int*) ;
 int FUNC_1 (TYPE_5__* const) ;
 int FUNC_2 (int * const,int *) ;
 int FUNC_3 (int *,int ) ;
 scalar_t__ FUNC_4 (int * const) ;
 int FUNC_5 (int * const,int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (TYPE_5__* const) ;
 void* FUNC_8 (TYPE_4__ const* const,TYPE_3__ const* const) ;
 void* VAR_2 ;
 void* VAR_3 ;
 TYPE_1__* FUNC_9 () ;
 int FUNC_10 (int *,int *,int) ;
 int FUNC_11 (TYPE_2__* const) ;
 int FUNC_12 (TYPE_2__*) ;
 int FUNC_13 (TYPE_2__*) ;
 int FUNC_14 (TYPE_2__*) ;
 int FUNC_15 (TYPE_2__*) ;
 int FUNC_16 (TYPE_2__*) ;
 int FUNC_17 (TYPE_2__*) ;
 int FUNC_18 (TYPE_2__*) ;

WebPEncodingError FUNC_19(const WebPConfig* const VAR_4,
                                   const WebPPicture* const VAR_5,
                                   VP8LBitWriter* const VAR_6,
                                   int VAR_7) {
  WebPEncodingError VAR_8 = VAR_3;
  VP8LEncoder* const VAR_9 = FUNC_8(VAR_4, VAR_5);
  VP8LEncoder* VAR_10 = ((void*)0);
  CrunchConfig VAR_11[VAR_0];
  int VAR_12, VAR_13 = 0;
  int VAR_14;
  int VAR_15 = 0;
  WebPWorker VAR_16, VAR_17;
  StreamEncodeContext VAR_18, VAR_19;

  WebPAuxStats VAR_20;
  VP8LBitWriter VAR_21;
  const WebPWorkerInterface* const VAR_22 = FUNC_9();
  int VAR_23;


  if (VAR_9 == ((void*)0) ||
      !FUNC_0(VAR_9, VAR_11, &VAR_12,
                      &VAR_15) ||
      !FUNC_1(VAR_9) || !FUNC_3(&VAR_21, 0)) {
    VAR_8 = VAR_2;
    goto Error;
  }


  if (VAR_4->thread_level > 0) {
    VAR_13 = VAR_12 / 2;
    for (VAR_14 = 0; VAR_14 < VAR_13; ++VAR_14) {
      VAR_19.crunch_configs_[VAR_14] =
          VAR_11[VAR_12 - VAR_13 +
                         VAR_14];
    }
    VAR_19.num_crunch_configs_ = VAR_13;
  }
  VAR_12 -= VAR_13;
  for (VAR_14 = 0; VAR_14 < VAR_12; ++VAR_14) {
    VAR_18.crunch_configs_[VAR_14] = VAR_11[VAR_14];
  }
  VAR_18.num_crunch_configs_ = VAR_12;


  {
    const int VAR_24 = (VAR_13 > 0) ? 2 : 1;
    for (VAR_14 = 0; VAR_14 < VAR_24; ++VAR_14) {

      WebPWorker* const VAR_25 = (VAR_14 == 0) ? &VAR_16 : &VAR_17;
      StreamEncodeContext* const VAR_26 =
          (VAR_14 == 0) ? &VAR_18 : &VAR_19;
      VAR_26->config_ = VAR_4;
      VAR_26->picture_ = VAR_5;
      VAR_26->use_cache_ = VAR_7;
      VAR_26->red_and_blue_always_zero_ = VAR_15;
      if (VAR_14 == 0) {
        VAR_26->stats_ = VAR_5->stats;
        VAR_26->bw_ = VAR_6;
        VAR_26->enc_ = VAR_9;
      } else {
        VAR_26->stats_ = (VAR_5->stats == ((void*)0)) ? ((void*)0) : &VAR_20;

        if (!FUNC_2(VAR_6, &VAR_21)) {
          VAR_8 = VAR_2;
          goto Error;
        }
        VAR_26->bw_ = &VAR_21;

        VAR_10 = FUNC_8(VAR_4, VAR_5);
        if (VAR_10 == ((void*)0) || !FUNC_1(VAR_10)) {
          VAR_8 = VAR_2;
          goto Error;
        }

        VAR_10->histo_bits_ = VAR_9->histo_bits_;
        VAR_10->transform_bits_ = VAR_9->transform_bits_;
        VAR_10->palette_size_ = VAR_9->palette_size_;
        FUNC_10(VAR_10->palette_, VAR_9->palette_,
               sizeof(VAR_9->palette_));
        VAR_26->enc_ = VAR_10;
      }

      VAR_22->Init(VAR_25);
      VAR_25->data1 = VAR_26;
      VAR_25->data2 = ((void*)0);
      VAR_25->hook = VAR_1;
    }
  }


  if (VAR_13 != 0) {
    if (!VAR_22->Reset(&VAR_17)) {
      VAR_8 = VAR_2;
      goto Error;
    }



    if (VAR_5->stats != ((void*)0)) {
      FUNC_10(&VAR_20, VAR_5->stats, sizeof(VAR_20));
    }


    VAR_19.err_ = VAR_3;
    VAR_22->Launch(&VAR_17);
  }

  VAR_22->Execute(&VAR_16);
  VAR_23 = VAR_22->Sync(&VAR_16);
  VAR_22->End(&VAR_16);
  if (VAR_13 != 0) {

    const int VAR_27 = VAR_22->Sync(&VAR_17);
    VAR_22->End(&VAR_17);
    if (!VAR_23 || !VAR_27) {
      VAR_8 = VAR_23 ? VAR_19.err_ : VAR_18.err_;
      goto Error;
    }
    if (FUNC_4(&VAR_21) < FUNC_4(VAR_6)) {
      FUNC_5(VAR_6, &VAR_21);

      if (VAR_5->stats != ((void*)0)) {
        FUNC_10(VAR_5->stats, &VAR_20, sizeof(*VAR_5->stats));
      }

    }
  } else {
    if (!VAR_23) {
      VAR_8 = VAR_18.err_;
      goto Error;
    }
  }

Error:
  FUNC_6(&VAR_21);
  FUNC_7(VAR_9);
  FUNC_7(VAR_10);
  return VAR_8;
}
