
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int width_; int height_; int has_alpha_; int * alpha_; TYPE_3__* img_; } ;
typedef TYPE_1__ WebPMuxImage ;
struct TYPE_7__ {int size; int bytes; } ;
typedef TYPE_2__ WebPData ;
struct TYPE_8__ {scalar_t__ tag_; TYPE_2__ data_; } ;
typedef TYPE_3__ WebPChunk ;
struct TYPE_9__ {scalar_t__ tag; } ;


 int FUNC_0 (int *) ;
 size_t VAR_0 ;
 int FUNC_1 (int ,int ,int ,int*,int*) ;
 int FUNC_2 (int ,int ,int*,int*,int*) ;
 int FUNC_3 (int ) ;
 TYPE_4__* VAR_1 ;

int FUNC_4(WebPMuxImage* const VAR_2) {
  const WebPChunk* const VAR_3 = VAR_2->img_;
  const WebPData* const VAR_4 = &VAR_3->data_;
  const int VAR_5 = (VAR_3->tag_ == VAR_1[VAR_0].tag);
  int VAR_6, VAR_7;
  int VAR_8 = 0;
  const int VAR_9 = VAR_5 ?
      FUNC_2(VAR_4->bytes, VAR_4->size, &VAR_6, &VAR_7, &VAR_8) :
      FUNC_1(VAR_4->bytes, VAR_4->size, VAR_4->size, &VAR_6, &VAR_7);
  FUNC_3(VAR_3 != ((void*)0));
  if (VAR_9) {

    if (VAR_5 && (VAR_2->alpha_ != ((void*)0))) {
      FUNC_0(VAR_2->alpha_);
      VAR_2->alpha_ = ((void*)0);
    }
    VAR_2->width_ = VAR_6;
    VAR_2->height_ = VAR_7;
    VAR_2->has_alpha_ = VAR_8 || (VAR_2->alpha_ != ((void*)0));
  }
  return VAR_9;
}
