
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int scale_height; int scale_width; int format; int height; int width; } ;
struct ffmpeg_data {int swscale; TYPE_1__ config; } ;
struct TYPE_5__ {int pix_fmt; } ;
typedef TYPE_2__ AVCodecContext ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,struct ffmpeg_data*,char*) ;
 int FUNC_1 (int ,int ,int ,int ,int ,int ,int ,int *,int *,int *) ;

__attribute__((used)) static bool FUNC_2(struct ffmpeg_data *VAR_2, AVCodecContext *VAR_3)
{
 VAR_2->swscale = FUNC_1(
  VAR_2->config.width, VAR_2->config.height, VAR_2->config.format,
  VAR_2->config.scale_width, VAR_2->config.scale_height,
  VAR_3->pix_fmt, VAR_1, ((void*)0), ((void*)0), ((void*)0));

 if (!VAR_2->swscale) {
  FUNC_0(VAR_0, VAR_2,
     "Could not initialize swscale");
  return 0;
 }

 return 1;
}
