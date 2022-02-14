
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct vec2 {float x; float y; } ;
struct TYPE_2__ {float x; float y; } ;
struct obs_scene_item {scalar_t__ bounds_type; int bounds_align; TYPE_1__ bounds; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (struct vec2*,int ,int,int) ;
 float FUNC_1 (float) ;
 int FUNC_2 (struct vec2*,struct vec2*,float) ;

__attribute__((used)) static void FUNC_3(struct obs_scene_item *VAR_6,
      struct vec2 *VAR_7, struct vec2 *VAR_8,
      uint32_t *VAR_9, uint32_t *VAR_10)
{
 float VAR_11 = (float)(*VAR_9) * FUNC_1(VAR_8->x);
 float VAR_12 = (float)(*VAR_10) * FUNC_1(VAR_8->y);
 float VAR_13 = VAR_11 / VAR_12;
 float VAR_14 = VAR_6->bounds.x / VAR_6->bounds.y;
 uint32_t VAR_15 = VAR_6->bounds_type;
 float VAR_16, VAR_17;

 if (VAR_6->bounds_type == VAR_0)
  if (VAR_11 > VAR_6->bounds.x || VAR_12 > VAR_6->bounds.y)
   VAR_15 = VAR_1;

 if (VAR_15 == VAR_1 ||
     VAR_15 == VAR_2) {
  bool VAR_18 = (VAR_14 < VAR_13);
  float VAR_19;

  if (VAR_6->bounds_type == VAR_2)
   VAR_18 = !VAR_18;

  VAR_19 = VAR_18 ? VAR_6->bounds.x / VAR_11
    : VAR_6->bounds.y / VAR_12;

  FUNC_2(VAR_8, VAR_8, VAR_19);

 } else if (VAR_15 == VAR_4) {
  FUNC_2(VAR_8, VAR_8, VAR_6->bounds.x / VAR_11);

 } else if (VAR_15 == VAR_3) {
  FUNC_2(VAR_8, VAR_8, VAR_6->bounds.y / VAR_12);

 } else if (VAR_15 == VAR_5) {
  VAR_8->x = VAR_6->bounds.x / (float)(*VAR_9);
  VAR_8->y = VAR_6->bounds.y / (float)(*VAR_10);
 }

 VAR_11 = (float)(*VAR_9) * VAR_8->x;
 VAR_12 = (float)(*VAR_10) * VAR_8->y;
 VAR_16 = VAR_6->bounds.x - VAR_11;
 VAR_17 = VAR_6->bounds.y - VAR_12;
 *VAR_9 = (uint32_t)VAR_6->bounds.x;
 *VAR_10 = (uint32_t)VAR_6->bounds.y;

 FUNC_0(VAR_7, VAR_6->bounds_align, (int)-VAR_16,
        (int)-VAR_17);
}
