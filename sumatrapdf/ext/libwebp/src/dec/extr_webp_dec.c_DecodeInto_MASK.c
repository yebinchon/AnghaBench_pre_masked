
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_32__ TYPE_9__ ;
typedef struct TYPE_31__ TYPE_5__ ;
typedef struct TYPE_30__ TYPE_4__ ;
typedef struct TYPE_29__ TYPE_3__ ;
typedef struct TYPE_28__ TYPE_2__ ;
typedef struct TYPE_27__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_27__ {size_t data_size; int have_all_data; int offset; int alpha_data_size; int alpha_data; int is_lossless; int * data; } ;
typedef TYPE_1__ WebPHeaderStructure ;
struct TYPE_28__ {int output; TYPE_9__* options; } ;
typedef TYPE_2__ WebPDecParams ;
typedef scalar_t__ VP8StatusCode ;
struct TYPE_29__ {scalar_t__ status_; } ;
typedef TYPE_3__ VP8LDecoder ;
struct TYPE_30__ {int data_size; int height; int width; int * data; } ;
typedef TYPE_4__ VP8Io ;
struct TYPE_31__ {scalar_t__ status_; int mt_method_; int alpha_data_size_; int alpha_data_; } ;
typedef TYPE_5__ VP8Decoder ;
struct TYPE_32__ {scalar_t__ flip; } ;


 int FUNC_0 (TYPE_5__* const,TYPE_4__*) ;
 int FUNC_1 (TYPE_5__* const) ;
 int FUNC_2 (TYPE_5__* const,TYPE_4__*) ;
 int FUNC_3 (TYPE_9__*,TYPE_1__*,int ,int ) ;
 int FUNC_4 (TYPE_9__*,TYPE_5__* const) ;
 int FUNC_5 (TYPE_4__*) ;
 int FUNC_6 (TYPE_3__* const,TYPE_4__*) ;
 int FUNC_7 (TYPE_3__* const) ;
 int FUNC_8 (TYPE_3__* const) ;
 TYPE_3__* FUNC_9 () ;
 TYPE_5__* FUNC_10 () ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_11 (int ,int ,TYPE_9__*,int ) ;
 scalar_t__ FUNC_12 (int ) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (TYPE_2__* const,TYPE_4__*) ;
 scalar_t__ FUNC_15 (TYPE_1__*) ;
 int FUNC_16 (int ) ;

__attribute__((used)) static VP8StatusCode FUNC_17(const uint8_t* const VAR_2, size_t VAR_3,
                                WebPDecParams* const VAR_4) {
  VP8StatusCode VAR_5;
  VP8Io VAR_6;
  WebPHeaderStructure VAR_7;

  VAR_7.data = VAR_2;
  VAR_7.data_size = VAR_3;
  VAR_7.have_all_data = 1;
  VAR_5 = FUNC_15(&VAR_7);
  if (VAR_5 != VAR_0) {
    return VAR_5;
  }

  FUNC_16(VAR_4 != ((void*)0));
  FUNC_5(&VAR_6);
  VAR_6.data = VAR_7.data + VAR_7.offset;
  VAR_6.data_size = VAR_7.data_size - VAR_7.offset;
  FUNC_14(VAR_4, &VAR_6);

  if (!VAR_7.is_lossless) {
    VP8Decoder* const VAR_8 = FUNC_10();
    if (VAR_8 == ((void*)0)) {
      return VAR_1;
    }
    VAR_8->alpha_data_ = VAR_7.alpha_data;
    VAR_8->alpha_data_size_ = VAR_7.alpha_data_size;


    if (!FUNC_2(VAR_8, &VAR_6)) {
      VAR_5 = VAR_8->status_;
    } else {

      VAR_5 = FUNC_11(VAR_6.width, VAR_6.height, VAR_4->options,
                                     VAR_4->output);
      if (VAR_5 == VAR_0) {

        VAR_8->mt_method_ = FUNC_3(VAR_4->options, &VAR_7,
                                             VAR_6.width, VAR_6.height);
        FUNC_4(VAR_4->options, VAR_8);
        if (!FUNC_0(VAR_8, &VAR_6)) {
          VAR_5 = VAR_8->status_;
        }
      }
    }
    FUNC_1(VAR_8);
  } else {
    VP8LDecoder* const VAR_9 = FUNC_9();
    if (VAR_9 == ((void*)0)) {
      return VAR_1;
    }
    if (!FUNC_6(VAR_9, &VAR_6)) {
      VAR_5 = VAR_9->status_;
    } else {

      VAR_5 = FUNC_11(VAR_6.width, VAR_6.height, VAR_4->options,
                                     VAR_4->output);
      if (VAR_5 == VAR_0) {
        if (!FUNC_7(VAR_9)) {
          VAR_5 = VAR_9->status_;
        }
      }
    }
    FUNC_8(VAR_9);
  }

  if (VAR_5 != VAR_0) {
    FUNC_13(VAR_4->output);
  } else {
    if (VAR_4->options != ((void*)0) && VAR_4->options->flip) {


      VAR_5 = FUNC_12(VAR_4->output);
    }
  }
  return VAR_5;
}
