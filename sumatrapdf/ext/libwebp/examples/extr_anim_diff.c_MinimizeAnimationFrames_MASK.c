
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct TYPE_7__ {int num_frames; TYPE_1__* frames; int canvas_height; int canvas_width; } ;
struct TYPE_6__ {scalar_t__ duration; int * rgba; } ;
typedef TYPE_1__ DecodedFrame ;
typedef TYPE_2__ AnimatedImage ;


 scalar_t__ FUNC_0 (scalar_t__,scalar_t__) ;
 int FUNC_1 (int const* const,int const* const,int ,int ) ;
 int FUNC_2 (int const* const,int const* const,int ,int ,int) ;
 int FUNC_3 (TYPE_1__*,TYPE_1__*,int) ;

__attribute__((used)) static void FUNC_4(AnimatedImage* const VAR_0, int VAR_1) {
  uint32_t VAR_2;
  for (VAR_2 = 1; VAR_2 < VAR_0->num_frames; ++VAR_2) {
    DecodedFrame* const VAR_3 = &VAR_0->frames[VAR_2 - 1];
    DecodedFrame* const VAR_4 = &VAR_0->frames[VAR_2];
    const uint8_t* const VAR_5 = VAR_3->rgba;
    const uint8_t* const VAR_6 = VAR_4->rgba;
    int VAR_7 = 0;


    if (FUNC_0(VAR_3->duration, VAR_4->duration)) continue;
    if (VAR_1 > 0) {
      VAR_7 = FUNC_2(VAR_5, VAR_6, VAR_0->canvas_width,
                                             VAR_0->canvas_height, VAR_1);
    } else {
      VAR_7 =
          FUNC_1(VAR_5, VAR_6, VAR_0->canvas_width, VAR_0->canvas_height);
    }
    if (VAR_7) {
      VAR_3->duration += VAR_4->duration;
      if (VAR_2 + 1 < VAR_0->num_frames) {
        FUNC_3(&VAR_0->frames[VAR_2], &VAR_0->frames[VAR_2 + 1],
                (VAR_0->num_frames - VAR_2 - 1) * sizeof(*VAR_0->frames));
      }
      --VAR_0->num_frames;
      --VAR_2;
    }
  }
}
