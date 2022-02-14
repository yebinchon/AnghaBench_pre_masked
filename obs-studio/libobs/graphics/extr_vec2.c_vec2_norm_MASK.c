
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vec2 {int dummy; } ;


 float FUNC_0 (struct vec2 const*) ;
 int FUNC_1 (struct vec2*,struct vec2 const*,float) ;

void FUNC_2(struct vec2 *VAR_0, const struct vec2 *VAR_1)
{
 float VAR_2 = FUNC_0(VAR_1);

 if (VAR_2 > 0.0f) {
  VAR_2 = 1.0f / VAR_2;
  FUNC_1(VAR_0, VAR_1, VAR_2);
 }
}
