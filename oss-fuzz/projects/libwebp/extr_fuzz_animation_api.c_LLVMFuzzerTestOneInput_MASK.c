
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int uint8_t ;
typedef size_t uint32_t ;
struct TYPE_12__ {int size; int bytes; } ;
struct TYPE_13__ {TYPE_1__ fragment; } ;
typedef TYPE_2__ WebPIterator ;
typedef int WebPDemuxer ;
struct TYPE_14__ {size_t size; int * bytes; } ;
typedef TYPE_3__ WebPData ;
struct TYPE_15__ {size_t use_threads; scalar_t__ color_mode; } ;
typedef TYPE_4__ WebPAnimDecoderOptions ;
typedef int WebPAnimDecoder ;
typedef scalar_t__ WEBP_CSP_MODE ;


 scalar_t__ VAR_0 ;
 size_t VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int **,int*) ;
 int * FUNC_2 (TYPE_3__*,TYPE_4__*) ;
 int FUNC_3 (TYPE_4__*) ;
 int FUNC_4 (TYPE_3__*) ;
 int * FUNC_5 (TYPE_3__*) ;
 int FUNC_6 (int * const) ;
 int FUNC_7 (int * const,int,TYPE_2__*) ;
 size_t FUNC_8 (int * const,int ) ;
 int FUNC_9 (TYPE_2__*) ;
 scalar_t__ FUNC_10 (int ,int ,int*,int*) ;
 int VAR_7 ;
 size_t VAR_8 ;

int FUNC_11(const uint8_t* const VAR_9, size_t VAR_10) {
  WebPData VAR_11;
  FUNC_4(&VAR_11);
  VAR_11.size = VAR_10;
  VAR_11.bytes = VAR_9;


  WebPDemuxer* const VAR_12 = FUNC_5(&VAR_11);
  if (!VAR_12) return 0;
  const uint32_t VAR_13 = FUNC_8(VAR_12, VAR_6);
  const uint32_t VAR_14 = FUNC_8(VAR_12, VAR_5);
  if ((size_t)VAR_13 * VAR_14 > VAR_8) {
    FUNC_6(VAR_12);
    return 0;
  }


  WebPIterator VAR_15;
  for (int VAR_16 = 0; VAR_16 < VAR_7; VAR_16++) {
    if (!FUNC_7(VAR_12, VAR_16 + 1, &VAR_15)) break;
    int VAR_17, VAR_18;
    if (FUNC_10(VAR_15.fragment.bytes, VAR_15.fragment.size, &VAR_17, &VAR_18)) {
      if ((size_t)VAR_17 * VAR_18 > VAR_8) {
        FUNC_9(&VAR_15);
        FUNC_6(VAR_12);
        return 0;
      }
    }
  }

  FUNC_9(&VAR_15);
  FUNC_6(VAR_12);

  WebPAnimDecoderOptions VAR_19;
  if (!FUNC_3(&VAR_19)) return 0;

  VAR_19.use_threads = VAR_10 & 1;

  VAR_19.color_mode = (WEBP_CSP_MODE)(VAR_10 % VAR_1);
  if (VAR_19.color_mode != VAR_0 &&
      VAR_19.color_mode != VAR_4 &&
      VAR_19.color_mode != VAR_3) {
    VAR_19.color_mode = VAR_2;
  }

  WebPAnimDecoder* VAR_20 = FUNC_2(&VAR_11, &VAR_19);
  if (!VAR_20) return 0;

  for (int VAR_21 = 0; VAR_21 < VAR_7; VAR_21++) {
    uint8_t* VAR_22;
    int VAR_23;
    if (!FUNC_1(VAR_20, &VAR_22, &VAR_23)) break;
  }

  FUNC_0(VAR_20);
  return 0;
}
