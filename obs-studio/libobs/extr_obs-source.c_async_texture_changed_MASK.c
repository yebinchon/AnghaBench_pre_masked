
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct obs_source_frame {scalar_t__ width; scalar_t__ height; int full_range; int format; } ;
struct obs_source {scalar_t__ async_cache_width; scalar_t__ async_cache_height; int async_cache_full_range; int async_cache_format; } ;
typedef enum convert_type { ____Placeholder_convert_type } convert_type ;


 int FUNC_0 (int ,int ) ;

__attribute__((used)) static inline bool FUNC_1(struct obs_source *VAR_0,
      const struct obs_source_frame *VAR_1)
{
 enum convert_type VAR_2, VAR_3;
 VAR_2 = FUNC_0(VAR_0->async_cache_format,
    VAR_0->async_cache_full_range);
 VAR_3 = FUNC_0(VAR_1->format, VAR_1->full_range);

 return VAR_0->async_cache_width != VAR_1->width ||
        VAR_0->async_cache_height != VAR_1->height || VAR_2 != VAR_3;
}
