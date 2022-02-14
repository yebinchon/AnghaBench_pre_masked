
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* Buffer; } ;
struct TYPE_4__ {scalar_t__ Xmin; scalar_t__ Xmax; scalar_t__ Ymin; scalar_t__ Ymax; } ;
typedef size_t GLuint ;
typedef int GLubyte ;
typedef scalar_t__ const GLint ;
typedef TYPE_2__ GLcontext ;



GLuint FUNC_0( GLcontext *VAR_0,
                          GLuint VAR_1, const GLint VAR_2[], const GLint VAR_3[],
                          GLubyte VAR_4[] )
{
   GLint VAR_5 = VAR_0->Buffer->Xmin;
   GLint VAR_6 = VAR_0->Buffer->Xmax;
   GLint VAR_7 = VAR_0->Buffer->Ymin;
   GLint VAR_8 = VAR_0->Buffer->Ymax;
   GLuint VAR_9;

   for (VAR_9=0;VAR_9<VAR_1;VAR_9++) {
      VAR_4[VAR_9] &= (VAR_2[VAR_9]>=VAR_5) & (VAR_2[VAR_9]<=VAR_6) & (VAR_3[VAR_9]>=VAR_7) & (VAR_3[VAR_9]<=VAR_8);
   }

   return 1;
}
