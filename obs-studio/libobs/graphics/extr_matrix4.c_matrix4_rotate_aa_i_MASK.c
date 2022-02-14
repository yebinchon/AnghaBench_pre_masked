
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct matrix4 {int dummy; } ;
struct axisang {int dummy; } ;


 int FUNC_0 (struct matrix4*,struct axisang const*) ;
 int FUNC_1 (struct matrix4*,struct matrix4*,struct matrix4 const*) ;

void FUNC_2(struct matrix4 *VAR_0, const struct axisang *VAR_1,
    const struct matrix4 *VAR_2)
{
 struct matrix4 VAR_3;
 FUNC_0(&VAR_3, VAR_1);
 FUNC_1(VAR_0, &VAR_3, VAR_2);
}
