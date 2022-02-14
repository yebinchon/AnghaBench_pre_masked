
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_14__ {int error_code; } ;
typedef TYPE_2__ WebPPicture ;
typedef int WebPEncodingError ;
struct TYPE_15__ {scalar_t__ filter_strength; scalar_t__ autofilter; int lossless; } ;
typedef TYPE_3__ WebPConfig ;
struct TYPE_13__ {scalar_t__ duration; int blend_method; int dispose_method; int y_offset; int x_offset; int id; } ;
struct TYPE_16__ {int y_offset_; int x_offset_; } ;
struct TYPE_17__ {int evaluate_; int mem_; TYPE_1__ info_; TYPE_4__ rect_; } ;
typedef TYPE_4__ FrameRectangle ;
typedef TYPE_5__ Candidate ;


 int FUNC_0 (TYPE_3__*,TYPE_2__* const,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_5__* const,int ,int) ;

__attribute__((used)) static WebPEncodingError FUNC_5(WebPPicture* const VAR_5,
                                         const FrameRectangle* const VAR_6,
                                         const WebPConfig* const VAR_7,
                                         int VAR_8,
                                         Candidate* const VAR_9) {
  WebPConfig VAR_10 = *VAR_7;
  WebPEncodingError VAR_11 = VAR_0;
  FUNC_3(VAR_9 != ((void*)0));
  FUNC_4(VAR_9, 0, sizeof(*VAR_9));


  VAR_9->rect_ = *VAR_6;
  VAR_9->info_.id = VAR_1;
  VAR_9->info_.x_offset = VAR_6->x_offset_;
  VAR_9->info_.y_offset = VAR_6->y_offset_;
  VAR_9->info_.dispose_method = VAR_3;
  VAR_9->info_.blend_method =
      VAR_8 ? VAR_2 : VAR_4;
  VAR_9->info_.duration = 0;


  FUNC_2(&VAR_9->mem_);

  if (!VAR_10.lossless && VAR_8) {


    VAR_10.autofilter = 0;
    VAR_10.filter_strength = 0;
  }
  if (!FUNC_0(&VAR_10, VAR_5, &VAR_9->mem_)) {
    VAR_11 = VAR_5->error_code;
    goto Err;
  }

  VAR_9->evaluate_ = 1;
  return VAR_11;

 Err:
  FUNC_1(&VAR_9->mem_);
  return VAR_11;
}
