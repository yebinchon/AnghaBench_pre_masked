
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_7__ ;
typedef struct TYPE_20__ TYPE_6__ ;
typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint64_t ;
typedef int uint32_t ;
struct TYPE_18__ {int width; int height; int* argb; int argb_stride; int y_stride; int uv_stride; int a_stride; scalar_t__ use_argb; int * a; int v; int u; int y; int colorspace; } ;
typedef TYPE_4__ WebPPicture ;
struct TYPE_21__ {int width; int height; int has_alpha; } ;
struct TYPE_16__ {int y_stride; int u_stride; int v_stride; int a_stride; int y_size; int u_size; int v_size; int a_size; int * a; int v; int u; int y; } ;
struct TYPE_15__ {int stride; int size; int * rgba; } ;
struct TYPE_17__ {TYPE_2__ YUVA; TYPE_1__ RGBA; } ;
struct TYPE_20__ {int is_external_memory; TYPE_3__ u; int colorspace; } ;
struct TYPE_19__ {TYPE_7__ input; TYPE_6__ output; } ;
typedef TYPE_5__ WebPDecoderConfig ;
typedef TYPE_6__ WebPDecBuffer ;
typedef TYPE_7__ WebPBitstreamFeatures ;
typedef scalar_t__ VP8StatusCode ;
typedef int Metadata ;


 scalar_t__ FUNC_0 (int const* const,size_t,TYPE_5__*) ;
 int FUNC_1 (int const* const,size_t,int * const) ;
 int FUNC_2 (int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (char*,scalar_t__) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_4 (TYPE_6__* const) ;
 scalar_t__ FUNC_5 (int const* const,size_t,TYPE_7__* const) ;
 int FUNC_6 (TYPE_5__*) ;
 int FUNC_7 (TYPE_4__* const) ;
 int FUNC_8 (TYPE_4__* const) ;
 int FUNC_9 (int ,char*) ;
 int VAR_9 ;

int FUNC_10(const uint8_t* const VAR_10, size_t VAR_11,
             WebPPicture* const VAR_12,
             int VAR_13, Metadata* const VAR_14) {
  int VAR_15 = 0;
  VP8StatusCode VAR_16 = VAR_5;
  WebPDecoderConfig VAR_17;
  WebPDecBuffer* const VAR_18 = &VAR_17.output;
  WebPBitstreamFeatures* const VAR_19 = &VAR_17.input;

  if (VAR_10 == ((void*)0) || VAR_11 == 0 || VAR_12 == ((void*)0)) return 0;

  if (!FUNC_6(&VAR_17)) {
    FUNC_9(VAR_9, "Library version mismatch!\n");
    return 0;
  }

  VAR_16 = FUNC_5(VAR_10, VAR_11, VAR_19);
  if (VAR_16 != VAR_5) {
    FUNC_3("input data", VAR_16);
    return 0;
  }

  do {
    const int VAR_20 = VAR_13 && VAR_19->has_alpha;
    uint64_t VAR_21;
    VAR_12->width = VAR_19->width;
    VAR_12->height = VAR_19->height;
    if (VAR_12->use_argb) {
      VAR_21 = (uint64_t)VAR_19->width * 4;
    } else {
      VAR_21 = (uint64_t)VAR_19->width * (VAR_20 ? 5 : 3) / 2;
      VAR_12->colorspace = VAR_20 ? VAR_8 : VAR_7;
    }

    if (!FUNC_2(VAR_21, VAR_19->height)) {
      VAR_16 = VAR_6;
      break;
    }

    VAR_15 = FUNC_7(VAR_12);
    if (!VAR_15) {
      VAR_16 = VAR_6;
      break;
    }
    if (VAR_12->use_argb) {



      VAR_18->colorspace = VAR_1;

      VAR_18->u.RGBA.rgba = (uint8_t*)VAR_12->argb;
      VAR_18->u.RGBA.stride = VAR_12->argb_stride * sizeof(uint32_t);
      VAR_18->u.RGBA.size = VAR_18->u.RGBA.stride * VAR_12->height;
    } else {
      VAR_18->colorspace = VAR_20 ? VAR_3 : VAR_2;
      VAR_18->u.YUVA.y = VAR_12->y;
      VAR_18->u.YUVA.u = VAR_12->u;
      VAR_18->u.YUVA.v = VAR_12->v;
      VAR_18->u.YUVA.a = VAR_20 ? VAR_12->a : ((void*)0);
      VAR_18->u.YUVA.y_stride = VAR_12->y_stride;
      VAR_18->u.YUVA.u_stride = VAR_12->uv_stride;
      VAR_18->u.YUVA.v_stride = VAR_12->uv_stride;
      VAR_18->u.YUVA.a_stride = VAR_20 ? VAR_12->a_stride : 0;
      VAR_18->u.YUVA.y_size = VAR_12->height * VAR_12->y_stride;
      VAR_18->u.YUVA.u_size = (VAR_12->height + 1) / 2 * VAR_12->uv_stride;
      VAR_18->u.YUVA.v_size = (VAR_12->height + 1) / 2 * VAR_12->uv_stride;
      VAR_18->u.YUVA.a_size = VAR_12->height * VAR_12->a_stride;
    }
    VAR_18->is_external_memory = 1;

    VAR_16 = FUNC_0(VAR_10, VAR_11, &VAR_17);
    VAR_15 = (VAR_16 == VAR_5);
    if (VAR_15 && !VAR_13 && VAR_12->use_argb) {

      int VAR_22, VAR_23;
      uint32_t* VAR_24 = VAR_12->argb;
      for (VAR_23 = 0; VAR_23 < VAR_12->height; ++VAR_23) {
        for (VAR_22 = 0; VAR_22 < VAR_12->width; ++VAR_22) VAR_24[VAR_22] |= 0xff000000u;
        VAR_24 += VAR_12->argb_stride;
      }
    }
  } while (0);

  if (VAR_16 != VAR_5) {
    FUNC_3("input data", VAR_16);
    VAR_15 = 0;
  }

  FUNC_4(VAR_18);

  if (VAR_15 && VAR_14 != ((void*)0)) {
    VAR_15 = FUNC_1(VAR_10, VAR_11, VAR_14);
    if (!VAR_15) {
      FUNC_3("metadata", VAR_4);
    }
  }
  if (!VAR_15) FUNC_8(VAR_12);
  return VAR_15;
}
