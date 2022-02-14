
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct obs_source_frame {int width; int height; } ;
struct obs_source {int* async_convert_width; int* async_convert_height; int async_channel_count; int * async_texture_formats; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static inline bool FUNC_0(struct obs_source *VAR_2,
      const struct obs_source_frame *VAR_3)
{
 VAR_2->async_convert_width[0] = VAR_3->width;
 VAR_2->async_convert_width[1] = VAR_3->width / 2;
 VAR_2->async_convert_height[0] = VAR_3->height;
 VAR_2->async_convert_height[1] = VAR_3->height / 2;
 VAR_2->async_texture_formats[0] = VAR_0;
 VAR_2->async_texture_formats[1] = VAR_1;
 VAR_2->async_channel_count = 2;
 return 1;
}
