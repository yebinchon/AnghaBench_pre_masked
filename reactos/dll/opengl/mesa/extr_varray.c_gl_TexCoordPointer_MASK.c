
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int TexCoordStrideB; int TexCoordSize; int TexCoordType; int TexCoordStride; void* TexCoordPtr; } ;
struct TYPE_6__ {TYPE_1__ Array; } ;
typedef int GLvoid ;
typedef int GLsizei ;
typedef int GLshort ;
typedef int GLint ;
typedef int GLfloat ;
typedef int GLenum ;
typedef int GLdouble ;
typedef TYPE_2__ GLcontext ;





 int VAR_0 ;
 int VAR_1 ;

 int FUNC_0 (TYPE_2__*,int ,char*) ;

void FUNC_1( GLcontext *VAR_2,
                         GLint VAR_3, GLenum VAR_4, GLsizei VAR_5,
                         const GLvoid *VAR_6 )
{
   if (VAR_3<1 || VAR_3>4) {
      FUNC_0( VAR_2, VAR_1, "glTexCoordPointer(size)" );
      return;
   }
   switch (VAR_4) {
      case 128:
         VAR_2->Array.TexCoordStrideB = VAR_5 ? VAR_5 : VAR_3*sizeof(GLshort);
         break;
      case 129:
         VAR_2->Array.TexCoordStrideB = VAR_5 ? VAR_5 : VAR_3*sizeof(GLint);
         break;
      case 130:
         VAR_2->Array.TexCoordStrideB = VAR_5 ? VAR_5 : VAR_3*sizeof(GLfloat);
         break;
      case 131:
         VAR_2->Array.TexCoordStrideB = VAR_5 ? VAR_5 : VAR_3*sizeof(GLdouble);
         break;
      default:
         FUNC_0( VAR_2, VAR_0, "glTexCoordPointer(type)" );
         return;
   }
   if (VAR_5<0) {
      FUNC_0( VAR_2, VAR_1, "glTexCoordPointer(stride)" );
      return;
   }
   VAR_2->Array.TexCoordSize = VAR_3;
   VAR_2->Array.TexCoordType = VAR_4;
   VAR_2->Array.TexCoordStride = VAR_5;
   VAR_2->Array.TexCoordPtr = (void *) VAR_6;
}
