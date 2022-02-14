
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int ColorSize; int ColorType; void* ColorPtr; scalar_t__ ColorStride; scalar_t__ ColorStrideB; } ;
struct TYPE_6__ {TYPE_1__ Array; } ;
typedef int GLvoid ;
typedef int GLushort ;
typedef int GLuint ;
typedef int GLubyte ;
typedef scalar_t__ GLsizei ;
typedef int GLshort ;
typedef int GLint ;
typedef int GLfloat ;
typedef int GLenum ;
typedef int GLdouble ;
typedef TYPE_2__ GLcontext ;
typedef int GLbyte ;






 int VAR_0 ;
 int VAR_1 ;




 int FUNC_0 (TYPE_2__*,int ,char*) ;

void FUNC_1( GLcontext *VAR_2,
                      GLint VAR_3, GLenum VAR_4, GLsizei VAR_5,
                      const GLvoid *VAR_6 )
{
   if (VAR_3<3 || VAR_3>4) {
      FUNC_0( VAR_2, VAR_1, "glColorPointer(size)" );
      return;
   }
   if (VAR_5<0) {
      FUNC_0( VAR_2, VAR_1, "glColorPointer(stride)" );
      return;
   }
   switch (VAR_4) {
      case 135:
         VAR_2->Array.ColorStrideB = VAR_5 ? VAR_5 : VAR_3*sizeof(GLbyte);
         break;
      case 130:
         VAR_2->Array.ColorStrideB = VAR_5 ? VAR_5 : VAR_3*sizeof(GLubyte);
         break;
      case 131:
         VAR_2->Array.ColorStrideB = VAR_5 ? VAR_5 : VAR_3*sizeof(GLshort);
         break;
      case 128:
         VAR_2->Array.ColorStrideB = VAR_5 ? VAR_5 : VAR_3*sizeof(GLushort);
         break;
      case 132:
         VAR_2->Array.ColorStrideB = VAR_5 ? VAR_5 : VAR_3*sizeof(GLint);
         break;
      case 129:
         VAR_2->Array.ColorStrideB = VAR_5 ? VAR_5 : VAR_3*sizeof(GLuint);
         break;
      case 133:
         VAR_2->Array.ColorStrideB = VAR_5 ? VAR_5 : VAR_3*sizeof(GLfloat);
         break;
      case 134:
         VAR_2->Array.ColorStrideB = VAR_5 ? VAR_5 : VAR_3*sizeof(GLdouble);
         break;
      default:
         FUNC_0( VAR_2, VAR_0, "glColorPointer(type)" );
         return;
   }
   VAR_2->Array.ColorSize = VAR_3;
   VAR_2->Array.ColorType = VAR_4;
   VAR_2->Array.ColorStride = VAR_5;
   VAR_2->Array.ColorPtr = (void *) VAR_6;
}
