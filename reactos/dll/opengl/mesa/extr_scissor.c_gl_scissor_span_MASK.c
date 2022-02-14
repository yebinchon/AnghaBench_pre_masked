
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* Buffer; } ;
struct TYPE_4__ {scalar_t__ Ymin; scalar_t__ Ymax; scalar_t__ Xmax; scalar_t__ Xmin; } ;
typedef scalar_t__ GLuint ;
typedef scalar_t__ GLubyte ;
typedef scalar_t__ GLint ;
typedef TYPE_2__ GLcontext ;



GLint FUNC_0( GLcontext *VAR_0,
                       GLuint VAR_1, GLint VAR_2, GLint VAR_3, GLubyte VAR_4[] )
{

   if (VAR_3<VAR_0->Buffer->Ymin || VAR_3>VAR_0->Buffer->Ymax
       || VAR_2>VAR_0->Buffer->Xmax || VAR_2+(GLint)VAR_1-1<VAR_0->Buffer->Xmin) {
      return 0;
   }
   else {
      GLint VAR_5;
      GLint VAR_6 = VAR_0->Buffer->Xmin;
      GLint VAR_7 = VAR_0->Buffer->Xmax;
      for (VAR_5=0; VAR_2+VAR_5 < VAR_6; VAR_5++) {
         VAR_4[VAR_5] = 0;
      }
      for (VAR_5=(GLint)VAR_1-1; VAR_2+VAR_5 > VAR_7; VAR_5--) {
         VAR_4[VAR_5] = 0;
      }

      return 1;
   }
}
