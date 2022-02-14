
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef size_t uint32_t ;
typedef int out_file ;
typedef int image ;
typedef int WebPOutputFileFormat ;
struct TYPE_13__ {int stride; int size; int rgba; } ;
struct TYPE_14__ {TYPE_2__ RGBA; } ;
struct TYPE_15__ {int is_external_memory; int width; int height; TYPE_3__ u; int colorspace; } ;
typedef TYPE_4__ WebPDecBuffer ;
typedef int const W_CHAR ;
struct TYPE_16__ {size_t num_frames; int canvas_width; int canvas_height; TYPE_1__* frames; } ;
struct TYPE_12__ {int rgba; } ;
typedef TYPE_5__ AnimatedImage ;


 int FUNC_0 (TYPE_5__*) ;
 int FUNC_1 (int) ;
 void* FUNC_2 (char const**,int) ;
 int FUNC_3 (int*,int*) ;
 int FUNC_4 () ;
 int FUNC_5 (int,char const**) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_6 (char const*,TYPE_5__*,int ,int *) ;
 int VAR_3 ;
 int const* FUNC_7 (char*) ;
 int FUNC_8 (int ,char*,int const*) ;
 int FUNC_9 (char*,int const* const,int const*,int const*,int const*) ;
 int FUNC_10 (int const*,int,char*,int const*,int const*,size_t,int const*) ;
 int FUNC_11 (TYPE_4__*) ;
 int FUNC_12 (TYPE_4__*) ;
 int FUNC_13 (TYPE_4__*,int ,char const*) ;
 int FUNC_14 (int ,char*,char const*) ;
 int FUNC_15 (TYPE_5__*,int ,int) ;
 int FUNC_16 (char*,int,int,int,int,int,int) ;
 int VAR_4 ;
 int FUNC_17 (char const*,char*) ;

int FUNC_18(int VAR_5, const char* VAR_6[]) {
  int VAR_7 = 0;
  const W_CHAR* VAR_8 = FUNC_7(".");
  const W_CHAR* VAR_9 = FUNC_7("dump_");
  const W_CHAR* VAR_10 = FUNC_7("png");
  WebPOutputFileFormat VAR_11 = VAR_2;
  int VAR_12;

  FUNC_5(VAR_5, VAR_6);

  if (VAR_5 < 2) {
    FUNC_4();
    FUNC_1(-1);
  }

  for (VAR_12 = 1; !VAR_7 && VAR_12 < VAR_5; ++VAR_12) {
    if (!FUNC_17(VAR_6[VAR_12], "-folder")) {
      if (VAR_12 + 1 == VAR_5) {
        FUNC_14(VAR_4, "missing argument after option '%s'\n", VAR_6[VAR_12]);
        VAR_7 = 1;
        break;
      }
      VAR_8 = FUNC_2(VAR_6, ++VAR_12);
    } else if (!FUNC_17(VAR_6[VAR_12], "-prefix")) {
      if (VAR_12 + 1 == VAR_5) {
        FUNC_14(VAR_4, "missing argument after option '%s'\n", VAR_6[VAR_12]);
        VAR_7 = 1;
        break;
      }
      VAR_9 = FUNC_2(VAR_6, ++VAR_12);
    } else if (!FUNC_17(VAR_6[VAR_12], "-tiff")) {
      VAR_11 = VAR_3;
      VAR_10 = FUNC_7("tiff");
    } else if (!FUNC_17(VAR_6[VAR_12], "-pam")) {
      VAR_11 = VAR_1;
      VAR_10 = FUNC_7("pam");
    } else if (!FUNC_17(VAR_6[VAR_12], "-h") || !FUNC_17(VAR_6[VAR_12], "-help")) {
      FUNC_4();
      FUNC_1(0);
    } else if (!FUNC_17(VAR_6[VAR_12], "-version")) {
      int VAR_13, VAR_14;
      FUNC_3(&VAR_13, &VAR_14);
      FUNC_16("WebP Decoder version: %d.%d.%d\nWebP Demux version: %d.%d.%d\n",
             (VAR_13 >> 16) & 0xff, (VAR_13 >> 8) & 0xff,
             (VAR_13 >> 0) & 0xff,
             (VAR_14 >> 16) & 0xff, (VAR_14 >> 8) & 0xff,
             (VAR_14 >> 0) & 0xff);
      FUNC_1(0);
    } else {
      uint32_t VAR_15;
      AnimatedImage VAR_16;
      const W_CHAR* const VAR_17 = FUNC_2(VAR_6, VAR_12);
      FUNC_15(&VAR_16, 0, sizeof(VAR_16));
      FUNC_9("Decoding file: %s as %s/%sxxxx.%s\n",
              VAR_17, VAR_8, VAR_9, VAR_10);
      if (!FUNC_6((const char*)VAR_17, &VAR_16, 0, ((void*)0))) {
        FUNC_8(VAR_4, "Error decoding file: %s\n Aborting.\n", VAR_17);
        VAR_7 = 1;
        break;
      }
      for (VAR_15 = 0; !VAR_7 && VAR_15 < VAR_16.num_frames; ++VAR_15) {
        W_CHAR VAR_18[1024];
        WebPDecBuffer VAR_19;
        FUNC_12(&VAR_19);
        VAR_19.colorspace = VAR_0;
        VAR_19.is_external_memory = 1;
        VAR_19.width = VAR_16.canvas_width;
        VAR_19.height = VAR_16.canvas_height;
        VAR_19.u.RGBA.rgba = VAR_16.frames[VAR_15].rgba;
        VAR_19.u.RGBA.stride = VAR_19.width * sizeof(uint32_t);
        VAR_19.u.RGBA.size = VAR_19.u.RGBA.stride * VAR_19.height;
        FUNC_10(VAR_18, sizeof(VAR_18), "%s/%s%.4d.%s",
                  VAR_8, VAR_9, VAR_15, VAR_10);
        if (!FUNC_13(&VAR_19, VAR_11, (const char*)VAR_18)) {
          FUNC_8(VAR_4, "Error while saving image '%s'\n", VAR_18);
          VAR_7 = 1;
        }
        FUNC_11(&VAR_19);
      }
      FUNC_0(&VAR_16);
    }
  }
  FUNC_1(VAR_7 ? 1 : 0);
}
