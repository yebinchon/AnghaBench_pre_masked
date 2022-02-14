
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_6__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ RefCount; } ;
struct TYPE_8__ {int Proxy2D; int Proxy1D; } ;
struct TYPE_9__ {void* PB; void* VB; TYPE_1__ Texture; TYPE_6__* Shared; } ;
typedef TYPE_2__ GLcontext ;


 TYPE_2__* VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (void*) ;
 int FUNC_2 (TYPE_2__*,TYPE_6__*) ;
 scalar_t__ FUNC_3 (char*) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (TYPE_2__*) ;

void FUNC_6( GLcontext *VAR_1 )
{
   if (VAR_1) {







      FUNC_1( VAR_1->PB );
      FUNC_1( VAR_1->VB );

      VAR_1->Shared->RefCount--;
      FUNC_0(VAR_1->Shared->RefCount>=0);
      if (VAR_1->Shared->RefCount==0) {

  FUNC_2( VAR_1, VAR_1->Shared );
      }


      FUNC_4( ((void*)0), VAR_1->Texture.Proxy1D );
      FUNC_4( ((void*)0), VAR_1->Texture.Proxy2D );

      FUNC_1( (void *) VAR_1 );


      if (VAR_1==VAR_0) {
         VAR_0 = ((void*)0);
      }


   }
}
