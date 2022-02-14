
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct matrix3 {int dummy; } ;
struct axisang {int dummy; } ;


 int FUNC_0 (struct matrix3*,struct axisang const*) ;
 int FUNC_1 (struct matrix3*,struct matrix3 const*,struct matrix3*) ;

void FUNC_2(struct matrix3 *VAR_0, const struct matrix3 *VAR_1,
         const struct axisang *VAR_2)
{
 struct matrix3 VAR_3;
 FUNC_0(&VAR_3, VAR_2);
 FUNC_1(VAR_0, VAR_1, &VAR_3);
}
