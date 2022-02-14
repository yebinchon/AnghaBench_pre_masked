
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint64_t ;
typedef scalar_t__ WebPMuxError ;
struct TYPE_5__ {int canvas_width_; int canvas_height_; } ;
typedef TYPE_1__ WebPMux ;
struct TYPE_6__ {int tag; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (TYPE_1__*,int ) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 TYPE_2__* VAR_6 ;

WebPMuxError FUNC_1(WebPMux* VAR_7,
                                  int VAR_8, int VAR_9) {
  WebPMuxError VAR_10;
  if (VAR_7 == ((void*)0)) {
    return VAR_3;
  }
  if (VAR_8 < 0 || VAR_9 < 0 ||
      VAR_8 > VAR_1 || VAR_9 > VAR_1) {
    return VAR_3;
  }
  if (VAR_8 * (uint64_t)VAR_9 >= VAR_2) {
    return VAR_3;
  }
  if ((VAR_8 * VAR_9) == 0 && (VAR_8 | VAR_9) != 0) {

    return VAR_3;
  }

  VAR_10 = FUNC_0(VAR_7, VAR_6[VAR_0].tag);
  if (VAR_10 != VAR_5 && VAR_10 != VAR_4) return VAR_10;

  VAR_7->canvas_width_ = VAR_8;
  VAR_7->canvas_height_ = VAR_9;
  return VAR_5;
}
