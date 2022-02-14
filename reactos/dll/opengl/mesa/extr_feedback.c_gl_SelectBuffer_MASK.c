
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {double HitMinZ; double HitMaxZ; int HitFlag; scalar_t__ BufferCount; int BufferSize; int * Buffer; } ;
struct TYPE_7__ {scalar_t__ RenderMode; TYPE_1__ Select; } ;
typedef int GLuint ;
typedef int GLsizei ;
typedef TYPE_2__ GLcontext ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*,int ,char*) ;

void FUNC_2( GLcontext *VAR_3, GLsizei VAR_4, GLuint *VAR_5 )
{
   if (FUNC_0(VAR_3)) {
      FUNC_1( VAR_3, VAR_1, "glSelectBuffer" );
   }
   if (VAR_3->RenderMode==VAR_2) {
      FUNC_1( VAR_3, VAR_1, "glSelectBuffer" );
   }
   VAR_3->Select.Buffer = VAR_5;
   VAR_3->Select.BufferSize = VAR_4;
   VAR_3->Select.BufferCount = 0;

   VAR_3->Select.HitFlag = VAR_0;
   VAR_3->Select.HitMinZ = 1.0;
   VAR_3->Select.HitMaxZ = 0.0;
}
