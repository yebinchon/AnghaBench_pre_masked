
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct obs_scene_item {scalar_t__ last_width; scalar_t__ last_height; int source; } ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;

__attribute__((used)) static inline bool FUNC_2(struct obs_scene_item *VAR_0)
{
 uint32_t VAR_1 = FUNC_1(VAR_0->source);
 uint32_t VAR_2 = FUNC_0(VAR_0->source);

 return VAR_0->last_width != VAR_1 || VAR_0->last_height != VAR_2;
}
