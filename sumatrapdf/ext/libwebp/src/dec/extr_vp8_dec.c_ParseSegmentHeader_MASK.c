
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {void* update_map_; void** filter_strength_; void** quantizer_; void* absolute_delta_; void* use_segment_; } ;
typedef TYPE_1__ VP8SegmentHeader ;
struct TYPE_11__ {unsigned int* segments_; } ;
typedef TYPE_2__ VP8Proba ;
struct TYPE_12__ {int eof_; } ;
typedef TYPE_3__ VP8BitReader ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (TYPE_3__*,char*) ;
 void* FUNC_1 (TYPE_3__*,int,char*) ;
 unsigned int FUNC_2 (TYPE_3__*,int,char*) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(VP8BitReader* VAR_2,
                              VP8SegmentHeader* VAR_3, VP8Proba* VAR_4) {
  FUNC_3(VAR_2 != ((void*)0));
  FUNC_3(VAR_3 != ((void*)0));
  VAR_3->use_segment_ = FUNC_0(VAR_2, "global-header");
  if (VAR_3->use_segment_) {
    VAR_3->update_map_ = FUNC_0(VAR_2, "global-header");
    if (FUNC_0(VAR_2, "global-header")) {
      int VAR_5;
      VAR_3->absolute_delta_ = FUNC_0(VAR_2, "global-header");
      for (VAR_5 = 0; VAR_5 < VAR_1; ++VAR_5) {
        VAR_3->quantizer_[VAR_5] = FUNC_0(VAR_2, "global-header") ?
            FUNC_1(VAR_2, 7, "global-header") : 0;
      }
      for (VAR_5 = 0; VAR_5 < VAR_1; ++VAR_5) {
        VAR_3->filter_strength_[VAR_5] = FUNC_0(VAR_2, "global-header") ?
            FUNC_1(VAR_2, 6, "global-header") : 0;
      }
    }
    if (VAR_3->update_map_) {
      int VAR_6;
      for (VAR_6 = 0; VAR_6 < VAR_0; ++VAR_6) {
        VAR_4->segments_[VAR_6] = FUNC_0(VAR_2, "global-header") ?
            FUNC_2(VAR_2, 8, "global-header") : 255u;
      }
    }
  } else {
    VAR_3->update_map_ = 0;
  }
  return !VAR_2->eof_;
}
