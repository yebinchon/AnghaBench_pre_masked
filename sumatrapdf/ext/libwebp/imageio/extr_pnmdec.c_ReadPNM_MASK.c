
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint8_t ;
typedef size_t uint64_t ;
struct Metadata {int dummy; } ;
struct TYPE_7__ {size_t width; int height; } ;
typedef TYPE_1__ WebPPicture ;
struct TYPE_8__ {size_t data_size; int type; int width; int height; size_t bytes_per_px; int depth; int * data; } ;
typedef TYPE_2__ PNMInfo ;


 int FUNC_0 (size_t,size_t) ;
 size_t FUNC_1 (TYPE_2__*) ;
 int VAR_0 ;
 int FUNC_2 (TYPE_1__* const,int *,int) ;
 int FUNC_3 (TYPE_1__* const,int *,int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int ,char*,...) ;
 int FUNC_6 (void*) ;
 scalar_t__ FUNC_7 (size_t) ;
 int FUNC_8 (int *,int const* const,int) ;
 int VAR_1 ;

int FUNC_9(const uint8_t* const VAR_2, size_t VAR_3,
            WebPPicture* const VAR_4, int VAR_5,
            struct Metadata* const VAR_6) {
  int VAR_7 = 0;
  int VAR_8, VAR_9;
  uint64_t VAR_10, VAR_11;
  uint8_t* VAR_12 = ((void*)0), *VAR_13;
  size_t VAR_14;
  PNMInfo VAR_15;

  VAR_15.data = VAR_2;
  VAR_15.data_size = VAR_3;
  VAR_14 = FUNC_1(&VAR_15);
  if (VAR_14 == 0) {
    FUNC_5(VAR_1, "Error parsing PNM header.\n");
    goto End;
  }

  if (VAR_15.type < 5 || VAR_15.type > 7) {
    FUNC_5(VAR_1, "Unsupported P%d PNM format.\n", VAR_15.type);
    goto End;
  }


  if (VAR_4 == ((void*)0)) goto End;
  if (VAR_15.width > VAR_0 || VAR_15.height > VAR_0) {
    FUNC_5(VAR_1, "Invalid %dx%d dimension for PNM\n",
                    VAR_15.width, VAR_15.height);
    goto End;
  }

  VAR_11 = (uint64_t)VAR_15.width * VAR_15.height * VAR_15.bytes_per_px;
  if (VAR_3 < VAR_14 + VAR_11) {
    FUNC_5(VAR_1, "Truncated PNM file (P%d).\n", VAR_15.type);
    goto End;
  }
  VAR_10 =
      (uint64_t)(VAR_15.bytes_per_px < 3 ? 3 : VAR_15.bytes_per_px) * VAR_15.width;
  if (VAR_10 != (size_t)VAR_10 ||
      !FUNC_0(VAR_10, VAR_15.height)) {
    goto End;
  }

  VAR_12 = (uint8_t*)FUNC_7((size_t)VAR_10 * VAR_15.height);
  if (VAR_12 == ((void*)0)) goto End;


  VAR_13 = VAR_12;
  for (VAR_9 = 0; VAR_9 < VAR_15.height; ++VAR_9) {
    FUNC_4(VAR_14 + VAR_15.bytes_per_px * VAR_15.width <= VAR_3);
    if (VAR_15.depth == 1) {

      for (VAR_8 = 0; VAR_8 < VAR_15.width; ++VAR_8) {
        const uint8_t VAR_16 = VAR_2[VAR_14 + VAR_8];
        VAR_13[3 * VAR_8 + 0] = VAR_13[3 * VAR_8 + 1] = VAR_13[3 * VAR_8 + 2] = VAR_16;
      }
    } else if (VAR_15.depth == 3) {
      FUNC_8(VAR_13, VAR_2 + VAR_14, 3 * VAR_15.width * sizeof(*VAR_2));
    } else if (VAR_15.depth == 4) {
      FUNC_8(VAR_13, VAR_2 + VAR_14, 4 * VAR_15.width * sizeof(*VAR_2));
    }
    VAR_14 += VAR_15.bytes_per_px * VAR_15.width;
    VAR_13 += VAR_10;
  }


  VAR_4->width = VAR_15.width;
  VAR_4->height = VAR_15.height;
  VAR_7 = (VAR_15.depth == 4) ? FUNC_3(VAR_4, VAR_12, (int)VAR_10)
                         : FUNC_2(VAR_4, VAR_12, (int)VAR_10);
  if (!VAR_7) goto End;

  VAR_7 = 1;
 End:
  FUNC_6((void*)VAR_12);

  (void)VAR_6;
  (void)VAR_5;
  return VAR_7;
}
