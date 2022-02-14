
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_9__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ width_; scalar_t__ height_; TYPE_9__* header_; } ;
typedef TYPE_1__ WebPMuxImage ;
typedef scalar_t__ WebPMuxError ;
struct TYPE_11__ {scalar_t__ canvas_width_; scalar_t__ canvas_height_; int images_; } ;
typedef TYPE_2__ WebPMux ;
struct TYPE_13__ {scalar_t__ tag_; } ;
struct TYPE_12__ {scalar_t__ tag; int id; } ;


 int FUNC_0 (TYPE_9__*) ;
 size_t VAR_0 ;
 size_t VAR_1 ;
 scalar_t__ FUNC_1 (TYPE_2__* const,scalar_t__) ;
 scalar_t__ FUNC_2 (TYPE_1__ const**,int,TYPE_1__**) ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_3 (TYPE_2__* const,int ,int*) ;
 int FUNC_4 (int) ;
 TYPE_3__* VAR_3 ;

__attribute__((used)) static WebPMuxError FUNC_5(WebPMux* const VAR_4) {
  int VAR_5;
  int VAR_6;




  WebPMuxError VAR_7 = FUNC_3(VAR_4, VAR_3[VAR_1].id, &VAR_5);
  if (VAR_7 != VAR_2) return VAR_7;
  if (VAR_5 == 1) {
    WebPMuxImage* VAR_8 = ((void*)0);
    VAR_7 = FUNC_2((const WebPMuxImage**)&VAR_4->images_, 1, &VAR_8);
    FUNC_4(VAR_7 == VAR_2);
    FUNC_4(VAR_8 != ((void*)0));
    if (VAR_8->header_ != ((void*)0) &&
        ((VAR_4->canvas_width_ == 0 && VAR_4->canvas_height_ == 0) ||
         (VAR_8->width_ == VAR_4->canvas_width_ &&
          VAR_8->height_ == VAR_4->canvas_height_))) {
      FUNC_4(VAR_8->header_->tag_ == VAR_3[VAR_1].tag);
      FUNC_0(VAR_8->header_);
      VAR_8->header_ = ((void*)0);
      VAR_5 = 0;
    }
  }

  VAR_7 = FUNC_3(VAR_4, VAR_3[VAR_0].id, &VAR_6);
  if (VAR_7 != VAR_2) return VAR_7;
  if (VAR_6 >= 1 && VAR_5 == 0) {
    VAR_7 = FUNC_1(VAR_4, VAR_3[VAR_0].tag);
    if (VAR_7 != VAR_2) return VAR_7;
  }
  return VAR_2;
}
