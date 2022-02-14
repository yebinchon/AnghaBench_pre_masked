
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct video_output_info {scalar_t__ height; scalar_t__ width; scalar_t__ fps_den; scalar_t__ fps_num; } ;



__attribute__((used)) static inline bool FUNC_0(const struct video_output_info *VAR_0)
{
 return VAR_0->height != 0 && VAR_0->width != 0 && VAR_0->fps_den != 0 &&
        VAR_0->fps_num != 0;
}
