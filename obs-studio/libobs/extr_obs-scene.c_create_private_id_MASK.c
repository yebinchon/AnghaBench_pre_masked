
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * data; } ;
struct obs_source {TYPE_1__ context; } ;
typedef int obs_scene_t ;


 struct obs_source* FUNC_0 (char const*,char const*,int *) ;

__attribute__((used)) static inline obs_scene_t *FUNC_1(const char *VAR_0, const char *VAR_1)
{
 struct obs_source *VAR_2 = FUNC_0(VAR_0, VAR_1, ((void*)0));
 return VAR_2->context.data;
}
