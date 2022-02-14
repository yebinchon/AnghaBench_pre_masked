
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int NormalType; void* NormalPtr; scalar_t__ NormalStride; scalar_t__ NormalStrideB; } ;
struct TYPE_6__ {TYPE_1__ Array; } ;
typedef int GLvoid ;
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
                       GLenum VAR_3, GLsizei VAR_4, const GLvoid *VAR_5 )
{
   if (VAR_4<0) {
      FUNC_0( VAR_2, VAR_1, "glNormalPointer(stride)" );
      return;
   }
   switch (VAR_3) {
      case 132:
         VAR_2->Array.NormalStrideB = VAR_4 ? VAR_4 : 3*sizeof(GLbyte);
         break;
      case 128:
         VAR_2->Array.NormalStrideB = VAR_4 ? VAR_4 : 3*sizeof(GLshort);
         break;
      case 129:
         VAR_2->Array.NormalStrideB = VAR_4 ? VAR_4 : 3*sizeof(GLint);
         break;
      case 130:
         VAR_2->Array.NormalStrideB = VAR_4 ? VAR_4 : 3*sizeof(GLfloat);
         break;
      case 131:
         VAR_2->Array.NormalStrideB = VAR_4 ? VAR_4 : 3*sizeof(GLdouble);
         break;
      default:
         FUNC_0( VAR_2, VAR_0, "glNormalPointer(type)" );
         return;
   }
   VAR_2->Array.NormalType = VAR_3;
   VAR_2->Array.NormalStride = VAR_4;
   VAR_2->Array.NormalPtr = (void *) VAR_5;
}
