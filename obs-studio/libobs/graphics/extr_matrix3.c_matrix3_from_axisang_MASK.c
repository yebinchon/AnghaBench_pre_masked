
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct quat {int dummy; } ;
struct matrix3 {int dummy; } ;
struct axisang {int dummy; } ;


 int FUNC_0 (struct matrix3*,struct quat*) ;
 int FUNC_1 (struct quat*,struct axisang const*) ;

void FUNC_2(struct matrix3 *VAR_0, const struct axisang *VAR_1)
{
 struct quat VAR_2;
 FUNC_1(&VAR_2, VAR_1);
 FUNC_0(VAR_0, &VAR_2);
}
