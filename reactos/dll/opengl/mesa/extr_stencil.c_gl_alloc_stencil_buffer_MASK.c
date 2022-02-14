
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int Enabled; } ;
struct TYPE_8__ {TYPE_1__ Stencil; TYPE_2__* Buffer; } ;
struct TYPE_7__ {int Width; int Height; int * Stencil; } ;
typedef int GLuint ;
typedef int GLstencil ;
typedef TYPE_3__ GLcontext ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_3__*,int ,char*) ;
 scalar_t__ FUNC_2 (int) ;

void FUNC_3( GLcontext *VAR_2 )
{
   GLuint VAR_3 = VAR_2->Buffer->Width * VAR_2->Buffer->Height;


   if (VAR_2->Buffer->Stencil) {
      FUNC_0(VAR_2->Buffer->Stencil);
      VAR_2->Buffer->Stencil = ((void*)0);
   }


   VAR_2->Buffer->Stencil = (GLstencil *) FUNC_2(VAR_3 * sizeof(GLstencil));
   if (!VAR_2->Buffer->Stencil) {

      VAR_2->Stencil.Enabled = VAR_0;
      FUNC_1( VAR_2, VAR_1, "gl_alloc_stencil_buffer" );
   }
}
