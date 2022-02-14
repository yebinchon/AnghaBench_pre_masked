
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int VertexSize; int VertexType; void* VertexPtr; scalar_t__ VertexStride; scalar_t__ VertexStrideB; } ;
struct TYPE_6__ {TYPE_1__ Array; } ;
typedef int GLvoid ;
typedef scalar_t__ GLsizei ;
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
   if (VAR_3<2 || VAR_3>4) {
      FUNC_0( VAR_2, VAR_1, "glVertexPointer(size)" );
      return;
   }
   if (VAR_5<0) {
      FUNC_0( VAR_2, VAR_1, "glVertexPointer(stride)" );
      return;
   }
   switch (VAR_4) {
      case 128:
         VAR_2->Array.VertexStrideB = VAR_5 ? VAR_5 : VAR_3*sizeof(GLshort);
         break;
      case 129:
         VAR_2->Array.VertexStrideB = VAR_5 ? VAR_5 : VAR_3*sizeof(GLint);
         break;
      case 130:
         VAR_2->Array.VertexStrideB = VAR_5 ? VAR_5 : VAR_3*sizeof(GLfloat);
         break;
      case 131:
         VAR_2->Array.VertexStrideB = VAR_5 ? VAR_5 : VAR_3*sizeof(GLdouble);
         break;
      default:
         FUNC_0( VAR_2, VAR_0, "glVertexPointer(type)" );
         return;
   }
   VAR_2->Array.VertexSize = VAR_3;
   VAR_2->Array.VertexType = VAR_4;
   VAR_2->Array.VertexStride = VAR_5;
   VAR_2->Array.VertexPtr = (void *) VAR_6;
}
