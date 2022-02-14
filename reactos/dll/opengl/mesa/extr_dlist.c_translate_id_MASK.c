
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int GLvoid ;
typedef int GLushort ;
typedef int GLuint ;
typedef int GLubyte ;
typedef int GLsizei ;
typedef int GLshort ;
typedef int GLint ;
typedef int GLfloat ;
typedef int GLenum ;
typedef int GLbyte ;
__attribute__((used)) static GLuint FUNC_0( GLsizei VAR_0, GLenum VAR_1, const GLvoid *VAR_2 )
{
   GLbyte *VAR_3;
   GLubyte *VAR_4;
   GLshort *VAR_5;
   GLushort *VAR_6;
   GLint *VAR_7;
   GLuint *VAR_8;
   GLfloat *VAR_9;

   switch (VAR_1) {
      case 134:
         VAR_3 = (GLbyte *) VAR_2;
         return (GLuint) *(VAR_3+VAR_0);
      case 130:
         VAR_4 = (GLubyte *) VAR_2;
         return (GLuint) *(VAR_4+VAR_0);
      case 131:
         VAR_5 = (GLshort *) VAR_2;
         return (GLuint) *(VAR_5+VAR_0);
      case 128:
         VAR_6 = (GLushort *) VAR_2;
         return (GLuint) *(VAR_6+VAR_0);
      case 132:
         VAR_7 = (GLint *) VAR_2;
         return (GLuint) *(VAR_7+VAR_0);
      case 129:
         VAR_8 = (GLuint *) VAR_2;
         return (GLuint) *(VAR_8+VAR_0);
      case 133:
         VAR_9 = (GLfloat *) VAR_2;
         return (GLuint) *(VAR_9+VAR_0);
      case 137:
         VAR_4 = ((GLubyte *) VAR_2) + 2*VAR_0;
         return (GLuint) *VAR_4 * 256 + (GLuint) *(VAR_4+1);
      case 136:
         VAR_4 = ((GLubyte *) VAR_2) + 3*VAR_0;
         return (GLuint) *VAR_4 * 65536
              + (GLuint) *(VAR_4+1) * 256
              + (GLuint) *(VAR_4+2);
      case 135:
         VAR_4 = ((GLubyte *) VAR_2) + 4*VAR_0;
         return (GLuint) *VAR_4 * 16777216
              + (GLuint) *(VAR_4+1) * 65536
              + (GLuint) *(VAR_4+2) * 256
              + (GLuint) *(VAR_4+3);
      default:
         return 0;
   }
}
