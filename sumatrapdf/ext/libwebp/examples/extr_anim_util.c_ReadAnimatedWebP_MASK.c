
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
typedef int WebPData ;
struct TYPE_8__ {int canvas_width; int canvas_height; int frame_count; int bgcolor; int loop_count; } ;
typedef TYPE_1__ WebPAnimInfo ;
typedef int WebPAnimDecoder ;
typedef int W_CHAR ;
struct TYPE_10__ {int canvas_width; int canvas_height; int format; TYPE_2__* frames; int bgcolor; int loop_count; } ;
struct TYPE_9__ {int duration; scalar_t__ is_key_frame; int * rgba; } ;
typedef TYPE_2__ DecodedFrame ;
typedef TYPE_3__ AnimatedImage ;


 int VAR_0 ;
 int FUNC_0 (TYPE_3__* const,int) ;
 int FUNC_1 (int*,int,int) ;
 int FUNC_2 (char const*,char const*,int,int *,int,int) ;
 int FUNC_3 (int ,char*,int const*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,TYPE_1__*) ;
 int FUNC_6 (int *,int **,int*) ;
 scalar_t__ FUNC_7 (int *) ;
 int * FUNC_8 (int const* const,int *) ;
 int FUNC_9 (int) ;
 int FUNC_10 (int ,char*,...) ;
 int VAR_1 ;
 int FUNC_11 (int *,int *,int) ;
 int FUNC_12 (TYPE_3__* const,int ,int) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_13(const char VAR_3[],
                            const WebPData* const VAR_4,
                            AnimatedImage* const VAR_5, int VAR_6,
                            const char VAR_7[]) {
  int VAR_8 = 0;
  int VAR_9 = 1;
  uint32_t VAR_10 = 0;
  int VAR_11 = 0;
  WebPAnimDecoder* VAR_12;
  WebPAnimInfo VAR_13;

  FUNC_12(VAR_5, 0, sizeof(*VAR_5));

  VAR_12 = FUNC_8(VAR_4, ((void*)0));
  if (VAR_12 == ((void*)0)) {
    FUNC_3(VAR_2, "Error parsing image: %s\n", (const W_CHAR*)VAR_3);
    goto End;
  }

  if (!FUNC_5(VAR_12, &VAR_13)) {
    FUNC_10(VAR_2, "Error getting global info about the animation\n");
    goto End;
  }


  VAR_5->canvas_width = VAR_13.canvas_width;
  VAR_5->canvas_height = VAR_13.canvas_height;
  VAR_5->loop_count = VAR_13.loop_count;
  VAR_5->bgcolor = VAR_13.bgcolor;


  if (!FUNC_0(VAR_5, VAR_13.frame_count)) return 0;


  while (FUNC_7(VAR_12)) {
    DecodedFrame* VAR_14;
    uint8_t* VAR_15;
    uint8_t* VAR_16;
    int VAR_17;

    if (!FUNC_6(VAR_12, &VAR_16, &VAR_17)) {
      FUNC_10(VAR_2, "Error decoding frame #%u\n", VAR_10);
      goto End;
    }
    FUNC_9(VAR_10 < VAR_13.frame_count);
    VAR_14 = &VAR_5->frames[VAR_10];
    VAR_15 = VAR_14->rgba;
    VAR_14->duration = VAR_17 - VAR_11;
    VAR_14->is_key_frame = 0;
    FUNC_11(VAR_15, VAR_16,
           VAR_5->canvas_width * VAR_1 * VAR_5->canvas_height);


    FUNC_1((uint32_t*)VAR_15,
                             VAR_5->canvas_width, VAR_5->canvas_height);

    if (VAR_6 && VAR_9) {
      VAR_9 = FUNC_2(VAR_3, VAR_7, VAR_10, VAR_15,
                          VAR_5->canvas_width, VAR_5->canvas_height);
      if (!VAR_9) {
        FUNC_10(VAR_2, "Error dumping frames to %s\n", VAR_7);
      }
    }

    ++VAR_10;
    VAR_11 = VAR_17;
  }
  VAR_8 = VAR_9;
  if (VAR_8) VAR_5->format = VAR_0;

 End:
  FUNC_4(VAR_12);
  return VAR_8;
}
