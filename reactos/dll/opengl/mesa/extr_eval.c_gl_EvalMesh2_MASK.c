
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int MapGrid2u2; int MapGrid2u1; int MapGrid2v2; int MapGrid2v1; scalar_t__ MapGrid2vn; scalar_t__ MapGrid2un; } ;
struct TYPE_10__ {TYPE_1__ Eval; } ;
typedef int GLint ;
typedef int GLfloat ;
typedef int GLenum ;
typedef TYPE_2__ GLcontext ;



 int VAR_0 ;
 int VAR_1 ;

 int VAR_2 ;

 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (TYPE_2__*,int ) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*,int,int) ;
 int FUNC_6 (TYPE_2__*,int ,char*) ;

void FUNC_7( GLcontext* VAR_5, GLenum VAR_6, GLint VAR_7, GLint VAR_8, GLint VAR_9, GLint VAR_10 )
{
 GLint VAR_11, VAR_12;
 GLfloat VAR_13, VAR_14, VAR_15, VAR_16, VAR_17, VAR_18;

 if (FUNC_0(VAR_5)) {
  FUNC_6( VAR_5, VAR_1, "glEvalMesh2" );
  return;
 }

 VAR_14 = (VAR_5->Eval.MapGrid2u2 - VAR_5->Eval.MapGrid2u1)
  / (GLfloat) VAR_5->Eval.MapGrid2un;
 VAR_16 = (VAR_5->Eval.MapGrid2v2 - VAR_5->Eval.MapGrid2v1)
  / (GLfloat) VAR_5->Eval.MapGrid2vn;
 switch (VAR_6) {
 case 128:
  FUNC_3( VAR_5, VAR_3 );
  for (VAR_12=VAR_9;VAR_12<=VAR_10;VAR_12++) {
   if ((VAR_12)==0) { VAR_15 = VAR_5->Eval.MapGrid2v1; } else if ((VAR_12)==VAR_5->Eval.MapGrid2vn) { VAR_15 = VAR_5->Eval.MapGrid2v2; } else { VAR_15 = (VAR_12) * VAR_16 + VAR_5->Eval.MapGrid2v1; };
   for (VAR_11=VAR_7;VAR_11<=VAR_8;VAR_11++) {
    if ((VAR_11)==0) { VAR_13 = VAR_5->Eval.MapGrid2u1; } else if ((VAR_11)==VAR_5->Eval.MapGrid2un) { VAR_13 = VAR_5->Eval.MapGrid2u2; } else { VAR_13 = (VAR_11) * VAR_14 + VAR_5->Eval.MapGrid2u1; };
    FUNC_5( VAR_5, VAR_13, VAR_15 );
   }
  }
  FUNC_4(VAR_5);
  break;
 case 129:
  for (VAR_12=VAR_9;VAR_12<=VAR_10;VAR_12++) {
   if ((VAR_12)==0) { VAR_15 = VAR_5->Eval.MapGrid2v1; } else if ((VAR_12)==VAR_5->Eval.MapGrid2vn) { VAR_15 = VAR_5->Eval.MapGrid2v2; } else { VAR_15 = (VAR_12) * VAR_16 + VAR_5->Eval.MapGrid2v1; };
   FUNC_3( VAR_5, VAR_2 );
   for (VAR_11=VAR_7;VAR_11<=VAR_8;VAR_11++) {
    if ((VAR_11)==0) { VAR_13 = VAR_5->Eval.MapGrid2u1; } else if ((VAR_11)==VAR_5->Eval.MapGrid2un) { VAR_13 = VAR_5->Eval.MapGrid2u2; } else { VAR_13 = (VAR_11) * VAR_14 + VAR_5->Eval.MapGrid2u1; };
    FUNC_5( VAR_5, VAR_13, VAR_15 );
   }
   FUNC_4(VAR_5);
  }
  for (VAR_11=VAR_7;VAR_11<=VAR_8;VAR_11++) {
   if ((VAR_11)==0) { VAR_13 = VAR_5->Eval.MapGrid2u1; } else if ((VAR_11)==VAR_5->Eval.MapGrid2un) { VAR_13 = VAR_5->Eval.MapGrid2u2; } else { VAR_13 = (VAR_11) * VAR_14 + VAR_5->Eval.MapGrid2u1; };
   FUNC_3( VAR_5, VAR_2 );
   for (VAR_12=VAR_9;VAR_12<=VAR_10;VAR_12++) {
    if ((VAR_12)==0) { VAR_15 = VAR_5->Eval.MapGrid2v1; } else if ((VAR_12)==VAR_5->Eval.MapGrid2vn) { VAR_15 = VAR_5->Eval.MapGrid2v2; } else { VAR_15 = (VAR_12) * VAR_16 + VAR_5->Eval.MapGrid2v1; };
    FUNC_5( VAR_5, VAR_13, VAR_15 );
   }
   FUNC_4(VAR_5);
  }
  break;
 case 130:
  for (VAR_12=VAR_9;VAR_12<VAR_10;VAR_12++) {


   FUNC_3( VAR_5, VAR_4 );
   if ((VAR_12)==0) { VAR_17 = VAR_5->Eval.MapGrid2v1; } else if ((VAR_12)==VAR_5->Eval.MapGrid2vn) { VAR_17 = VAR_5->Eval.MapGrid2v2; } else { VAR_17 = (VAR_12) * VAR_16 + VAR_5->Eval.MapGrid2v1; };
   if ((VAR_12+1)==0) { VAR_18 = VAR_5->Eval.MapGrid2v1; } else if ((VAR_12+1)==VAR_5->Eval.MapGrid2vn) { VAR_18 = VAR_5->Eval.MapGrid2v2; } else { VAR_18 = (VAR_12+1) * VAR_16 + VAR_5->Eval.MapGrid2v1; };
   for (VAR_11=VAR_7;VAR_11<=VAR_8;VAR_11++) {
    if ((VAR_11)==0) { VAR_13 = VAR_5->Eval.MapGrid2u1; } else if ((VAR_11)==VAR_5->Eval.MapGrid2un) { VAR_13 = VAR_5->Eval.MapGrid2u2; } else { VAR_13 = (VAR_11) * VAR_14 + VAR_5->Eval.MapGrid2u1; };
    FUNC_5( VAR_5, VAR_13, VAR_17 );
    FUNC_5( VAR_5, VAR_13, VAR_18 );
   }
   FUNC_4(VAR_5);
  }
  break;
 default:
  FUNC_6( VAR_5, VAR_0, "glEvalMesh2(mode)" );
  return;
 }



}
