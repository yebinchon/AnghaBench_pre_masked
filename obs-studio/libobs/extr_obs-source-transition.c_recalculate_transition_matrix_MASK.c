
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


struct vec2 {float x; float y; } ;
struct matrix4 {int dummy; } ;
struct TYPE_9__ {int transition_scale_type; int * transition_matrices; int transition_alignment; struct TYPE_9__** transition_sources; } ;
typedef TYPE_1__ obs_source_t ;
typedef enum obs_transition_scale_type { ____Placeholder_obs_transition_scale_type } obs_transition_scale_type ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct vec2*,int ,int,int) ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int *,struct matrix4*) ;
 int FUNC_5 (struct matrix4*) ;
 int FUNC_6 (struct matrix4*,struct matrix4*,float,float,float) ;
 int FUNC_7 (struct matrix4*,struct matrix4*,float,float,float) ;
 scalar_t__ FUNC_8 (TYPE_1__*) ;
 scalar_t__ FUNC_9 (TYPE_1__*) ;
 int FUNC_10 (TYPE_1__*) ;
 int FUNC_11 (struct vec2*) ;

__attribute__((used)) static void FUNC_12(obs_source_t *VAR_3, size_t VAR_4)
{
 obs_source_t *VAR_5;
 struct matrix4 VAR_6;
 struct vec2 VAR_7;
 struct vec2 VAR_8;
 float VAR_9 = (float)FUNC_1(VAR_3);
 float VAR_10 = (float)FUNC_2(VAR_3);
 float VAR_11;
 float VAR_12;
 float VAR_13 = VAR_9 / VAR_10;
 float VAR_14;
 enum obs_transition_scale_type VAR_15 = VAR_3->transition_scale_type;

 FUNC_3(VAR_3);

 VAR_5 = VAR_3->transition_sources[VAR_4];
 if (!VAR_5) {
  FUNC_10(VAR_3);
  return;
 }

 VAR_11 = (float)FUNC_9(VAR_5);
 VAR_12 = (float)FUNC_8(VAR_5);
 FUNC_10(VAR_3);

 if (VAR_11 == 0.0f || VAR_12 == 0.0f)
  return;

 VAR_14 = VAR_11 / VAR_12;

 if (VAR_15 == VAR_1) {
  if (VAR_11 > VAR_9 || VAR_12 > VAR_10) {
   VAR_15 = VAR_0;
  } else {
   VAR_8.x = 1.0f;
   VAR_8.y = 1.0f;
  }
 }

 if (VAR_15 == VAR_0) {
  bool VAR_16 = VAR_13 < VAR_14;
  VAR_8.x = VAR_8.y = VAR_16 ? VAR_9 / VAR_11
           : VAR_10 / VAR_12;

 } else if (VAR_15 == VAR_2) {
  VAR_8.x = VAR_9 / VAR_11;
  VAR_8.y = VAR_10 / VAR_12;
 }

 VAR_11 *= VAR_8.x;
 VAR_12 *= VAR_8.y;

 FUNC_11(&VAR_7);
 FUNC_0(&VAR_7, VAR_3->transition_alignment, (int)(VAR_9 - VAR_11),
        (int)(VAR_10 - VAR_12));

 FUNC_5(&VAR_6);
 FUNC_6(&VAR_6, &VAR_6, VAR_8.x, VAR_8.y, 1.0f);
 FUNC_7(&VAR_6, &VAR_6, VAR_7.x, VAR_7.y, 0.0f);
 FUNC_4(&VAR_3->transition_matrices[VAR_4], &VAR_6);
}
