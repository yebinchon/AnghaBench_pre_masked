
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_12__ {int (* AllocDepthBuffer ) (TYPE_4__*) ;int (* GetBufferSize ) (TYPE_4__*,scalar_t__*,scalar_t__*) ;} ;
struct TYPE_14__ {TYPE_3__* Visual; TYPE_2__ Driver; TYPE_1__* Buffer; int NewState; } ;
struct TYPE_13__ {scalar_t__ DepthBits; scalar_t__ StencilBits; scalar_t__ AccumBits; scalar_t__ BackAlphaEnabled; scalar_t__ FrontAlphaEnabled; } ;
struct TYPE_11__ {scalar_t__ Width; scalar_t__ Height; } ;
typedef scalar_t__ GLuint ;
typedef int GLint ;
typedef TYPE_4__ GLcontext ;


 int VAR_0 ;
 int FUNC_0 (TYPE_4__*) ;
 int FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (TYPE_4__*) ;
 int FUNC_3 (TYPE_4__*,scalar_t__*,scalar_t__*) ;
 int FUNC_4 (TYPE_4__*) ;

void FUNC_5( GLcontext *VAR_1 )
{
   GLint VAR_2;
   GLuint VAR_3, VAR_4;

   VAR_1->NewState |= VAR_0;


   (*VAR_1->Driver.GetBufferSize)( VAR_1, &VAR_3, &VAR_4 );


   VAR_2 = VAR_1->Buffer->Width!=VAR_3 || VAR_1->Buffer->Height!=VAR_4;


   VAR_1->Buffer->Width = VAR_3;
   VAR_1->Buffer->Height = VAR_4;


   if (VAR_2 && VAR_1->Visual->DepthBits>0) {

      (*VAR_1->Driver.AllocDepthBuffer)( VAR_1 );


   }
   if (VAR_2 && VAR_1->Visual->StencilBits>0) {

      FUNC_2( VAR_1 );
   }
   if (VAR_2 && VAR_1->Visual->AccumBits>0) {

      FUNC_0( VAR_1 );
   }
   if (VAR_2
       && (VAR_1->Visual->FrontAlphaEnabled || VAR_1->Visual->BackAlphaEnabled)) {
      FUNC_1( VAR_1 );
   }
}
