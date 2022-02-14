
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct obs_scene_item {int is_group; int crop; } ;


 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (struct obs_scene_item const*) ;
 scalar_t__ FUNC_2 (struct obs_scene_item const*) ;

__attribute__((used)) static inline bool FUNC_3(const struct obs_scene_item *VAR_0)
{
 return FUNC_0(&VAR_0->crop) || FUNC_2(VAR_0) ||
        (FUNC_1(VAR_0) && !VAR_0->is_group);
}
