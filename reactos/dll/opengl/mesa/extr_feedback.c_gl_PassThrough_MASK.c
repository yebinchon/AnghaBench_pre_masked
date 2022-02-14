
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ RenderMode; } ;
typedef scalar_t__ GLint ;
typedef int GLfloat ;
typedef TYPE_1__ GLcontext ;


 int FUNC_0 (TYPE_1__*,int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,int ,char*) ;

void FUNC_3( GLcontext *VAR_3, GLfloat VAR_4 )
{
   if (FUNC_1(VAR_3)) {
      FUNC_2( VAR_3, VAR_1, "glPassThrough" );
      return;
   }

   if (VAR_3->RenderMode==VAR_0) {
      FUNC_0( VAR_3, (GLfloat) (GLint) VAR_2 );
      FUNC_0( VAR_3, VAR_4 );
   }
}
