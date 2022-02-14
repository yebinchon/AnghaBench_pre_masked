
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* Buffer; } ;
struct TYPE_5__ {scalar_t__ Depth; } ;
typedef int GLuint ;
typedef int GLint ;
typedef double GLdepth ;
typedef TYPE_2__ GLcontext ;


 int FUNC_0 (double*,double*,int) ;
 double* FUNC_1 (TYPE_2__*,int ,int ) ;

void FUNC_2( GLcontext* VAR_0,
                             GLuint VAR_1, GLint VAR_2, GLint VAR_3, GLdepth VAR_4[] )
{
   if (VAR_0->Buffer->Depth) {
      GLdepth *VAR_5 = FUNC_1( VAR_0, VAR_2, VAR_3 );
      FUNC_0( VAR_4, VAR_5, VAR_1 * sizeof(GLdepth) );
   }
   else {
      GLuint VAR_6;
      for (VAR_6=0;VAR_6<VAR_1;VAR_6++) {
  VAR_4[VAR_6] = 0.0;
      }
   }
}
