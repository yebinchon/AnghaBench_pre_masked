
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct matrix4 {int dummy; } ;
struct matrix3 {int dummy; } ;
typedef int mat ;
struct TYPE_3__ {int cur_value; } ;
typedef TYPE_1__ gs_sparam_t ;


 int FUNC_0 (int ,struct matrix4*,int) ;
 int FUNC_1 (struct matrix4*,struct matrix3 const*) ;

void FUNC_2(gs_sparam_t *VAR_0, const struct matrix3 *VAR_1)
{
 struct matrix4 VAR_2;
 FUNC_1(&VAR_2, VAR_1);

 FUNC_0(VAR_0->cur_value, &VAR_2, sizeof(VAR_2));
}
