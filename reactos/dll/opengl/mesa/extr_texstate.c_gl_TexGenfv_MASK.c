
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int GenModeS; int GenModeT; int GenModeR; int GenModeQ; int EyePlaneQ; int * ObjectPlaneQ; int EyePlaneR; int * ObjectPlaneR; int EyePlaneT; int * ObjectPlaneT; int EyePlaneS; int * ObjectPlaneS; } ;
struct TYPE_8__ {int NewState; int ModelViewInv; TYPE_1__ Texture; int NewModelViewMatrix; } ;
typedef int GLint ;
typedef int GLfloat ;
typedef int GLenum ;
typedef TYPE_2__ GLcontext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;



 int VAR_6 ;

 int VAR_7 ;
 scalar_t__ FUNC_0 (TYPE_2__*) ;
 int VAR_8 ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*,int ,char*) ;
 int FUNC_3 (int ,int const*,int ) ;

void FUNC_4( GLcontext *VAR_9,
                  GLenum VAR_10, GLenum VAR_11, const GLfloat *VAR_12 )
{
   if (FUNC_0(VAR_9)) {
      FUNC_2( VAR_9, VAR_3, "glTexGenfv" );
      return;
   }

   switch( VAR_10 ) {
      case 129:
         if (VAR_11==VAR_7) {
     GLenum VAR_13 = (GLenum) (GLint) *VAR_12;
     if (VAR_13==VAR_4 ||
  VAR_13==VAR_0 ||
  VAR_13==VAR_6) {
        VAR_9->Texture.GenModeS = VAR_13;
     }
     else {
        FUNC_2( VAR_9, VAR_2, "glTexGenfv(param)" );
        return;
     }
  }
  else if (VAR_11==VAR_5) {
     VAR_9->Texture.ObjectPlaneS[0] = VAR_12[0];
     VAR_9->Texture.ObjectPlaneS[1] = VAR_12[1];
     VAR_9->Texture.ObjectPlaneS[2] = VAR_12[2];
     VAR_9->Texture.ObjectPlaneS[3] = VAR_12[3];
  }
  else if (VAR_11==VAR_1) {

            if (VAR_9->NewModelViewMatrix) {
               FUNC_1(VAR_9);
            }
            FUNC_3( VAR_9->Texture.EyePlaneS, VAR_12,
                                 VAR_9->ModelViewInv );
  }
  else {
     FUNC_2( VAR_9, VAR_2, "glTexGenfv(pname)" );
     return;
  }
  break;
      case 128:
         if (VAR_11==VAR_7) {
     GLenum VAR_14 = (GLenum) (GLint) *VAR_12;
     if (VAR_14==VAR_4 ||
  VAR_14==VAR_0 ||
  VAR_14==VAR_6) {
        VAR_9->Texture.GenModeT = VAR_14;
     }
     else {
        FUNC_2( VAR_9, VAR_2, "glTexGenfv(param)" );
        return;
     }
  }
  else if (VAR_11==VAR_5) {
     VAR_9->Texture.ObjectPlaneT[0] = VAR_12[0];
     VAR_9->Texture.ObjectPlaneT[1] = VAR_12[1];
     VAR_9->Texture.ObjectPlaneT[2] = VAR_12[2];
     VAR_9->Texture.ObjectPlaneT[3] = VAR_12[3];
  }
  else if (VAR_11==VAR_1) {

            if (VAR_9->NewModelViewMatrix) {
               FUNC_1(VAR_9);
            }
            FUNC_3( VAR_9->Texture.EyePlaneT, VAR_12,
                                 VAR_9->ModelViewInv );
  }
  else {
     FUNC_2( VAR_9, VAR_2, "glTexGenfv(pname)" );
     return;
  }
  break;
      case 130:
         if (VAR_11==VAR_7) {
     GLenum VAR_15 = (GLenum) (GLint) *VAR_12;
     if (VAR_15==VAR_4 ||
  VAR_15==VAR_0) {
        VAR_9->Texture.GenModeR = VAR_15;
     }
     else {
        FUNC_2( VAR_9, VAR_2, "glTexGenfv(param)" );
        return;
     }
  }
  else if (VAR_11==VAR_5) {
     VAR_9->Texture.ObjectPlaneR[0] = VAR_12[0];
     VAR_9->Texture.ObjectPlaneR[1] = VAR_12[1];
     VAR_9->Texture.ObjectPlaneR[2] = VAR_12[2];
     VAR_9->Texture.ObjectPlaneR[3] = VAR_12[3];
  }
  else if (VAR_11==VAR_1) {

            if (VAR_9->NewModelViewMatrix) {
               FUNC_1(VAR_9);
            }
            FUNC_3( VAR_9->Texture.EyePlaneR, VAR_12,
                                 VAR_9->ModelViewInv );
  }
  else {
     FUNC_2( VAR_9, VAR_2, "glTexGenfv(pname)" );
     return;
  }
  break;
      case 131:
         if (VAR_11==VAR_7) {
     GLenum VAR_16 = (GLenum) (GLint) *VAR_12;
     if (VAR_16==VAR_4 ||
  VAR_16==VAR_0) {
        VAR_9->Texture.GenModeQ = VAR_16;
     }
     else {
        FUNC_2( VAR_9, VAR_2, "glTexGenfv(param)" );
        return;
     }
  }
  else if (VAR_11==VAR_5) {
     VAR_9->Texture.ObjectPlaneQ[0] = VAR_12[0];
     VAR_9->Texture.ObjectPlaneQ[1] = VAR_12[1];
     VAR_9->Texture.ObjectPlaneQ[2] = VAR_12[2];
     VAR_9->Texture.ObjectPlaneQ[3] = VAR_12[3];
  }
  else if (VAR_11==VAR_1) {

            if (VAR_9->NewModelViewMatrix) {
               FUNC_1(VAR_9);
            }
            FUNC_3( VAR_9->Texture.EyePlaneQ, VAR_12,
                                 VAR_9->ModelViewInv );
  }
  else {
     FUNC_2( VAR_9, VAR_2, "glTexGenfv(pname)" );
     return;
  }
  break;
      default:
         FUNC_2( VAR_9, VAR_2, "glTexGenfv(coord)" );
  return;
   }

   VAR_9->NewState |= VAR_8;
}
