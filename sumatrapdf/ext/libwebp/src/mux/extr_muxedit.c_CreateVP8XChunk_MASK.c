
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_33__ TYPE_9__ ;
typedef struct TYPE_32__ TYPE_8__ ;
typedef struct TYPE_31__ TYPE_7__ ;
typedef struct TYPE_30__ TYPE_6__ ;
typedef struct TYPE_29__ TYPE_5__ ;
typedef struct TYPE_28__ TYPE_4__ ;
typedef struct TYPE_27__ TYPE_3__ ;
typedef struct TYPE_26__ TYPE_2__ ;
typedef struct TYPE_25__ TYPE_1__ ;
typedef struct TYPE_24__ TYPE_13__ ;
typedef struct TYPE_23__ TYPE_12__ ;
typedef struct TYPE_22__ TYPE_11__ ;
typedef struct TYPE_21__ TYPE_10__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct TYPE_21__ {TYPE_9__* header_; TYPE_2__* img_; } ;
typedef TYPE_10__ WebPMuxImage ;
typedef scalar_t__ WebPMuxError ;
struct TYPE_22__ {int canvas_width_; int canvas_height_; int * unknown_; TYPE_8__* xmp_; TYPE_6__* exif_; TYPE_4__* iccp_; TYPE_10__* images_; } ;
typedef TYPE_11__ WebPMux ;
struct TYPE_23__ {int member_1; int * member_0; } ;
typedef TYPE_12__ WebPData ;
struct TYPE_33__ {scalar_t__ tag_; } ;
struct TYPE_31__ {int * bytes; } ;
struct TYPE_32__ {TYPE_7__ data_; } ;
struct TYPE_29__ {int * bytes; } ;
struct TYPE_30__ {TYPE_5__ data_; } ;
struct TYPE_27__ {int * bytes; } ;
struct TYPE_28__ {TYPE_3__ data_; } ;
struct TYPE_25__ {int * bytes; } ;
struct TYPE_26__ {TYPE_1__ data_; } ;
struct TYPE_24__ {scalar_t__ tag; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (TYPE_11__* const,int*,int*) ;
 int VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_1 (TYPE_11__* const,scalar_t__) ;
 scalar_t__ FUNC_2 (TYPE_10__ const*) ;
 scalar_t__ FUNC_3 (TYPE_10__ const*,int ) ;
 scalar_t__ FUNC_4 (TYPE_11__* const,scalar_t__,TYPE_12__ const*,int) ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (int *,int ) ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int FUNC_7 (int ) ;
 TYPE_13__* VAR_13 ;

__attribute__((used)) static WebPMuxError FUNC_8(WebPMux* const VAR_14) {
  WebPMuxError VAR_15 = VAR_11;
  uint32_t VAR_16 = 0;
  int VAR_17 = 0;
  int VAR_18 = 0;
  uint8_t VAR_19[VAR_7];
  const WebPData VAR_20 = { VAR_19, &VAR_7 };
  const WebPMuxImage* VAR_21 = ((void*)0);

  FUNC_7(VAR_14 != ((void*)0));
  VAR_21 = VAR_14->images_;
  if (VAR_21 == ((void*)0) || VAR_21->img_ == ((void*)0) ||
      VAR_21->img_->data_.bytes == ((void*)0)) {
    return VAR_9;
  }



  VAR_15 = FUNC_1(VAR_14, VAR_13[VAR_5].tag);
  if (VAR_15 != VAR_11 && VAR_15 != VAR_10) return VAR_15;


  if (VAR_14->iccp_ != ((void*)0) && VAR_14->iccp_->data_.bytes != ((void*)0)) {
    VAR_16 |= VAR_3;
  }
  if (VAR_14->exif_ != ((void*)0) && VAR_14->exif_->data_.bytes != ((void*)0)) {
    VAR_16 |= VAR_2;
  }
  if (VAR_14->xmp_ != ((void*)0) && VAR_14->xmp_->data_.bytes != ((void*)0)) {
    VAR_16 |= VAR_12;
  }
  if (VAR_21->header_ != ((void*)0)) {
    if (VAR_21->header_->tag_ == VAR_13[VAR_4].tag) {

      VAR_16 |= VAR_1;
    }
  }
  if (FUNC_3(VAR_21, VAR_8) > 0) {
    VAR_16 |= VAR_0;
  }

  VAR_15 = FUNC_0(VAR_14, &VAR_17, &VAR_18);
  if (VAR_15 != VAR_11) return VAR_15;

  if (VAR_17 <= 0 || VAR_18 <= 0) {
    return VAR_9;
  }
  if (VAR_17 > VAR_6 || VAR_18 > VAR_6) {
    return VAR_9;
  }

  if (VAR_14->canvas_width_ != 0 || VAR_14->canvas_height_ != 0) {
    if (VAR_17 > VAR_14->canvas_width_ || VAR_18 > VAR_14->canvas_height_) {
      return VAR_9;
    }
    VAR_17 = VAR_14->canvas_width_;
    VAR_18 = VAR_14->canvas_height_;
  }

  if (VAR_16 == 0 && VAR_14->unknown_ == ((void*)0)) {

    return VAR_11;
  }

  if (FUNC_2(VAR_21)) {



    VAR_16 |= VAR_0;
  }

  FUNC_6(VAR_19 + 0, VAR_16);
  FUNC_5(VAR_19 + 4, VAR_17 - 1);
  FUNC_5(VAR_19 + 7, VAR_18 - 1);

  return FUNC_4(VAR_14, VAR_13[VAR_5].tag, &VAR_20, 1);
}
