
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {float* ModelViewMatrix; int NewModelViewMatrix; int ModelViewInv; int ModelViewMatrixType; } ;
typedef float GLfloat ;
typedef TYPE_1__ GLcontext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (float*,int ) ;
 scalar_t__ FUNC_1 (float const*) ;

void FUNC_2( GLcontext *VAR_6 )
{
   const GLfloat *VAR_7 = VAR_6->ModelViewMatrix;
   if (FUNC_1(VAR_7)) {
      VAR_6->ModelViewMatrixType = VAR_5;
   }
   else if ( VAR_7[4]==0.0F && VAR_7[ 8]==0.0F
            && VAR_7[1]==0.0F && VAR_7[ 9]==0.0F
            && VAR_7[2]==0.0F && VAR_7[6]==0.0F && VAR_7[10]==1.0F && VAR_7[14]==0.0F
            && VAR_7[3]==0.0F && VAR_7[7]==0.0F && VAR_7[11]==0.0F && VAR_7[15]==1.0F) {
      VAR_6->ModelViewMatrixType = VAR_2;
   }
   else if ( VAR_7[ 8]==0.0F
            && VAR_7[ 9]==0.0F
            && VAR_7[2]==0.0F && VAR_7[6]==0.0F && VAR_7[10]==1.0F && VAR_7[14]==0.0F
            && VAR_7[3]==0.0F && VAR_7[7]==0.0F && VAR_7[11]==0.0F && VAR_7[15]==1.0F) {
      VAR_6->ModelViewMatrixType = VAR_1;
   }
   else if (VAR_7[3]==0.0F && VAR_7[7]==0.0F && VAR_7[11]==0.0F && VAR_7[15]==1.0F) {
      VAR_6->ModelViewMatrixType = VAR_3;
   }
   else {
      VAR_6->ModelViewMatrixType = VAR_4;
   }

   FUNC_0( VAR_6->ModelViewMatrix, VAR_6->ModelViewInv );
   VAR_6->NewModelViewMatrix = VAR_0;
}
