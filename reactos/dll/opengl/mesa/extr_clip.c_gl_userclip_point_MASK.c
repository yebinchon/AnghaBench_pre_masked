
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {float const** ClipEquation; scalar_t__* ClipEnabled; } ;
struct TYPE_5__ {TYPE_1__ Transform; } ;
typedef size_t GLuint ;
typedef float GLfloat ;
typedef TYPE_2__ GLcontext ;


 size_t VAR_0 ;

GLuint FUNC_0( GLcontext* VAR_1, const GLfloat VAR_2[] )
{
   GLuint VAR_3;

   for (VAR_3=0;VAR_3<VAR_0;VAR_3++) {
      if (VAR_1->Transform.ClipEnabled[VAR_3]) {
  GLfloat VAR_4 = VAR_2[0] * VAR_1->Transform.ClipEquation[VAR_3][0]
       + VAR_2[1] * VAR_1->Transform.ClipEquation[VAR_3][1]
       + VAR_2[2] * VAR_1->Transform.ClipEquation[VAR_3][2]
       + VAR_2[3] * VAR_1->Transform.ClipEquation[VAR_3][3];
         if (VAR_4 < 0.0F) {
            return 0;
         }
      }
   }

   return 1;
}
