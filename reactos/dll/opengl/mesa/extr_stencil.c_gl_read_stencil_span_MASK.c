
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* Buffer; } ;
struct TYPE_4__ {scalar_t__ Stencil; } ;
typedef int GLuint ;
typedef int GLubyte ;
typedef int GLstencil ;
typedef int GLint ;
typedef TYPE_2__ GLcontext ;


 int FUNC_0 (int *,int *,int) ;
 int * FUNC_1 (int ,int ) ;

void FUNC_2( GLcontext *VAR_0,
                           GLuint VAR_1, GLint VAR_2, GLint VAR_3, GLubyte VAR_4[] )
{
   GLstencil *VAR_5;

   if (VAR_0->Buffer->Stencil) {
      VAR_5 = FUNC_1( VAR_2, VAR_3 );
      FUNC_0( VAR_4, VAR_5, VAR_1 * sizeof(GLubyte) );
   }
}
