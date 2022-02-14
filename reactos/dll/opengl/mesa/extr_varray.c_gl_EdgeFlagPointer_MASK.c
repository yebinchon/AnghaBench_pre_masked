
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int * EdgeFlagPtr; scalar_t__ EdgeFlagStrideB; scalar_t__ EdgeFlagStride; } ;
struct TYPE_6__ {TYPE_1__ Array; } ;
typedef scalar_t__ GLsizei ;
typedef TYPE_2__ GLcontext ;
typedef int GLboolean ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,int ,char*) ;

void FUNC_1( GLcontext *VAR_1,
                         GLsizei VAR_2, const GLboolean *VAR_3 )
{
   if (VAR_2<0) {
      FUNC_0( VAR_1, VAR_0, "glEdgeFlagPointer(stride)" );
      return;
   }
   VAR_1->Array.EdgeFlagStride = VAR_2;
   VAR_1->Array.EdgeFlagStrideB = VAR_2 ? VAR_2 : sizeof(GLboolean);
   VAR_1->Array.EdgeFlagPtr = (GLboolean *) VAR_3;
}
