
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_10__ {TYPE_1__* header_; } ;
typedef TYPE_2__ WebPMuxImage ;
struct TYPE_11__ {int x_offset; int y_offset; int duration; int bitstream; int id; int blend_method; int dispose_method; } ;
typedef TYPE_3__ WebPMuxFrameInfo ;
typedef int WebPMuxError ;
struct TYPE_12__ {scalar_t__ size; int* bytes; } ;
typedef TYPE_4__ WebPData ;
struct TYPE_13__ {scalar_t__ tag; scalar_t__ size; } ;
struct TYPE_9__ {scalar_t__ tag_; TYPE_4__ data_; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int*) ;
 size_t VAR_0 ;
 int FUNC_2 (TYPE_2__ const* const,int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (int ) ;
 TYPE_5__* VAR_7 ;

__attribute__((used)) static WebPMuxError FUNC_4(const WebPMuxImage* const VAR_8,
                                        WebPMuxFrameInfo* const VAR_9) {
  const int VAR_10 = (VAR_8->header_->tag_ == VAR_7[VAR_0].tag);
  const WebPData* VAR_11;
  if (!VAR_10) return VAR_5;
  FUNC_3(VAR_8->header_ != ((void*)0));

  VAR_11 = &VAR_8->header_->data_;
  if (VAR_11->size < VAR_7[VAR_0].size) return VAR_1;

  VAR_9->x_offset = 2 * FUNC_1(VAR_11->bytes + 0);
  VAR_9->y_offset = 2 * FUNC_1(VAR_11->bytes + 3);
  {
    const uint8_t VAR_12 = VAR_11->bytes[15];
    VAR_9->duration = FUNC_1(VAR_11->bytes + 12);
    VAR_9->dispose_method =
        (VAR_12 & 1) ? VAR_3 : VAR_4;
    VAR_9->blend_method = (VAR_12 & 2) ? VAR_6 : VAR_2;
  }
  VAR_9->id = FUNC_0(VAR_8->header_->tag_);
  return FUNC_2(VAR_8, &VAR_9->bitstream);
}
