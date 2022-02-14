
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int Test; } ;
struct TYPE_8__ {TYPE_1__ Depth; TYPE_2__* Buffer; } ;
struct TYPE_7__ {int Width; int Height; int * Depth; } ;
typedef int GLdepth ;
typedef TYPE_3__ GLcontext ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_3__*,int ,char*) ;
 scalar_t__ FUNC_2 (int) ;

void FUNC_3( GLcontext* VAR_2 )
{

   if (VAR_2->Buffer->Depth) {
      FUNC_0(VAR_2->Buffer->Depth);
      VAR_2->Buffer->Depth = ((void*)0);
   }


   VAR_2->Buffer->Depth = (GLdepth *) FUNC_2( VAR_2->Buffer->Width
                                            * VAR_2->Buffer->Height
                                            * sizeof(GLdepth) );
   if (!VAR_2->Buffer->Depth) {

      VAR_2->Depth.Test = VAR_0;
      FUNC_1( VAR_2, VAR_1, "Couldn't allocate depth buffer" );
   }
}
