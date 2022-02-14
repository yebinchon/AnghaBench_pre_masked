
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_8__ {scalar_t__ width_; scalar_t__ height_; int * next_; } ;
typedef TYPE_1__ WebPMuxImage ;
typedef scalar_t__ WebPMuxError ;
struct TYPE_9__ {scalar_t__ canvas_width_; scalar_t__ canvas_height_; TYPE_1__* images_; } ;
typedef TYPE_2__ WebPMux ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int VAR_11 ;
 scalar_t__ FUNC_1 (TYPE_2__ const* const,int ,int ,int,int,int*) ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ FUNC_2 (TYPE_2__ const* const,int*) ;
 scalar_t__ FUNC_3 (TYPE_2__ const* const,int ,int*) ;
 int VAR_15 ;

WebPMuxError FUNC_4(const WebPMux* const VAR_16) {
  int VAR_17;
  int VAR_18;
  int VAR_19;
  int VAR_20;
  int VAR_21;
  int VAR_22;
  int VAR_23;
  int VAR_24;
  uint32_t VAR_25;
  WebPMuxError VAR_26;


  if (VAR_16 == ((void*)0)) return VAR_13;


  if (VAR_16->images_ == ((void*)0)) return VAR_13;

  VAR_26 = FUNC_2(VAR_16, &VAR_25);
  if (VAR_26 != VAR_14) return VAR_26;


  VAR_26 = FUNC_1(VAR_16, VAR_7, VAR_3, VAR_25, 1, &VAR_17);
  if (VAR_26 != VAR_14) return VAR_26;


  VAR_26 = FUNC_1(VAR_16, VAR_6, VAR_2, VAR_25, 1, &VAR_18);
  if (VAR_26 != VAR_14) return VAR_26;


  VAR_26 = FUNC_1(VAR_16, VAR_10, VAR_15, VAR_25, 1, &VAR_19);
  if (VAR_26 != VAR_14) return VAR_26;



  VAR_26 = FUNC_1(VAR_16, VAR_4, VAR_11, VAR_25, 1, &VAR_20);
  if (VAR_26 != VAR_14) return VAR_26;
  VAR_26 = FUNC_1(VAR_16, VAR_5, VAR_11, VAR_25, -1, &VAR_21);
  if (VAR_26 != VAR_14) return VAR_26;

  {
    const int VAR_27 = !!(VAR_25 & VAR_1);
    if (VAR_27 && (VAR_20 == 0 || VAR_21 == 0)) {
      return VAR_13;
    }
    if (!VAR_27 && (VAR_20 == 1 || VAR_21 > 0)) {
      return VAR_13;
    }
    if (!VAR_27) {
      const WebPMuxImage* VAR_28 = VAR_16->images_;

      if (VAR_28 == ((void*)0) || VAR_28->next_ != ((void*)0)) {
        return VAR_13;
      }

      if (VAR_16->canvas_width_ > 0) {
        if (VAR_28->width_ != VAR_16->canvas_width_ ||
            VAR_28->height_ != VAR_16->canvas_height_) {
          return VAR_13;
        }
      }
    }
  }



  VAR_26 = FUNC_1(VAR_16, VAR_9, VAR_11, VAR_25, 1, &VAR_22);
  if (VAR_26 != VAR_14) return VAR_26;
  VAR_26 = FUNC_1(VAR_16, VAR_8, VAR_11, VAR_25, -1, &VAR_23);
  if (VAR_26 != VAR_14) return VAR_26;
  if (VAR_22 == 0 && VAR_23 != 1) return VAR_13;



  if (FUNC_0(VAR_16->images_)) {
    if (VAR_22 > 0) {

      if (!(VAR_25 & VAR_0)) return VAR_13;
    } else {

      VAR_26 = FUNC_3(VAR_16, VAR_12, &VAR_24);
      if (VAR_26 != VAR_14) return VAR_26;
      if (VAR_24 > 0) return VAR_13;
    }
  }

  return VAR_14;
}
