
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* Buffer; } ;
struct TYPE_5__ {int Width; int Height; int * Accum; } ;
typedef int GLint ;
typedef TYPE_2__ GLcontext ;
typedef int GLaccum ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_2__*,int ,char*) ;
 scalar_t__ FUNC_2 (int) ;

void FUNC_3( GLcontext *VAR_1 )
{
   GLint VAR_2;

   if (VAR_1->Buffer->Accum) {
      FUNC_0( VAR_1->Buffer->Accum );
      VAR_1->Buffer->Accum = ((void*)0);
   }


   VAR_2 = VAR_1->Buffer->Width * VAR_1->Buffer->Height * 4 * sizeof(GLaccum);
   VAR_1->Buffer->Accum = (GLaccum *) FUNC_2( VAR_2 );
   if (!VAR_1->Buffer->Accum) {

      FUNC_1( VAR_1, VAR_0, "glAccum" );
   }
}
