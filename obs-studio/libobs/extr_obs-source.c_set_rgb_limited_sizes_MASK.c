
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct obs_source_frame {int format; int height; int width; } ;
struct obs_source {int async_channel_count; int * async_texture_formats; int * async_convert_height; int * async_convert_width; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static inline bool FUNC_1(struct obs_source *VAR_0,
      const struct obs_source_frame *VAR_1)
{
 VAR_0->async_convert_width[0] = VAR_1->width;
 VAR_0->async_convert_height[0] = VAR_1->height;
 VAR_0->async_texture_formats[0] = FUNC_0(VAR_1->format);
 VAR_0->async_channel_count = 1;
 return 1;
}
