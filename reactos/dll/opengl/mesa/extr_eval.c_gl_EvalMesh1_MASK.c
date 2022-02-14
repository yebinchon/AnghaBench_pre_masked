
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int MapGrid1u2; int MapGrid1u1; int MapGrid1un; } ;
struct TYPE_10__ {TYPE_1__ Eval; } ;
typedef int GLint ;
typedef int GLfloat ;
typedef int GLenum ;
typedef TYPE_2__ GLcontext ;


 int VAR_0 ;
 int VAR_1 ;

 int VAR_2 ;

 int VAR_3 ;
 scalar_t__ FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*,int) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*,int) ;
 int FUNC_4 (TYPE_2__*,int ,char*) ;

void FUNC_5( GLcontext* VAR_4, GLenum VAR_5, GLint VAR_6, GLint VAR_7 )
{
   GLint VAR_8;
   GLfloat VAR_9, VAR_10;
   GLenum VAR_11;

 if (FUNC_0(VAR_4)) {
  FUNC_4( VAR_4, VAR_1, "glEvalMesh1" );
  return;
 }

 switch (VAR_5) {
 case 128:
  VAR_11 = VAR_3;
  break;
 case 129:
  VAR_11 = VAR_2;
  break;
 default:
  FUNC_4( VAR_4, VAR_0, "glEvalMesh1(mode)" );
  return;
 }

 VAR_10 = (VAR_4->Eval.MapGrid1u2 - VAR_4->Eval.MapGrid1u1)
  / (GLfloat) VAR_4->Eval.MapGrid1un;

 FUNC_1( VAR_4, VAR_11 );
 for (VAR_8=VAR_6;VAR_8<=VAR_7;VAR_8++) {
  if (VAR_8==0) {
   VAR_9 = VAR_4->Eval.MapGrid1u1;
  }
  else if (VAR_8==VAR_4->Eval.MapGrid1un) {
   VAR_9 = VAR_4->Eval.MapGrid1u2;
  }
  else {
   VAR_9 = VAR_8 * VAR_10 + VAR_4->Eval.MapGrid1u1;
  }
  FUNC_3( VAR_4, VAR_9 );
 }
 FUNC_2(VAR_4);
}
