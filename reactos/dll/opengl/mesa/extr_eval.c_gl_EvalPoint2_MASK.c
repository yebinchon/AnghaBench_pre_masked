
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int MapGrid2u1; int MapGrid2un; int MapGrid2u2; int MapGrid2v1; int MapGrid2vn; int MapGrid2v2; } ;
struct TYPE_6__ {TYPE_1__ Eval; } ;
typedef int GLint ;
typedef int GLfloat ;
typedef TYPE_2__ GLcontext ;


 int FUNC_0 (TYPE_2__*,int,int) ;

void FUNC_1( GLcontext* VAR_0, GLint VAR_1, GLint VAR_2 )
{
 GLfloat VAR_3, VAR_4;
 GLfloat VAR_5, VAR_6;

 if (VAR_1==0) {
  VAR_3 = VAR_0->Eval.MapGrid2u1;
 }
 else if (VAR_1==VAR_0->Eval.MapGrid2un) {
  VAR_3 = VAR_0->Eval.MapGrid2u2;
 }
 else {
  VAR_4 = (VAR_0->Eval.MapGrid2u2 - VAR_0->Eval.MapGrid2u1)
   / (GLfloat) VAR_0->Eval.MapGrid2un;
  VAR_3 = VAR_1 * VAR_4 + VAR_0->Eval.MapGrid2u1;
 }

 if (VAR_2==0) {
  VAR_5 = VAR_0->Eval.MapGrid2v1;
 }
 else if (VAR_2==VAR_0->Eval.MapGrid2vn) {
  VAR_5 = VAR_0->Eval.MapGrid2v2;
 }
 else {
  VAR_6 = (VAR_0->Eval.MapGrid2v2 - VAR_0->Eval.MapGrid2v1)
   / (GLfloat) VAR_0->Eval.MapGrid2vn;
  VAR_5 = VAR_2 * VAR_6 + VAR_0->Eval.MapGrid2v1;
 }

 FUNC_0( VAR_0, VAR_3, VAR_5 );
}
