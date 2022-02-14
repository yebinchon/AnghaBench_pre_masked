
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_7__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;
typedef struct TYPE_15__ TYPE_14__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_16__ {TYPE_14__* header_; int height_; int width_; int * img_; } ;
typedef TYPE_1__ WebPMuxImage ;
struct TYPE_20__ {scalar_t__ size; int * bytes; } ;
struct TYPE_17__ {scalar_t__ id; int x_offset; int y_offset; scalar_t__ duration; int dispose_method; TYPE_7__ bitstream; } ;
typedef TYPE_2__ WebPMuxFrameInfo ;
typedef scalar_t__ WebPMuxError ;
struct TYPE_18__ {TYPE_1__* images_; } ;
typedef TYPE_3__ WebPMux ;
typedef int WebPData ;
struct TYPE_19__ {scalar_t__ tag; } ;
struct TYPE_15__ {int tag_; } ;


 scalar_t__ FUNC_0 (int *,int,scalar_t__ const,TYPE_14__**) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ,int ,TYPE_2__*,int *) ;
 size_t VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (TYPE_1__*) ;
 scalar_t__ FUNC_4 (TYPE_1__*,TYPE_1__**) ;
 int FUNC_5 (TYPE_1__*) ;
 scalar_t__ FUNC_6 (TYPE_7__*,int,TYPE_1__*) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int ) ;
 TYPE_4__* VAR_8 ;

WebPMuxError FUNC_9(WebPMux* VAR_9, const WebPMuxFrameInfo* VAR_10,
                              int VAR_11) {
  WebPMuxImage VAR_12;
  WebPMuxError VAR_13;


  if (VAR_9 == ((void*)0) || VAR_10 == ((void*)0)) return VAR_6;

  if (VAR_10->id != VAR_4) return VAR_6;

  if (VAR_10->bitstream.bytes == ((void*)0) ||
      VAR_10->bitstream.size > VAR_1) {
    return VAR_6;
  }

  if (VAR_9->images_ != ((void*)0)) {
    const WebPMuxImage* const VAR_14 = VAR_9->images_;
    const uint32_t VAR_15 = (VAR_14->header_ != ((void*)0)) ?
        FUNC_1(VAR_14->header_->tag_) : VAR_5;
    if (VAR_15 != VAR_10->id) {
      return VAR_6;
    }
  }

  FUNC_3(&VAR_12);
  VAR_13 = FUNC_6(&VAR_10->bitstream, VAR_11, &VAR_12);
  if (VAR_13 != VAR_7) goto Err;
  FUNC_8(VAR_12.img_ != ((void*)0));

  {
    WebPData VAR_16;
    const uint32_t VAR_17 = VAR_8[VAR_0].tag;
    WebPMuxFrameInfo VAR_18 = *VAR_10;
    VAR_18.x_offset &= ~1;
    VAR_18.y_offset &= ~1;
    if (VAR_18.x_offset < 0 || VAR_18.x_offset >= VAR_3 ||
        VAR_18.y_offset < 0 || VAR_18.y_offset >= VAR_3 ||
        (VAR_18.duration < 0 || VAR_18.duration >= VAR_2) ||
        VAR_18.dispose_method != (VAR_18.dispose_method & 1)) {
      VAR_13 = VAR_6;
      goto Err;
    }
    VAR_13 = FUNC_2(VAR_12.width_, VAR_12.height_, &VAR_18, &VAR_16);
    if (VAR_13 != VAR_7) goto Err;

    VAR_13 = FUNC_0(&VAR_16, 1, VAR_17, &VAR_12.header_);
    FUNC_7(&VAR_16);
    if (VAR_13 != VAR_7) goto Err;
  }


  VAR_13 = FUNC_4(&VAR_12, &VAR_9->images_);
  if (VAR_13 != VAR_7) goto Err;


  return VAR_7;

 Err:
  FUNC_5(&VAR_12);
  return VAR_13;
}
