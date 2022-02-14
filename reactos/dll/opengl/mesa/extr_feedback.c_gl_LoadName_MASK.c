
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int NameStackDepth; void** NameStack; scalar_t__ HitFlag; } ;
struct TYPE_8__ {scalar_t__ RenderMode; TYPE_1__ Select; } ;
typedef void* GLuint ;
typedef TYPE_2__ GLcontext ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_2__*) ;
 int VAR_2 ;
 int FUNC_1 (TYPE_2__*,int ,char*) ;
 int FUNC_2 (TYPE_2__*) ;

void FUNC_3( GLcontext *VAR_3, GLuint VAR_4 )
{
   if (FUNC_0(VAR_3)) {
      FUNC_1( VAR_3, VAR_0, "glLoadName" );
      return;
   }
   if (VAR_3->RenderMode!=VAR_1) {
      return;
   }
   if (VAR_3->Select.NameStackDepth==0) {
      FUNC_1( VAR_3, VAR_0, "glLoadName" );
      return;
   }
   if (VAR_3->Select.HitFlag) {
      FUNC_2( VAR_3 );
   }
   if (VAR_3->Select.NameStackDepth<VAR_2) {
      VAR_3->Select.NameStack[VAR_3->Select.NameStackDepth-1] = VAR_4;
   }
   else {
      VAR_3->Select.NameStack[VAR_2-1] = VAR_4;
   }
}
