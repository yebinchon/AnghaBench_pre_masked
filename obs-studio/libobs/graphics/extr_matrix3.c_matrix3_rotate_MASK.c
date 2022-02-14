
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct quat {int dummy; } ;
struct matrix3 {int dummy; } ;


 int FUNC_0 (struct matrix3*,struct quat const*) ;
 int FUNC_1 (struct matrix3*,struct matrix3 const*,struct matrix3*) ;

void FUNC_2(struct matrix3 *VAR_0, const struct matrix3 *VAR_1,
      const struct quat *VAR_2)
{
 struct matrix3 VAR_3;
 FUNC_0(&VAR_3, VAR_2);
 FUNC_1(VAR_0, VAR_1, &VAR_3);
}
