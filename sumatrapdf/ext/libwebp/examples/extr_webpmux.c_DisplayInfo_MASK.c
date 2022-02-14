
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_9__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_14__ {scalar_t__ size; int bytes; } ;
struct TYPE_10__ {int x_offset; int y_offset; scalar_t__ dispose_method; scalar_t__ blend_method; int duration; TYPE_9__ bitstream; } ;
typedef TYPE_1__ WebPMuxFrameInfo ;
typedef scalar_t__ WebPMuxError ;
struct TYPE_11__ {int bgcolor; int loop_count; } ;
typedef TYPE_2__ WebPMuxAnimParams ;
typedef int WebPMux ;
struct TYPE_12__ {scalar_t__ size; } ;
typedef TYPE_3__ WebPData ;
typedef int WebPChunkId ;
struct TYPE_13__ {int width; int height; int format; scalar_t__ has_alpha; } ;
typedef TYPE_4__ WebPBitstreamFeatures ;
typedef scalar_t__ VP8StatusCode ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*,char const* const,int) ;
 scalar_t__ const VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_2 (TYPE_9__*) ;
 scalar_t__ FUNC_3 (int ,scalar_t__,TYPE_4__*) ;
 scalar_t__ FUNC_4 (int const*,TYPE_2__*) ;
 scalar_t__ FUNC_5 (int const*,int*,int*) ;
 scalar_t__ FUNC_6 (int const*,char*,TYPE_3__*) ;
 scalar_t__ FUNC_7 (int const*,int*) ;
 scalar_t__ FUNC_8 (int const*,int,TYPE_1__*) ;
 scalar_t__ FUNC_9 (int const*,int const,int*) ;
 int VAR_9 ;
 int FUNC_10 (int) ;
 int FUNC_11 (char*,...) ;

__attribute__((used)) static WebPMuxError FUNC_12(const WebPMux* VAR_10) {
  int VAR_11, VAR_12;
  uint32_t VAR_13;

  WebPMuxError VAR_14 = FUNC_5(VAR_10, &VAR_11, &VAR_12);
  FUNC_10(VAR_14 == VAR_8);
  FUNC_11("Canvas size: %d x %d\n", VAR_11, VAR_12);

  VAR_14 = FUNC_7(VAR_10, &VAR_13);
  FUNC_0("Failed to retrieve features\n");

  if (VAR_13 == 0) {
    FUNC_11("No features present.\n");
    return VAR_14;
  }


  FUNC_11("Features present:");
  if (VAR_13 & VAR_1) FUNC_11(" animation");
  if (VAR_13 & VAR_3) FUNC_11(" ICC profile");
  if (VAR_13 & VAR_2) FUNC_11(" EXIF metadata");
  if (VAR_13 & VAR_9) FUNC_11(" XMP metadata");
  if (VAR_13 & VAR_0) FUNC_11(" transparency");
  FUNC_11("\n");

  if (VAR_13 & VAR_1) {
    const WebPChunkId VAR_15 = VAR_5;
    const char* const VAR_16 = "frame";
    int VAR_17;

    WebPMuxAnimParams VAR_18;
    VAR_14 = FUNC_4(VAR_10, &VAR_18);
    FUNC_10(VAR_14 == VAR_8);
    FUNC_11("Background color : 0x%.8X  Loop Count : %d\n",
           VAR_18.bgcolor, VAR_18.loop_count);

    VAR_14 = FUNC_9(VAR_10, VAR_15, &VAR_17);
    FUNC_10(VAR_14 == VAR_8);

    FUNC_11("Number of %ss: %d\n", VAR_16, VAR_17);
    if (VAR_17 > 0) {
      int VAR_19;
      FUNC_11("No.: width height alpha x_offset y_offset ");
      FUNC_11("duration   dispose blend ");
      FUNC_11("image_size  compression\n");
      for (VAR_19 = 1; VAR_19 <= VAR_17; VAR_19++) {
        WebPMuxFrameInfo VAR_20;
        VAR_14 = FUNC_8(VAR_10, VAR_19, &VAR_20);
        if (VAR_14 == VAR_8) {
          WebPBitstreamFeatures VAR_21;
          const VP8StatusCode VAR_22 = FUNC_3(
              VAR_20.bitstream.bytes, VAR_20.bitstream.size, &VAR_21);
          FUNC_10(VAR_22 == VAR_4);
          (void)VAR_22;
          FUNC_11("%3d: %5d %5d %5s %8d %8d ", VAR_19, VAR_21.width,
                 VAR_21.height, VAR_21.has_alpha ? "yes" : "no",
                 VAR_20.x_offset, VAR_20.y_offset);
          {
            const char* const VAR_23 =
                (VAR_20.dispose_method == VAR_7) ? "none"
                                                                : "background";
            const char* const VAR_24 =
                (VAR_20.blend_method == VAR_6) ? "yes" : "no";
            FUNC_11("%8d %10s %5s ", VAR_20.duration, VAR_23, VAR_24);
          }
          FUNC_11("%10d %11s\n", (int)VAR_20.bitstream.size,
                 (VAR_21.format == 1) ? "lossy" :
                 (VAR_21.format == 2) ? "lossless" :
                                          "undefined");
        }
        FUNC_2(&VAR_20.bitstream);
        FUNC_1("Failed to retrieve %s#%d\n", VAR_16, VAR_19);
      }
    }
  }

  if (VAR_13 & VAR_3) {
    WebPData VAR_25;
    VAR_14 = FUNC_6(VAR_10, "ICCP", &VAR_25);
    FUNC_10(VAR_14 == VAR_8);
    FUNC_11("Size of the ICC profile data: %d\n", (int)VAR_25.size);
  }

  if (VAR_13 & VAR_2) {
    WebPData VAR_26;
    VAR_14 = FUNC_6(VAR_10, "EXIF", &VAR_26);
    FUNC_10(VAR_14 == VAR_8);
    FUNC_11("Size of the EXIF metadata: %d\n", (int)VAR_26.size);
  }

  if (VAR_13 & VAR_9) {
    WebPData VAR_27;
    VAR_14 = FUNC_6(VAR_10, "XMP ", &VAR_27);
    FUNC_10(VAR_14 == VAR_8);
    FUNC_11("Size of the XMP metadata: %d\n", (int)VAR_27.size);
  }

  if ((VAR_13 & VAR_0) && !(VAR_13 & VAR_1)) {
    WebPMuxFrameInfo VAR_28;
    VAR_14 = FUNC_8(VAR_10, 1, &VAR_28);
    if (VAR_14 == VAR_8) {
      FUNC_11("Size of the image (with alpha): %d\n", (int)VAR_28.bitstream.size);
    }
    FUNC_2(&VAR_28.bitstream);
    FUNC_0("Failed to retrieve the image\n");
  }

  return VAR_8;
}
