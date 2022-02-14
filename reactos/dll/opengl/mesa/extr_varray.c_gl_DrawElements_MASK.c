
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int GLvoid ;
typedef int GLushort ;
typedef int GLuint ;
typedef int GLubyte ;
typedef scalar_t__ GLsizei ;
typedef scalar_t__ GLint ;
typedef int GLenum ;
typedef int GLcontext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *,scalar_t__) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int ,char*) ;

void FUNC_5( GLcontext *VAR_3,
                      GLenum VAR_4, GLsizei VAR_5,
                      GLenum VAR_6, const GLvoid *VAR_7 )
{

   if (FUNC_0(VAR_3)) {
      FUNC_4( VAR_3, VAR_1, "glDrawElements" );
      return;
   }
   if (VAR_5<0) {
      FUNC_4( VAR_3, VAR_2, "glDrawElements(count)" );
      return;
   }
   switch (VAR_4) {
      case 137:
      case 140:
      case 138:
      case 139:
      case 133:
      case 131:
      case 132:
      case 135:
      case 134:
      case 136:

         break;
      default:
         FUNC_4( VAR_3, VAR_0, "glDrawArrays(mode)" );
         return;
   }
   switch (VAR_6) {
      case 130:
         {
            GLubyte *VAR_8 = (GLubyte *) VAR_7;
            GLint VAR_9;
            FUNC_2( VAR_3, VAR_4 );
            for (VAR_9=0;VAR_9<VAR_5;VAR_9++) {
               FUNC_1( VAR_3, (GLint) VAR_8[VAR_9] );
            }
            FUNC_3( VAR_3 );
         }
         break;
      case 128:
         {
            GLushort *VAR_10 = (GLushort *) VAR_7;
            GLint VAR_11;
            FUNC_2( VAR_3, VAR_4 );
            for (VAR_11=0;VAR_11<VAR_5;VAR_11++) {
               FUNC_1( VAR_3, (GLint) VAR_10[VAR_11] );
            }
            FUNC_3( VAR_3 );
         }
         break;
      case 129:
         {
            GLuint *VAR_12 = (GLuint *) VAR_7;
            GLint VAR_13;
            FUNC_2( VAR_3, VAR_4 );
            for (VAR_13=0;VAR_13<VAR_5;VAR_13++) {
               FUNC_1( VAR_3, (GLint) VAR_12[VAR_13] );
            }
            FUNC_3( VAR_3 );
         }
         break;
      default:
         FUNC_4( VAR_3, VAR_0, "glDrawElements(type)" );
         return;
   }
}
