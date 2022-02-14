
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_2__ {scalar_t__ top; scalar_t__ bottom; } ;
struct obs_scene_item {TYPE_1__ crop; } ;



__attribute__((used)) static inline uint32_t FUNC_0(const struct obs_scene_item *VAR_0,
          uint32_t VAR_1)
{
 uint32_t VAR_2 = VAR_0->crop.top + VAR_0->crop.bottom;
 return (VAR_2 > VAR_1) ? 2 : (VAR_1 - VAR_2);
}
