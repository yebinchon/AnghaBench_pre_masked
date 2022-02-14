
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {void* EdgeFlagEnabled; void* TexCoordEnabled; void* IndexEnabled; void* ColorEnabled; void* NormalEnabled; void* VertexEnabled; } ;
struct TYPE_6__ {TYPE_1__ Array; } ;
typedef int GLenum ;
typedef TYPE_2__ GLcontext ;
typedef void* GLboolean ;





 int VAR_0 ;



 int FUNC_0 (TYPE_2__*,int ,char*) ;

void FUNC_1( GLcontext *VAR_1, GLenum VAR_2, GLboolean VAR_3 )
{
   switch (VAR_2) {
      case 128:
         VAR_1->Array.VertexEnabled = VAR_3;
         break;
      case 130:
         VAR_1->Array.NormalEnabled = VAR_3;
         break;
      case 133:
         VAR_1->Array.ColorEnabled = VAR_3;
         break;
      case 131:
         VAR_1->Array.IndexEnabled = VAR_3;
         break;
      case 129:
         VAR_1->Array.TexCoordEnabled = VAR_3;
         break;
      case 132:
         VAR_1->Array.EdgeFlagEnabled = VAR_3;
         break;
      default:
         FUNC_0( VAR_1, VAR_0, "glEnable/DisableClientState" );
   }
}
