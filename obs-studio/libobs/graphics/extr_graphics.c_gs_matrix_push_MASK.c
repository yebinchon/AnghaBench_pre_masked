
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct matrix4 {int dummy; } ;
struct TYPE_4__ {int cur_matrix; int matrix_stack; } ;
typedef TYPE_1__ graphics_t ;


 int FUNC_0 (int ,struct matrix4*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (struct matrix4*,struct matrix4*,int) ;
 TYPE_1__* VAR_0 ;
 struct matrix4* FUNC_3 (TYPE_1__*) ;

void FUNC_4(void)
{
 graphics_t *VAR_1 = VAR_0;

 if (!FUNC_1("gs_matrix_push"))
  return;

 struct matrix4 VAR_2, *VAR_3 = FUNC_3(VAR_1);

 FUNC_2(&VAR_2, VAR_3, sizeof(struct matrix4));
 FUNC_0(VAR_1->matrix_stack, &VAR_2);
 VAR_1->cur_matrix++;
}
