
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct nvenc_encoder {int initialized; TYPE_2__* vframe; TYPE_1__* context; int nvenc; } ;
struct TYPE_5__ {int color_range; int colorspace; int height; int width; int format; } ;
struct TYPE_4__ {int color_range; int colorspace; int height; int width; int pix_fmt; } ;


 int FUNC_0 (int) ;
 TYPE_2__* FUNC_1 () ;
 int FUNC_2 (TYPE_2__*,int ) ;
 int FUNC_3 (TYPE_1__*,int ,int *) ;
 int FUNC_4 () ;
 int FUNC_5 (char*,...) ;

__attribute__((used)) static bool FUNC_6(struct nvenc_encoder *VAR_0)
{
 int VAR_1;

 VAR_1 = FUNC_3(VAR_0->context, VAR_0->nvenc, ((void*)0));
 if (VAR_1 < 0) {
  FUNC_5("Failed to open NVENC codec: %s", FUNC_0(VAR_1));
  return 0;
 }

 VAR_0->vframe = FUNC_1();
 if (!VAR_0->vframe) {
  FUNC_5("Failed to allocate video frame");
  return 0;
 }

 VAR_0->vframe->format = VAR_0->context->pix_fmt;
 VAR_0->vframe->width = VAR_0->context->width;
 VAR_0->vframe->height = VAR_0->context->height;
 VAR_0->vframe->colorspace = VAR_0->context->colorspace;
 VAR_0->vframe->color_range = VAR_0->context->color_range;

 VAR_1 = FUNC_2(VAR_0->vframe, FUNC_4());
 if (VAR_1 < 0) {
  FUNC_5("Failed to allocate vframe: %s", FUNC_0(VAR_1));
  return 0;
 }

 VAR_0->initialized = 1;
 return 1;
}
