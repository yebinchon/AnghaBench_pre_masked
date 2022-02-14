
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int * Buffer; } ;
struct TYPE_7__ {int * EdgeFlagPtr; int * TexCoordPtr; int * IndexPtr; int * ColorPtr; int * NormalPtr; int * VertexPtr; } ;
struct TYPE_8__ {TYPE_1__ Feedback; TYPE_2__ Array; } ;
typedef int GLvoid ;
typedef int GLenum ;
typedef TYPE_3__ GLcontext ;






 int VAR_0 ;



 int FUNC_0 (TYPE_3__*,int ,char*) ;

void FUNC_1( GLcontext *VAR_1, GLenum VAR_2, GLvoid **VAR_3 )
{
   switch (VAR_2) {
      case 128:
         *VAR_3 = VAR_1->Array.VertexPtr;
         break;
      case 130:
         *VAR_3 = VAR_1->Array.NormalPtr;
         break;
      case 134:
         *VAR_3 = VAR_1->Array.ColorPtr;
         break;
      case 131:
         *VAR_3 = VAR_1->Array.IndexPtr;
         break;
      case 129:
         *VAR_3 = VAR_1->Array.TexCoordPtr;
         break;
      case 133:
         *VAR_3 = VAR_1->Array.EdgeFlagPtr;
         break;
      case 132:
         *VAR_3 = VAR_1->Feedback.Buffer;
         break;
      default:
         FUNC_0( VAR_1, VAR_0, "glGetPointerv" );
         return;
   }
}
