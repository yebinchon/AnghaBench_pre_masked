
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ NameStackDepth; scalar_t__ HitFlag; } ;
struct TYPE_8__ {scalar_t__ RenderMode; TYPE_1__ Select; } ;
typedef TYPE_2__ GLcontext ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*,int ,char*) ;
 int FUNC_2 (TYPE_2__*) ;

void FUNC_3( GLcontext *VAR_3 )
{
   if (FUNC_0(VAR_3)) {
      FUNC_1( VAR_3, VAR_0, "glPopName" );
      return;
   }
   if (VAR_3->RenderMode!=VAR_1) {
      return;
   }
   if (VAR_3->Select.HitFlag) {
      FUNC_2( VAR_3 );
   }
   if (VAR_3->Select.NameStackDepth>0) {
      VAR_3->Select.NameStackDepth--;
   }
   else {
      FUNC_1( VAR_3, VAR_2, "glPopName" );
   }
}
