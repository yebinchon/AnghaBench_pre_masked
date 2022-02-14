
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ is_key_frame; scalar_t__ duration; struct TYPE_6__* rgba; } ;
typedef TYPE_1__ uint8_t ;
typedef int const uint64_t ;
typedef size_t uint32_t ;
struct TYPE_7__ {int const canvas_height; size_t num_frames; TYPE_1__* raw_mem; TYPE_1__* frames; scalar_t__ canvas_width; } ;
typedef TYPE_1__ DecodedFrame ;
typedef TYPE_3__ AnimatedImage ;


 int FUNC_0 (int const) ;
 int FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 (size_t) ;
 int const VAR_0 ;

__attribute__((used)) static int FUNC_3(AnimatedImage* const VAR_1, uint32_t VAR_2) {
  uint32_t VAR_3;
  uint8_t* VAR_4 = ((void*)0);
  DecodedFrame* VAR_5 = ((void*)0);
  const uint64_t VAR_6 =
      (uint64_t)VAR_1->canvas_width * VAR_0 * VAR_1->canvas_height;
  const uint64_t VAR_7 = (uint64_t)VAR_2 * VAR_6 * sizeof(*VAR_4);
  const uint64_t VAR_8 = (uint64_t)VAR_2 * sizeof(*VAR_5);
  if (!FUNC_0(VAR_7) ||
      !FUNC_0(VAR_8)) {
    return 0;
  }
  VAR_4 = (uint8_t*)FUNC_2((size_t)VAR_7);
  VAR_5 = (DecodedFrame*)FUNC_2((size_t)VAR_8);

  if (VAR_4 == ((void*)0) || VAR_5 == ((void*)0)) {
    FUNC_1(VAR_4);
    FUNC_1(VAR_5);
    return 0;
  }
  FUNC_1(VAR_1->raw_mem);
  VAR_1->num_frames = VAR_2;
  VAR_1->frames = VAR_5;
  for (VAR_3 = 0; VAR_3 < VAR_2; ++VAR_3) {
    VAR_5[VAR_3].rgba = VAR_4 + VAR_3 * VAR_6;
    VAR_5[VAR_3].duration = 0;
    VAR_5[VAR_3].is_key_frame = 0;
  }
  VAR_1->raw_mem = VAR_4;
  return 1;
}
