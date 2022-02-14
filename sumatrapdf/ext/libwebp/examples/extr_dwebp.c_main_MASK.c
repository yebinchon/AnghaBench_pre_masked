
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int uint8_t ;
typedef int WebPOutputFileFormat ;
struct TYPE_12__ {int no_fancy_upsampling; int bypass_filtering; int use_threads; int alpha_dithering_strength; int use_cropping; int use_scaling; int flip; void* scaled_height; void* scaled_width; void* crop_height; void* crop_width; void* crop_top; void* crop_left; void* dithering_strength; } ;
struct TYPE_15__ {size_t format; scalar_t__ has_alpha; } ;
struct TYPE_14__ {int width; int height; void* colorspace; } ;
struct TYPE_13__ {TYPE_1__ options; TYPE_4__ input; TYPE_3__ output; } ;
typedef TYPE_2__ WebPDecoderConfig ;
typedef TYPE_3__ WebPDecBuffer ;
typedef TYPE_4__ WebPBitstreamFeatures ;
typedef int W_CHAR ;
typedef scalar_t__ VP8StatusCode ;
typedef int Stopwatch ;




 int * FUNC_0 (TYPE_2__*,int,int) ;




 scalar_t__ FUNC_1 (int const*,size_t,TYPE_2__*) ;
 scalar_t__ FUNC_2 (int const*,size_t,TYPE_2__*) ;
 void* FUNC_3 (char const*,int ,int*) ;
 int FUNC_4 (int) ;
 scalar_t__ FUNC_5 (char const**,int) ;
 int FUNC_6 () ;
 int FUNC_7 (int,char const**) ;
 int FUNC_8 (char const*,int const**,size_t*,TYPE_4__* const) ;
 void* VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;
 void* VAR_7 ;
 void* VAR_8 ;
 void* VAR_9 ;
 void* VAR_10 ;
 void* VAR_11 ;
 void* VAR_12 ;




 int FUNC_9 (char const*,scalar_t__) ;





 int FUNC_10 (TYPE_3__* const,int,char const*) ;
 double FUNC_11 (int *) ;
 int FUNC_12 (int *) ;

 int * VAR_13 ;
 scalar_t__ VAR_14 ;
 int FUNC_13 (int ,char*,int const*) ;
 int FUNC_14 (void*) ;
 int FUNC_15 (TYPE_3__* const) ;
 int FUNC_16 () ;
 int FUNC_17 (TYPE_2__*) ;



 int FUNC_18 (int ,char*,...) ;
 char** VAR_15 ;
 int FUNC_19 (char*,int const,int const,int const) ;
 int VAR_16 ;


 int VAR_17 ;
 int FUNC_20 (char const*,char*) ;
 int VAR_18 ;

int FUNC_21(int VAR_19, const char* VAR_20[]) {
  int VAR_21 = 0;
  const char* VAR_22 = ((void*)0);
  const char* VAR_23 = ((void*)0);

  WebPDecoderConfig VAR_24;
  WebPDecBuffer* const VAR_25 = &VAR_24.output;
  WebPBitstreamFeatures* const VAR_26 = &VAR_24.input;
  WebPOutputFileFormat VAR_27 = 140;
  uint8_t* VAR_28 = ((void*)0);
  int VAR_29 = 0;
  const uint8_t* VAR_30 = ((void*)0);

  int VAR_31 = 0;
  int VAR_32;

  FUNC_7(VAR_19, VAR_20);

  if (!FUNC_17(&VAR_24)) {
    FUNC_18(VAR_17, "Library version mismatch!\n");
    FUNC_4(-1);
  }

  for (VAR_32 = 1; VAR_32 < VAR_19; ++VAR_32) {
    int VAR_33 = 0;
    if (!FUNC_20(VAR_20[VAR_32], "-h") || !FUNC_20(VAR_20[VAR_32], "-help")) {
      FUNC_6();
      FUNC_4(0);
    } else if (!FUNC_20(VAR_20[VAR_32], "-o") && VAR_32 < VAR_19 - 1) {
      VAR_23 = (const char*)FUNC_5(VAR_20, ++VAR_32);
    } else if (!FUNC_20(VAR_20[VAR_32], "-alpha")) {
      VAR_27 = 148;
    } else if (!FUNC_20(VAR_20[VAR_32], "-nofancy")) {
      VAR_24.options.no_fancy_upsampling = 1;
    } else if (!FUNC_20(VAR_20[VAR_32], "-nofilter")) {
      VAR_24.options.bypass_filtering = 1;
    } else if (!FUNC_20(VAR_20[VAR_32], "-pam")) {
      VAR_27 = 142;
    } else if (!FUNC_20(VAR_20[VAR_32], "-ppm")) {
      VAR_27 = 139;
    } else if (!FUNC_20(VAR_20[VAR_32], "-bmp")) {
      VAR_27 = 143;
    } else if (!FUNC_20(VAR_20[VAR_32], "-tiff")) {
      VAR_27 = 133;
    } else if (!FUNC_20(VAR_20[VAR_32], "-quiet")) {
      VAR_16 = 1;
    } else if (!FUNC_20(VAR_20[VAR_32], "-version")) {
      const int VAR_34 = FUNC_16();
      FUNC_19("%d.%d.%d\n",
             (VAR_34 >> 16) & 0xff, (VAR_34 >> 8) & 0xff, VAR_34 & 0xff);
      FUNC_4(0);
    } else if (!FUNC_20(VAR_20[VAR_32], "-pgm")) {
      VAR_27 = 141;
    } else if (!FUNC_20(VAR_20[VAR_32], "-yuv")) {
      VAR_27 = 138;
    } else if (!FUNC_20(VAR_20[VAR_32], "-pixel_format") && VAR_32 < VAR_19 - 1) {
      const char* const VAR_35 = VAR_20[++VAR_32];
      if (!FUNC_20(VAR_35, "RGB")) VAR_27 = 137;
      else if (!FUNC_20(VAR_35, "RGBA")) VAR_27 = 136;
      else if (!FUNC_20(VAR_35, "BGR")) VAR_27 = 145;
      else if (!FUNC_20(VAR_35, "BGRA")) VAR_27 = 144;
      else if (!FUNC_20(VAR_35, "ARGB")) VAR_27 = 147;
      else if (!FUNC_20(VAR_35, "RGBA_4444")) VAR_27 = 135;
      else if (!FUNC_20(VAR_35, "RGB_565")) VAR_27 = 134;
      else if (!FUNC_20(VAR_35, "rgbA")) VAR_27 = 129;
      else if (!FUNC_20(VAR_35, "bgrA")) VAR_27 = 130;
      else if (!FUNC_20(VAR_35, "Argb")) VAR_27 = 146;
      else if (!FUNC_20(VAR_35, "rgbA_4444")) VAR_27 = 128;
      else if (!FUNC_20(VAR_35, "YUV")) VAR_27 = 132;
      else if (!FUNC_20(VAR_35, "YUVA")) VAR_27 = 131;
      else {
        FUNC_18(VAR_17, "Can't parse pixel_format %s\n", VAR_35);
        VAR_33 = 1;
      }
    } else if (!FUNC_20(VAR_20[VAR_32], "-external_memory") && VAR_32 < VAR_19 - 1) {
      VAR_29 = FUNC_3(VAR_20[++VAR_32], 0, &VAR_33);
      VAR_33 |= (VAR_29 > 2 || VAR_29 < 0);
      if (VAR_33) {
        FUNC_18(VAR_17, "Can't parse 'external_memory' value %s\n", VAR_20[VAR_32]);
      }
    } else if (!FUNC_20(VAR_20[VAR_32], "-mt")) {
      VAR_24.options.use_threads = 1;
    } else if (!FUNC_20(VAR_20[VAR_32], "-alpha_dither")) {
      VAR_24.options.alpha_dithering_strength = 100;
    } else if (!FUNC_20(VAR_20[VAR_32], "-nodither")) {
      VAR_24.options.dithering_strength = 0;
    } else if (!FUNC_20(VAR_20[VAR_32], "-dither") && VAR_32 < VAR_19 - 1) {
      VAR_24.options.dithering_strength =
          FUNC_3(VAR_20[++VAR_32], 0, &VAR_33);
    } else if (!FUNC_20(VAR_20[VAR_32], "-crop") && VAR_32 < VAR_19 - 4) {
      VAR_24.options.use_cropping = 1;
      VAR_24.options.crop_left = FUNC_3(VAR_20[++VAR_32], 0, &VAR_33);
      VAR_24.options.crop_top = FUNC_3(VAR_20[++VAR_32], 0, &VAR_33);
      VAR_24.options.crop_width = FUNC_3(VAR_20[++VAR_32], 0, &VAR_33);
      VAR_24.options.crop_height = FUNC_3(VAR_20[++VAR_32], 0, &VAR_33);
    } else if ((!FUNC_20(VAR_20[VAR_32], "-scale") || !FUNC_20(VAR_20[VAR_32], "-resize")) &&
               VAR_32 < VAR_19 - 2) {
      VAR_24.options.use_scaling = 1;
      VAR_24.options.scaled_width = FUNC_3(VAR_20[++VAR_32], 0, &VAR_33);
      VAR_24.options.scaled_height = FUNC_3(VAR_20[++VAR_32], 0, &VAR_33);
    } else if (!FUNC_20(VAR_20[VAR_32], "-flip")) {
      VAR_24.options.flip = 1;
    } else if (!FUNC_20(VAR_20[VAR_32], "-v")) {
      VAR_18 = 1;

    } else if (!FUNC_20(VAR_20[VAR_32], "-noasm")) {
      VAR_13 = ((void*)0);

    } else if (!FUNC_20(VAR_20[VAR_32], "-incremental")) {
      VAR_31 = 1;
    } else if (!FUNC_20(VAR_20[VAR_32], "--")) {
      if (VAR_32 < VAR_19 - 1) VAR_22 = (const char*)FUNC_5(VAR_20, ++VAR_32);
      break;
    } else if (VAR_20[VAR_32][0] == '-') {
      FUNC_18(VAR_17, "Unknown option '%s'\n", VAR_20[VAR_32]);
      FUNC_6();
      FUNC_4(-1);
    } else {
      VAR_22 = (const char*)FUNC_5(VAR_20, VAR_32);
    }

    if (VAR_33) {
      FUNC_6();
      FUNC_4(-1);
    }
  }

  if (VAR_22 == ((void*)0)) {
    FUNC_18(VAR_17, "missing input file!!\n");
    FUNC_6();
    FUNC_4(-1);
  }

  if (VAR_16) VAR_18 = 0;

  {
    VP8StatusCode VAR_36 = VAR_14;
    size_t VAR_37 = 0;
    if (!FUNC_8(VAR_22, &VAR_30, &VAR_37, VAR_26)) {
      FUNC_4(-1);
    }

    switch (VAR_27) {
      case 140:



        VAR_25->colorspace = VAR_26->has_alpha ? VAR_5 : VAR_4;

        break;
      case 142:
        VAR_25->colorspace = VAR_5;
        break;
      case 139:
        VAR_25->colorspace = VAR_4;
        break;
      case 143:
        VAR_25->colorspace = VAR_26->has_alpha ? VAR_3 : VAR_2;
        break;
      case 133:
        VAR_25->colorspace = VAR_26->has_alpha ? VAR_5 : VAR_4;
        break;
      case 141:
      case 138:
        VAR_25->colorspace = VAR_26->has_alpha ? VAR_9 : VAR_8;
        break;
      case 148:
        VAR_25->colorspace = VAR_9;
        break;

      case 137: VAR_25->colorspace = VAR_4; break;
      case 136: VAR_25->colorspace = VAR_5; break;
      case 145: VAR_25->colorspace = VAR_2; break;
      case 144: VAR_25->colorspace = VAR_3; break;
      case 147: VAR_25->colorspace = VAR_0; break;
      case 135: VAR_25->colorspace = VAR_6; break;
      case 134: VAR_25->colorspace = VAR_7; break;
      case 129: VAR_25->colorspace = VAR_11; break;
      case 130: VAR_25->colorspace = VAR_10; break;
      case 146: VAR_25->colorspace = VAR_1; break;
      case 128: VAR_25->colorspace = VAR_12; break;
      case 132: VAR_25->colorspace = VAR_8; break;
      case 131: VAR_25->colorspace = VAR_9; break;
      default: goto Exit;
    }

    if (VAR_29 > 0 && VAR_27 >= 137) {
      VAR_28 = FUNC_0(&VAR_24, VAR_27,
                                               VAR_29);
      if (VAR_28 == ((void*)0)) goto Exit;
    }

    {
      Stopwatch VAR_38;
      if (VAR_18) FUNC_12(&VAR_38);

      if (VAR_31) {
        VAR_36 = FUNC_2(VAR_30, VAR_37, &VAR_24);
      } else {
        VAR_36 = FUNC_1(VAR_30, VAR_37, &VAR_24);
      }
      if (VAR_18) {
        const double VAR_39 = FUNC_11(&VAR_38);
        FUNC_18(VAR_17, "Time to decode picture: %.3fs\n", VAR_39);
      }
    }

    VAR_21 = (VAR_36 == VAR_14);
    if (!VAR_21) {
      FUNC_9(VAR_22, VAR_36);
      goto Exit;
    }
  }

  if (VAR_23 != ((void*)0)) {
    if (!VAR_16) {
      FUNC_13(VAR_17, "Decoded %s.", (const W_CHAR*)VAR_22);
      FUNC_18(VAR_17, " Dimensions: %d x %d %s. Format: %s. Now saving...\n",
              VAR_25->width, VAR_25->height,
              VAR_26->has_alpha ? " (with alpha)" : "",
              VAR_15[VAR_26->format]);
    }
    VAR_21 = FUNC_10(VAR_25, VAR_27, VAR_23);
  } else {
    if (!VAR_16) {
      FUNC_13(VAR_17, "File %s can be decoded ", (const W_CHAR*)VAR_22);
      FUNC_18(VAR_17, "(dimensions: %d x %d %s. Format: %s).\n",
              VAR_25->width, VAR_25->height,
              VAR_26->has_alpha ? " (with alpha)" : "",
              VAR_15[VAR_26->format]);
      FUNC_18(VAR_17, "Nothing written; "
                      "use -o flag to save the result as e.g. PNG.\n");
    }
  }
 Exit:
  FUNC_15(VAR_25);
  FUNC_14((void*)VAR_28);
  FUNC_14((void*)VAR_30);
  FUNC_4(VAR_21 ? 0 : -1);
}
