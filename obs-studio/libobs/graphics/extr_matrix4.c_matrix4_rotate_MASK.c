
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct quat {int dummy; } ;
struct matrix4 {int dummy; } ;


 int FUNC_0 (struct matrix4*,struct quat const*) ;
 int FUNC_1 (struct matrix4*,struct matrix4 const*,struct matrix4*) ;

void FUNC_2(struct matrix4 *VAR_0, const struct matrix4 *VAR_1,
      const struct quat *VAR_2)
{
 struct matrix4 VAR_3;
 FUNC_0(&VAR_3, VAR_2);
 FUNC_1(VAR_0, VAR_1, &VAR_3);
}
