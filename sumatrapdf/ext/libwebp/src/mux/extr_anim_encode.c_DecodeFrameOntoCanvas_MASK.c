
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_7__ ;
typedef struct TYPE_22__ TYPE_6__ ;
typedef struct TYPE_21__ TYPE_5__ ;
typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;
typedef struct TYPE_16__ TYPE_12__ ;


typedef int uint8_t ;
struct TYPE_20__ {int argb_stride; int height; scalar_t__ argb; } ;
typedef TYPE_4__ WebPPicture ;
struct TYPE_23__ {int size; int bytes; } ;
struct TYPE_21__ {int y_offset; int x_offset; TYPE_7__ bitstream; } ;
typedef TYPE_5__ WebPMuxFrameInfo ;
struct TYPE_17__ {int stride; int size; int * rgba; } ;
struct TYPE_18__ {TYPE_1__ RGBA; } ;
struct TYPE_19__ {int is_external_memory; TYPE_2__ u; int colorspace; } ;
struct TYPE_16__ {int height; int width; } ;
struct TYPE_22__ {TYPE_3__ output; TYPE_12__ input; } ;
typedef TYPE_6__ WebPDecoderConfig ;
typedef TYPE_7__ WebPData ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int ,int ,TYPE_6__*) ;
 scalar_t__ FUNC_1 (int ,int ,TYPE_12__*) ;
 int FUNC_2 (TYPE_6__*) ;
 int FUNC_3 (TYPE_4__* const,int ,int ,int ,int ,TYPE_4__*) ;
 int FUNC_4 (TYPE_4__* const,int *) ;

__attribute__((used)) static int FUNC_5(const WebPMuxFrameInfo* const VAR_2,
                                 WebPPicture* const VAR_3) {
  const WebPData* const VAR_4 = &VAR_2->bitstream;
  WebPPicture VAR_5;
  WebPDecoderConfig VAR_6;
  FUNC_2(&VAR_6);
  FUNC_4(VAR_3, ((void*)0));
  if (FUNC_1(VAR_4->bytes, VAR_4->size, &VAR_6.input) !=
      VAR_1) {
    return 0;
  }
  if (!FUNC_3(VAR_3, VAR_2->x_offset, VAR_2->y_offset,
                       VAR_6.input.width, VAR_6.input.height, &VAR_5)) {
    return 0;
  }
  VAR_6.output.is_external_memory = 1;
  VAR_6.output.colorspace = VAR_0;
  VAR_6.output.u.RGBA.rgba = (uint8_t*)VAR_5.argb;
  VAR_6.output.u.RGBA.stride = VAR_5.argb_stride * 4;
  VAR_6.output.u.RGBA.size = VAR_6.output.u.RGBA.stride * VAR_5.height;

  if (FUNC_0(VAR_4->bytes, VAR_4->size, &VAR_6) != VAR_1) {
    return 0;
  }
  return 1;
}
