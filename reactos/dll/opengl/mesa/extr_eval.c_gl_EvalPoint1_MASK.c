
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int MapGrid1u1; int MapGrid1un; int MapGrid1u2; } ;
struct TYPE_6__ {TYPE_1__ Eval; } ;
typedef int GLint ;
typedef int GLfloat ;
typedef TYPE_2__ GLcontext ;


 int FUNC_0 (TYPE_2__*,int) ;

void FUNC_1( GLcontext* VAR_0, GLint VAR_1 )
{
 GLfloat VAR_2, VAR_3;

 if (VAR_1==0) {
  VAR_2 = VAR_0->Eval.MapGrid1u1;
 }
 else if (VAR_1==VAR_0->Eval.MapGrid1un) {
  VAR_2 = VAR_0->Eval.MapGrid1u2;
 }
 else {
  VAR_3 = (VAR_0->Eval.MapGrid1u2 - VAR_0->Eval.MapGrid1u1)
   / (GLfloat) VAR_0->Eval.MapGrid1un;
  VAR_2 = VAR_1 * VAR_3 + VAR_0->Eval.MapGrid1u1;
 }
 FUNC_0( VAR_0, VAR_2 );
}
