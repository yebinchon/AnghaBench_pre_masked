
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int frame_num; scalar_t__ blend_method; scalar_t__ dispose_method; int height; int width; int has_alpha; } ;
typedef TYPE_1__ WebPIterator ;


 scalar_t__ FUNC_0 (int ,int ,int,int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static int FUNC_1(const WebPIterator* const VAR_2,
                      const WebPIterator* const VAR_3,
                      int VAR_4,
                      int VAR_5, int VAR_6) {
  if (VAR_2->frame_num == 1) {
    return 1;
  } else if ((!VAR_2->has_alpha || VAR_2->blend_method == VAR_1) &&
             FUNC_0(VAR_2->width, VAR_2->height,
                         VAR_5, VAR_6)) {
    return 1;
  } else {
    return (VAR_3->dispose_method == VAR_0) &&
           (FUNC_0(VAR_3->width, VAR_3->height, VAR_5,
                        VAR_6) ||
            VAR_4);
  }
}
