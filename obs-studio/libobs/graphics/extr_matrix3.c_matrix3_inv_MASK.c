
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct matrix4 {int dummy; } ;
struct TYPE_2__ {float w; } ;
struct matrix3 {TYPE_1__ t; } ;


 int FUNC_0 (struct matrix4*,struct matrix3 const*) ;
 int FUNC_1 (struct matrix4*,struct matrix4*) ;

void FUNC_2(struct matrix3 *VAR_0, const struct matrix3 *VAR_1)
{
 struct matrix4 VAR_2;
 FUNC_0(&VAR_2, VAR_1);
 FUNC_1((struct matrix4 *)VAR_0, &VAR_2);
 VAR_0->t.w = 0.0f;
}
