
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int MapGrid2un; int MapGrid2vn; void* MapGrid2v2; void* MapGrid2v1; void* MapGrid2u2; void* MapGrid2u1; } ;
struct TYPE_7__ {TYPE_1__ Eval; } ;
typedef int GLint ;
typedef void* GLfloat ;
typedef TYPE_2__ GLcontext ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*,int ,char*) ;

void FUNC_2( GLcontext* VAR_2, GLint VAR_3, GLfloat VAR_4, GLfloat VAR_5,
    GLint VAR_6, GLfloat VAR_7, GLfloat VAR_8 )
{
   if (FUNC_0(VAR_2)) {
      FUNC_1( VAR_2, VAR_0, "glMapGrid2f" );
      return;
   }
   if (VAR_3<1) {
      FUNC_1( VAR_2, VAR_1, "glMapGrid2f(un)" );
      return;
   }
   if (VAR_6<1) {
      FUNC_1( VAR_2, VAR_1, "glMapGrid2f(vn)" );
      return;
   }
   VAR_2->Eval.MapGrid2un = VAR_3;
   VAR_2->Eval.MapGrid2u1 = VAR_4;
   VAR_2->Eval.MapGrid2u2 = VAR_5;
   VAR_2->Eval.MapGrid2vn = VAR_6;
   VAR_2->Eval.MapGrid2v1 = VAR_7;
   VAR_2->Eval.MapGrid2v2 = VAR_8;
}
