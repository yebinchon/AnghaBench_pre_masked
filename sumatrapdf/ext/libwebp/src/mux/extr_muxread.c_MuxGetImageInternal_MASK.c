
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {TYPE_1__* img_; } ;
typedef TYPE_2__ WebPMuxImage ;
struct TYPE_9__ {int duration; int bitstream; int id; int blend_method; int dispose_method; scalar_t__ y_offset; scalar_t__ x_offset; } ;
typedef TYPE_3__ WebPMuxFrameInfo ;
typedef int WebPMuxError ;
struct TYPE_7__ {int tag_; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_2__ const* const,int *) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static WebPMuxError FUNC_2(const WebPMuxImage* const VAR_2,
                                        WebPMuxFrameInfo* const VAR_3) {

  VAR_3->x_offset = 0;
  VAR_3->y_offset = 0;
  VAR_3->duration = 1;
  VAR_3->dispose_method = VAR_1;
  VAR_3->blend_method = VAR_0;

  VAR_3->id = FUNC_0(VAR_2->img_->tag_);
  return FUNC_1(VAR_2, &VAR_3->bitstream);
}
