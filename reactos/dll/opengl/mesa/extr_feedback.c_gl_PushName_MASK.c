
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ NameStackDepth; int * NameStack; scalar_t__ HitFlag; } ;
struct TYPE_8__ {scalar_t__ RenderMode; TYPE_1__ Select; } ;
typedef int GLuint ;
typedef TYPE_2__ GLcontext ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (TYPE_2__*) ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (TYPE_2__*,int ,char*) ;
 int FUNC_2 (TYPE_2__*) ;

void FUNC_3( GLcontext *VAR_4, GLuint VAR_5 )
{
   if (FUNC_0(VAR_4)) {
      FUNC_1( VAR_4, VAR_0, "glPushName" );
      return;
   }
   if (VAR_4->RenderMode!=VAR_1) {
      return;
   }
   if (VAR_4->Select.HitFlag) {
      FUNC_2( VAR_4 );
   }
   if (VAR_4->Select.NameStackDepth<VAR_3) {
      VAR_4->Select.NameStack[VAR_4->Select.NameStackDepth++] = VAR_5;
   }
   else {
      FUNC_1( VAR_4, VAR_2, "glPushName" );
   }
}
