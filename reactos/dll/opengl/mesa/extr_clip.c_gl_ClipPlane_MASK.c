
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int * ClipEquation; } ;
struct TYPE_7__ {int ModelViewInv; TYPE_1__ Transform; scalar_t__ NewModelViewMatrix; } ;
typedef size_t GLint ;
typedef int GLfloat ;
typedef scalar_t__ GLenum ;
typedef TYPE_2__ GLcontext ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*,int ,char*) ;
 int FUNC_2 (int ,int const*,int ) ;

void FUNC_3( GLcontext* VAR_3, GLenum VAR_4, const GLfloat *VAR_5 )
{
   GLint VAR_6;

   VAR_6 = (GLint) VAR_4 - (GLint) VAR_0;
   if (VAR_6<0 || VAR_6>=VAR_2) {
      FUNC_1( VAR_3, VAR_1, "glClipPlane" );
      return;
   }





   if (VAR_3->NewModelViewMatrix) {
      FUNC_0(VAR_3);
   }
   FUNC_2( VAR_3->Transform.ClipEquation[VAR_6], VAR_5,
          VAR_3->ModelViewInv );
}
