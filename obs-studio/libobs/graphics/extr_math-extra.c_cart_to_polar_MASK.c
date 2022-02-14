
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vec3 {int z; int y; int x; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,int) ;
 scalar_t__ FUNC_2 (int,float,int ) ;
 int FUNC_3 (struct vec3*,struct vec3*) ;
 int FUNC_4 (struct vec3 const*) ;
 int FUNC_5 (struct vec3*) ;

void FUNC_6(struct vec3 *VAR_1, const struct vec3 *VAR_2)
{
 struct vec3 VAR_3;
 VAR_3.z = FUNC_4(VAR_2);

 if (FUNC_2(VAR_3.z, 0.0f, VAR_0)) {
  FUNC_5(&VAR_3);
 } else {
  VAR_3.x = FUNC_0(VAR_2->y / VAR_3.z);
  VAR_3.y = FUNC_1(VAR_2->x, VAR_2->z);
 }

 FUNC_3(VAR_1, &VAR_3);
}
