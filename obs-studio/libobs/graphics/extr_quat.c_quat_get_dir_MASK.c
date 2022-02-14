
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vec3 {int dummy; } ;
struct quat {int dummy; } ;
struct matrix3 {int z; } ;


 int FUNC_0 (struct matrix3*,struct quat const*) ;
 int FUNC_1 (struct vec3*,int *) ;

void FUNC_2(struct vec3 *VAR_0, const struct quat *VAR_1)
{
 struct matrix3 VAR_2;
 FUNC_0(&VAR_2, VAR_1);
 FUNC_1(VAR_0, &VAR_2.z);
}
