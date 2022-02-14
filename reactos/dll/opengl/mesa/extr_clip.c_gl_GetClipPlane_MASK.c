
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__** ClipEquation; } ;
struct TYPE_7__ {TYPE_1__ Transform; } ;
typedef size_t GLint ;
typedef scalar_t__ GLenum ;
typedef scalar_t__ GLdouble ;
typedef TYPE_2__ GLcontext ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (TYPE_2__*) ;
 size_t VAR_3 ;
 int FUNC_1 (TYPE_2__*,int ,char*) ;

void FUNC_2( GLcontext* VAR_4, GLenum VAR_5, GLdouble *VAR_6 )
{
   GLint VAR_7;

   if (FUNC_0(VAR_4)) {
      FUNC_1( VAR_4, VAR_2, "glGetClipPlane" );
      return;
   }

   VAR_7 = (GLint) (VAR_5 - VAR_0);
   if (VAR_7<0 || VAR_7>=VAR_3) {
      FUNC_1( VAR_4, VAR_1, "glGetClipPlane" );
      return;
   }

   VAR_6[0] = (GLdouble) VAR_4->Transform.ClipEquation[VAR_7][0];
   VAR_6[1] = (GLdouble) VAR_4->Transform.ClipEquation[VAR_7][1];
   VAR_6[2] = (GLdouble) VAR_4->Transform.ClipEquation[VAR_7][2];
   VAR_6[3] = (GLdouble) VAR_4->Transform.ClipEquation[VAR_7][3];
}
