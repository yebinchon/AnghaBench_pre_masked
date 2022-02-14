
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct video_output_info {char* name; int cache_size; int colorspace; int range; int height; int width; int fps_den; int fps_num; int format; } ;
struct obs_video_info {int colorspace; int range; int output_height; int output_width; int fps_den; int fps_num; int output_format; } ;



__attribute__((used)) static inline void FUNC_0(struct video_output_info *VAR_0,
       struct obs_video_info *VAR_1)
{
 VAR_0->name = "video";
 VAR_0->format = VAR_1->output_format;
 VAR_0->fps_num = VAR_1->fps_num;
 VAR_0->fps_den = VAR_1->fps_den;
 VAR_0->width = VAR_1->output_width;
 VAR_0->height = VAR_1->output_height;
 VAR_0->range = VAR_1->range;
 VAR_0->colorspace = VAR_1->colorspace;
 VAR_0->cache_size = 6;
}
