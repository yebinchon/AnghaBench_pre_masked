
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int EyePlaneQ; int ObjectPlaneQ; int GenModeQ; int EyePlaneR; int ObjectPlaneR; int GenModeR; int EyePlaneT; int ObjectPlaneT; int GenModeT; int EyePlaneS; int ObjectPlaneS; int GenModeS; } ;
struct TYPE_7__ {TYPE_1__ Texture; } ;
typedef int GLint ;
typedef int GLenum ;
typedef TYPE_2__ GLcontext ;


 int FUNC_0 (int *,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;




 int VAR_4 ;
 scalar_t__ FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*,int ,char*) ;

void FUNC_3( GLcontext *VAR_5,
                     GLenum VAR_6, GLenum VAR_7, GLint *VAR_8 )
{
   if (FUNC_1(VAR_5)) {
      FUNC_2( VAR_5, VAR_2, "glGetTexGeniv" );
      return;
   }

   switch( VAR_6 ) {
      case 129:
         if (VAR_7==VAR_4) {
            VAR_8[0] = VAR_5->Texture.GenModeS;
  }
  else if (VAR_7==VAR_3) {
            FUNC_0( VAR_8, VAR_5->Texture.ObjectPlaneS );
  }
  else if (VAR_7==VAR_0) {
            FUNC_0( VAR_8, VAR_5->Texture.EyePlaneS );
  }
  else {
     FUNC_2( VAR_5, VAR_1, "glGetTexGeniv(pname)" );
     return;
  }
  break;
      case 128:
         if (VAR_7==VAR_4) {
            VAR_8[0] = VAR_5->Texture.GenModeT;
  }
  else if (VAR_7==VAR_3) {
            FUNC_0( VAR_8, VAR_5->Texture.ObjectPlaneT );
  }
  else if (VAR_7==VAR_0) {
            FUNC_0( VAR_8, VAR_5->Texture.EyePlaneT );
  }
  else {
     FUNC_2( VAR_5, VAR_1, "glGetTexGeniv(pname)" );
     return;
  }
  break;
      case 130:
         if (VAR_7==VAR_4) {
            VAR_8[0] = VAR_5->Texture.GenModeR;
  }
  else if (VAR_7==VAR_3) {
            FUNC_0( VAR_8, VAR_5->Texture.ObjectPlaneR );
  }
  else if (VAR_7==VAR_0) {
            FUNC_0( VAR_8, VAR_5->Texture.EyePlaneR );
  }
  else {
     FUNC_2( VAR_5, VAR_1, "glGetTexGeniv(pname)" );
     return;
  }
  break;
      case 131:
         if (VAR_7==VAR_4) {
            VAR_8[0] = VAR_5->Texture.GenModeQ;
  }
  else if (VAR_7==VAR_3) {
            FUNC_0( VAR_8, VAR_5->Texture.ObjectPlaneQ );
  }
  else if (VAR_7==VAR_0) {
            FUNC_0( VAR_8, VAR_5->Texture.EyePlaneQ );
  }
  else {
     FUNC_2( VAR_5, VAR_1, "glGetTexGeniv(pname)" );
     return;
  }
  break;
      default:
         FUNC_2( VAR_5, VAR_1, "glGetTexGeniv(coord)" );
  return;
   }
}
