
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ cur_matrix; int matrix_stack; } ;
typedef TYPE_1__ graphics_t ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,scalar_t__) ;
 int FUNC_2 (char*) ;
 TYPE_1__* VAR_1 ;

void FUNC_3(void)
{
 graphics_t *VAR_2 = VAR_1;

 if (!FUNC_2("gs_matrix_pop"))
  return;

 if (VAR_2->cur_matrix == 0) {
  FUNC_0(VAR_0, "Tried to pop last matrix on stack");
  return;
 }

 FUNC_1(VAR_2->matrix_stack, VAR_2->cur_matrix);
 VAR_2->cur_matrix--;
}
