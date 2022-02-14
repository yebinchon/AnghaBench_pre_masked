
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef scalar_t__ uint32_t ;
struct ffmpeg_image {int cx; int cy; int format; } ;
typedef enum gs_color_format { ____Placeholder_gs_color_format } gs_color_format ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (struct ffmpeg_image*,int *,int) ;
 int FUNC_4 (struct ffmpeg_image*) ;
 scalar_t__ FUNC_5 (struct ffmpeg_image*,char const*) ;

uint8_t *FUNC_6(const char *VAR_0,
         enum gs_color_format *VAR_1,
         uint32_t *VAR_2, uint32_t *VAR_3)
{
 struct ffmpeg_image VAR_4;
 uint8_t *VAR_5 = ((void*)0);

 if (FUNC_5(&VAR_4, VAR_0)) {
  VAR_5 = FUNC_1(VAR_4.cx * VAR_4.cy * 4);

  if (FUNC_3(&VAR_4, VAR_5, VAR_4.cx * 4)) {
   *VAR_1 = FUNC_2(VAR_4.format);
   *VAR_2 = (uint32_t)VAR_4.cx;
   *VAR_3 = (uint32_t)VAR_4.cy;
  } else {
   FUNC_0(VAR_5);
   VAR_5 = ((void*)0);
  }

  FUNC_4(&VAR_4);
 }

 return VAR_5;
}
