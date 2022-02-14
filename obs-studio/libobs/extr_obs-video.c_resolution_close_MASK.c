
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct obs_core_video {scalar_t__ base_height; scalar_t__ base_width; } ;


 int FUNC_0 (long) ;

__attribute__((used)) static inline bool FUNC_1(struct obs_core_video *VAR_0,
        uint32_t VAR_1, uint32_t VAR_2)
{
 long VAR_3 = (long)VAR_0->base_width - (long)VAR_1;
 long VAR_4 = (long)VAR_0->base_height - (long)VAR_2;

 return FUNC_0(VAR_3) <= 16 && FUNC_0(VAR_4) <= 16;
}
