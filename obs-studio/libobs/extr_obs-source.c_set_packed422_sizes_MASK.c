
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct obs_source_frame {int width; int height; } ;
struct obs_source {int* async_convert_width; int async_channel_count; int * async_texture_formats; int * async_convert_height; } ;


 int VAR_0 ;

__attribute__((used)) static inline bool FUNC_0(struct obs_source *VAR_1,
           const struct obs_source_frame *VAR_2)
{
 VAR_1->async_convert_width[0] = VAR_2->width / 2;
 VAR_1->async_convert_height[0] = VAR_2->height;
 VAR_1->async_texture_formats[0] = VAR_0;
 VAR_1->async_channel_count = 1;
 return 1;
}
