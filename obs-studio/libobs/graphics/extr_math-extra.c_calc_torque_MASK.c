
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vec3 {int dummy; } ;


 int VAR_0 ;
 float VAR_1 ;
 int FUNC_0 (struct vec3*,struct vec3*,struct vec3 const*) ;
 scalar_t__ FUNC_1 (struct vec3 const*,struct vec3 const*,int ) ;
 int FUNC_2 (struct vec3*,struct vec3 const*) ;
 float FUNC_3 (struct vec3*) ;
 int FUNC_4 (struct vec3*,struct vec3*,float) ;
 int FUNC_5 (struct vec3*,struct vec3 const*,struct vec3 const*) ;

void FUNC_6(struct vec3 *VAR_2, const struct vec3 *VAR_3, const struct vec3 *VAR_4,
   float VAR_5, float VAR_6, float VAR_7)
{
 struct vec3 VAR_8, VAR_9;
 float VAR_10, VAR_11, VAR_12;

 if (FUNC_1(VAR_3, VAR_4, VAR_0)) {
  FUNC_2(VAR_2, VAR_3);
  return;
 }

 FUNC_5(&VAR_8, VAR_4, VAR_3);
 VAR_10 = FUNC_3(&VAR_8);
 FUNC_4(&VAR_9, &VAR_8, 1.0f / VAR_10);

 VAR_11 = VAR_10 * VAR_5;
 if (VAR_11 < VAR_6)
  VAR_11 = VAR_6;

 VAR_12 = VAR_11 * VAR_7;

 if (VAR_12 <= (VAR_10 - VAR_1)) {
  FUNC_4(VAR_2, &VAR_9, VAR_12);
  FUNC_0(VAR_2, VAR_2, VAR_3);
 } else {
  FUNC_2(VAR_2, VAR_4);
 }
}
