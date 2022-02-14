
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {float* ProjectionMatrix; int NewProjectionMatrix; int ProjectionMatrixType; } ;
typedef float GLfloat ;
typedef TYPE_1__ GLcontext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (float const*) ;

void FUNC_1( GLcontext *VAR_5 )
{

   const GLfloat *VAR_6 = VAR_5->ProjectionMatrix;
   if (FUNC_0(VAR_6)) {
      VAR_5->ProjectionMatrixType = VAR_2;
   }
   else if ( VAR_6[4]==0.0F && VAR_6[8] ==0.0F
            && VAR_6[1]==0.0F && VAR_6[9] ==0.0F
            && VAR_6[2]==0.0F && VAR_6[6]==0.0F
            && VAR_6[3]==0.0F && VAR_6[7]==0.0F && VAR_6[11]==0.0F && VAR_6[15]==1.0F) {
      VAR_5->ProjectionMatrixType = VAR_3;
   }
   else if ( VAR_6[4]==0.0F && VAR_6[12]==0.0F
            && VAR_6[1]==0.0F && VAR_6[13]==0.0F
            && VAR_6[2]==0.0F && VAR_6[6]==0.0F
            && VAR_6[3]==0.0F && VAR_6[7]==0.0F && VAR_6[11]==-1.0F && VAR_6[15]==0.0F) {
      VAR_5->ProjectionMatrixType = VAR_4;
   }
   else {
      VAR_5->ProjectionMatrixType = VAR_1;
   }

   VAR_5->NewProjectionMatrix = VAR_0;
}
