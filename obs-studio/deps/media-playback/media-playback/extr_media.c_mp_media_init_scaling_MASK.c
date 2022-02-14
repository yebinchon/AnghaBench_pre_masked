
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* decoder; } ;
struct TYPE_7__ {int scale_format; TYPE_2__ v; int scale_linesizes; int scale_pic; int swscale; } ;
typedef TYPE_3__ mp_media_t ;
struct TYPE_5__ {int height; int width; int pix_fmt; int color_range; int colorspace; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int ,int ,int ,int) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *,int ,int ,int ,int ,int ,int ,int ,int *,int *,int *) ;
 int* FUNC_5 (int) ;
 int FUNC_6 (int ,int const*,int,int const*,int,int ,int ,int ) ;

__attribute__((used)) static bool FUNC_7(mp_media_t *VAR_3)
{
 int VAR_4 = FUNC_2(VAR_3->v.decoder->colorspace);
 int VAR_5 = FUNC_3(VAR_3->v.decoder->color_range);
 const int *VAR_6 = FUNC_5(VAR_4);

 VAR_3->swscale = FUNC_4(((void*)0), VAR_3->v.decoder->width,
       VAR_3->v.decoder->height,
       VAR_3->v.decoder->pix_fmt,
       VAR_3->v.decoder->width,
       VAR_3->v.decoder->height, VAR_3->scale_format,
       VAR_2, ((void*)0), ((void*)0), ((void*)0));
 if (!VAR_3->swscale) {
  FUNC_1(VAR_1, "MP: Failed to initialize scaler");
  return 0;
 }

 FUNC_6(VAR_3->swscale, VAR_6, VAR_5, VAR_6, VAR_5, 0,
     VAR_0, VAR_0);

 int VAR_7 = FUNC_0(VAR_3->scale_pic, VAR_3->scale_linesizes,
     VAR_3->v.decoder->width, VAR_3->v.decoder->height,
     VAR_3->scale_format, 1);
 if (VAR_7 < 0) {
  FUNC_1(VAR_1, "MP: Failed to create scale pic data");
  return 0;
 }

 return 1;
}
