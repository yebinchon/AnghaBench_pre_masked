
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
typedef size_t uint32_t ;
typedef int tmp ;
typedef int format ;
struct TYPE_6__ {int num_frames; int canvas_width; int canvas_height; scalar_t__ format; int loop_count; TYPE_1__* frames; int bgcolor; } ;
struct TYPE_5__ {int duration; int * rgba; } ;
typedef TYPE_2__ AnimatedImage ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int ,int ,int) ;
 scalar_t__ FUNC_1 (int,int,char*) ;
 int FUNC_2 (int const* const,int const* const,int,int,int,int*,double*) ;
 int FUNC_3 (int ,char*,size_t,int,...) ;
 scalar_t__ FUNC_4 (char*,int,char const*,size_t) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_5(const AnimatedImage* const VAR_3,
                                    const AnimatedImage* const VAR_4,
                                    int VAR_5,
                                    double VAR_6) {
  int VAR_7 = 1;
  const int VAR_8 = (VAR_3->num_frames > 1);
  uint32_t VAR_9;

  VAR_7 = FUNC_1(VAR_3->canvas_width, VAR_4->canvas_width,
                     "Canvas width mismatch") && VAR_7;
  VAR_7 = FUNC_1(VAR_3->canvas_height, VAR_4->canvas_height,
                     "Canvas height mismatch") && VAR_7;
  VAR_7 = FUNC_1(VAR_3->num_frames, VAR_4->num_frames,
                     "Frame count mismatch") && VAR_7;
  if (!VAR_7) return 0;

  if (VAR_8) {
    int VAR_10 = 0;


    if ((VAR_3->format == VAR_0 && VAR_3->loop_count == 65536 &&
         VAR_4->format == VAR_1 && VAR_4->loop_count == 65535) ||
        (VAR_3->format == VAR_1 && VAR_3->loop_count == 65535 &&
         VAR_4->format == VAR_0 && VAR_4->loop_count == 65536)) {
      VAR_10 = 1;
    }
    VAR_7 = (VAR_10 ||
          FUNC_1(VAR_3->loop_count, VAR_4->loop_count,
                        "Loop count mismatch")) && VAR_7;
    VAR_7 = FUNC_0(VAR_3->bgcolor, VAR_4->bgcolor,
                                VAR_5) && VAR_7;
  }

  for (VAR_9 = 0; VAR_9 < VAR_3->num_frames; ++VAR_9) {

    const uint8_t* const VAR_11 = VAR_3->frames[VAR_9].rgba;
    const uint8_t* const VAR_12 = VAR_4->frames[VAR_9].rgba;
    int VAR_13;
    double VAR_14;
    if (VAR_8) {
      const char VAR_15[] = "Frame #%d, duration mismatch";
      char VAR_16[sizeof(VAR_15) + 8];
      VAR_7 = VAR_7 && (FUNC_4(VAR_16, sizeof(VAR_16), VAR_15, VAR_9) >= 0);
      VAR_7 = VAR_7 && FUNC_1(VAR_3->frames[VAR_9].duration,
                               VAR_4->frames[VAR_9].duration, VAR_16);
    }
    FUNC_2(VAR_11, VAR_12, VAR_3->canvas_width, VAR_3->canvas_height,
                   VAR_5, &VAR_13, &VAR_14);
    if (VAR_6 > 0.) {
      if (VAR_14 < VAR_6) {
        FUNC_3(VAR_2, "Frame #%zu, psnr = %.2d (min_psnr = %f)\n", VAR_9,
                VAR_14, VAR_6);
        VAR_7 = 0;
      }
    } else {
      if (VAR_13 != 0) {
        FUNC_3(VAR_2, "Frame #%zu, max pixel diff: %d\n", VAR_9, VAR_13);
        VAR_7 = 0;
      }
    }
  }
  return VAR_7;
}
