
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int GLvoid ;
typedef int GLushort ;
typedef int GLuint ;
typedef int GLubyte ;
typedef size_t GLsizei ;
typedef size_t GLint ;
typedef int GLenum ;
typedef int GLcontext ;


 int VAR_0 ;



 int FUNC_0 (int *,int ,char*) ;
 int FUNC_1 (int *,size_t) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *) ;

void FUNC_4( GLcontext *VAR_1,
                           GLenum VAR_2, GLsizei VAR_3,
                           GLenum VAR_4, const GLvoid *VAR_5 )
{
   switch (VAR_4) {
      case 130:
         {
            GLubyte *VAR_6 = (GLubyte *) VAR_5;
            GLint VAR_7;
            FUNC_2( VAR_1, VAR_2 );
            for (VAR_7=0;VAR_7<VAR_3;VAR_7++) {
               FUNC_1( VAR_1, (GLint) VAR_6[VAR_7] );
            }
            FUNC_3( VAR_1 );
         }
         break;
      case 128:
         {
            GLushort *VAR_8 = (GLushort *) VAR_5;
            GLint VAR_9;
            FUNC_2( VAR_1, VAR_2 );
            for (VAR_9=0;VAR_9<VAR_3;VAR_9++) {
               FUNC_1( VAR_1, (GLint) VAR_8[VAR_9] );
            }
            FUNC_3( VAR_1 );
         }
         break;
      case 129:
         {
            GLuint *VAR_10 = (GLuint *) VAR_5;
            GLint VAR_11;
            FUNC_2( VAR_1, VAR_2 );
            for (VAR_11=0;VAR_11<VAR_3;VAR_11++) {
               FUNC_1( VAR_1, (GLint) VAR_10[VAR_11] );
            }
            FUNC_3( VAR_1 );
         }
         break;
      default:
         FUNC_0( VAR_1, VAR_0, "glDrawElements(type)" );
         return;
   }
}
