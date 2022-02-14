
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_9__ {scalar_t__ type_; } ;
typedef TYPE_2__ VP8LTransform ;
struct TYPE_10__ {int last_row_; int const width_; int next_transform_; int last_out_row_; TYPE_2__* transforms_; scalar_t__ pixels_; TYPE_1__* io_; } ;
typedef TYPE_3__ VP8LDecoder ;
struct TYPE_11__ {scalar_t__ filter_; int * output_; } ;
struct TYPE_8__ {int crop_top; int crop_bottom; int width; scalar_t__ opaque; } ;
typedef TYPE_4__ ALPHDecoder ;


 int FUNC_0 (TYPE_4__* const,int const,int,int *,int const) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (TYPE_2__* const,int const,int,int const* const,int *) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (int) ;

__attribute__((used)) static void FUNC_3(VP8LDecoder* const VAR_3, int VAR_4) {


  ALPHDecoder* const VAR_5 = (ALPHDecoder*)VAR_3->io_->opaque;
  const int VAR_6 =
      (VAR_5->filter_ == VAR_2 ||
       VAR_5->filter_ == VAR_1) ? VAR_3->io_->crop_top
                                                    : VAR_3->last_row_;
  const int VAR_7 = (VAR_3->last_row_ < VAR_6) ? VAR_6 : VAR_3->last_row_;
  FUNC_2(VAR_4 <= VAR_3->io_->crop_bottom);
  if (VAR_4 > VAR_7) {

    const int VAR_8 = VAR_3->io_->width;
    uint8_t* VAR_9 = VAR_5->output_ + VAR_8 * VAR_7;
    const uint8_t* const VAR_10 =
      (uint8_t*)VAR_3->pixels_ + VAR_3->width_ * VAR_7;
    VP8LTransform* const VAR_11 = &VAR_3->transforms_[0];
    FUNC_2(VAR_3->next_transform_ == 1);
    FUNC_2(VAR_11->type_ == VAR_0);
    FUNC_1(VAR_11, VAR_7, VAR_4,
                                        VAR_10, VAR_9);
    FUNC_0(VAR_5, VAR_7, VAR_4, VAR_9, VAR_8);
  }
  VAR_3->last_row_ = VAR_3->last_out_row_ = VAR_4;
}
