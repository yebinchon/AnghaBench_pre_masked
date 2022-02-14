
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct video_scale_info {int height; int width; } ;
typedef int obs_encoder_t ;
typedef enum qsv_cpu_platform { ____Placeholder_qsv_cpu_platform } qsv_cpu_platform ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 () ;

__attribute__((used)) static inline void FUNC_3(obs_encoder_t *VAR_1,
      struct video_scale_info *VAR_2)
{
 enum qsv_cpu_platform VAR_3 = FUNC_2();
 uint32_t VAR_4 = FUNC_1(VAR_1);
 uint32_t VAR_5 = FUNC_0(VAR_1);

 VAR_2->height = VAR_5;
 VAR_2->width = VAR_4;

 if (VAR_3 <= VAR_0) {
  if (VAR_4 > 1920) {
   VAR_2->width = 1920;
  }

  if (VAR_5 > 1200) {
   VAR_2->height = 1200;
  }
 }
}
