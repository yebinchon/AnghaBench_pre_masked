
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vec3 {int y; int z; int x; } ;
struct quat {int dummy; } ;
struct axisang {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (struct axisang*,float,float,float,int ) ;
 int FUNC_3 (int ,float,int ) ;
 int FUNC_4 (struct quat*,struct quat*) ;
 int FUNC_5 (struct quat*,struct axisang*) ;
 int FUNC_6 (struct quat*) ;
 int FUNC_7 (struct quat*,struct quat*,struct quat*) ;
 int FUNC_8 (struct vec3*,struct vec3*) ;
 int FUNC_9 (struct vec3*,struct vec3 const*) ;

void FUNC_10(struct quat *VAR_1, const struct vec3 *VAR_2)
{
 struct vec3 VAR_3;
 struct quat VAR_4, VAR_5;
 bool VAR_6;
 bool VAR_7;
 struct axisang VAR_8;

 FUNC_9(&VAR_3, VAR_2);
 FUNC_8(&VAR_3, &VAR_3);

 FUNC_6(&VAR_4);
 FUNC_6(&VAR_5);

 VAR_6 = FUNC_3(VAR_3.x, 0.0f, VAR_0) ||
     FUNC_3(VAR_3.z, 0.0f, VAR_0);
 VAR_7 = FUNC_3(VAR_3.y, 0.0f, VAR_0);

 if (VAR_6) {
  FUNC_2(&VAR_8, 0.0f, 1.0f, 0.0f,
       FUNC_1(VAR_3.x, VAR_3.z));

  FUNC_5(&VAR_4, &VAR_8);
 }
 if (VAR_7) {
  FUNC_2(&VAR_8, -1.0f, 0.0f, 0.0f, FUNC_0(VAR_3.y));
  FUNC_5(&VAR_5, &VAR_8);
 }

 if (!VAR_6)
  FUNC_4(VAR_1, &VAR_5);
 else if (!VAR_7)
  FUNC_4(VAR_1, &VAR_4);
 else
  FUNC_7(VAR_1, &VAR_4, &VAR_5);
}
