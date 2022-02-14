
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {float* TextureMatrix; int NewTextureMatrix; int TextureMatrixType; } ;
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
   const GLfloat *VAR_6 = VAR_5->TextureMatrix;
   if (FUNC_0(VAR_6)) {
      VAR_5->TextureMatrixType = VAR_4;
   }
   else if ( VAR_6[ 8]==0.0F
            && VAR_6[ 9]==0.0F
            && VAR_6[2]==0.0F && VAR_6[6]==0.0F && VAR_6[10]==1.0F && VAR_6[14]==0.0F
            && VAR_6[3]==0.0F && VAR_6[7]==0.0F && VAR_6[11]==0.0F && VAR_6[15]==1.0F) {
      VAR_5->TextureMatrixType = VAR_1;
   }
   else if (VAR_6[3]==0.0F && VAR_6[7]==0.0F && VAR_6[11]==0.0F && VAR_6[15]==1.0F) {
      VAR_5->TextureMatrixType = VAR_2;
   }
   else {
      VAR_5->TextureMatrixType = VAR_3;
   }

   VAR_5->NewTextureMatrix = VAR_0;
}
