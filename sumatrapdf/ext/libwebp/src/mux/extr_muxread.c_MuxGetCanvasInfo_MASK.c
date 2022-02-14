
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint64_t ;
typedef int uint32_t ;
struct TYPE_8__ {int width_; int height_; scalar_t__ has_alpha_; } ;
typedef TYPE_1__ WebPMuxImage ;
typedef scalar_t__ WebPMuxError ;
struct TYPE_9__ {int canvas_width_; int canvas_height_; TYPE_1__* images_; } ;
typedef TYPE_2__ WebPMux ;
struct TYPE_10__ {scalar_t__ size; scalar_t__ bytes; } ;
typedef TYPE_3__ WebPData ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (TYPE_2__ const* const,int ,int,TYPE_3__*) ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_3 (TYPE_2__ const* const) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_4 (int ) ;

__attribute__((used)) static WebPMuxError FUNC_5(const WebPMux* const VAR_6,
                                     int* VAR_7, int* VAR_8, uint32_t* VAR_9) {
  int VAR_10, VAR_11;
  uint32_t VAR_12 = 0;
  WebPData VAR_13;
  FUNC_4(VAR_6 != ((void*)0));


  if (FUNC_2(VAR_6, VAR_1, 1, &VAR_13) == VAR_5) {
    if (VAR_13.size < VAR_3) return VAR_4;
    VAR_12 = FUNC_1(VAR_13.bytes + 0);
    VAR_10 = FUNC_0(VAR_13.bytes + 4) + 1;
    VAR_11 = FUNC_0(VAR_13.bytes + 7) + 1;
  } else {
    const WebPMuxImage* const VAR_14 = VAR_6->images_;

    VAR_10 = VAR_6->canvas_width_;
    VAR_11 = VAR_6->canvas_height_;
    if (VAR_10 == 0 && VAR_11 == 0 && FUNC_3(VAR_6) == VAR_5) {

      FUNC_4(VAR_14 != ((void*)0));
      VAR_10 = VAR_14->width_;
      VAR_11 = VAR_14->height_;
    }
    if (VAR_14 != ((void*)0)) {
      if (VAR_14->has_alpha_) VAR_12 |= VAR_0;
    }
  }
  if (VAR_10 * (uint64_t)VAR_11 >= VAR_2) return VAR_4;

  if (VAR_7 != ((void*)0)) *VAR_7 = VAR_10;
  if (VAR_8 != ((void*)0)) *VAR_8 = VAR_11;
  if (VAR_9 != ((void*)0)) *VAR_9 = VAR_12;
  return VAR_5;
}
