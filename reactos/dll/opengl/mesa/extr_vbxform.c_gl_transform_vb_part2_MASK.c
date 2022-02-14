
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_27__ TYPE_7__ ;
typedef struct TYPE_26__ TYPE_6__ ;
typedef struct TYPE_25__ TYPE_5__ ;
typedef struct TYPE_24__ TYPE_4__ ;
typedef struct TYPE_23__ TYPE_3__ ;
typedef struct TYPE_22__ TYPE_2__ ;
typedef struct TYPE_21__ TYPE_1__ ;


struct vertex_buffer {scalar_t__ Count; scalar_t__ Start; scalar_t__ Eye; scalar_t__ Clip; scalar_t__ Obj; scalar_t__ Normal; scalar_t__ TexCoord; int * Win; int * ClipMask; void* ClipOrMask; scalar_t__ ClipAndMask; } ;
struct TYPE_26__ {int (* RenderVB ) (TYPE_7__*,int ) ;int (* RasterSetup ) (TYPE_7__*,int ,scalar_t__) ;} ;
struct TYPE_25__ {scalar_t__ TexGenEnabled; scalar_t__ Enabled; } ;
struct TYPE_24__ {scalar_t__ Fog; } ;
struct TYPE_23__ {scalar_t__ Enabled; } ;
struct TYPE_22__ {scalar_t__ Enabled; } ;
struct TYPE_21__ {scalar_t__ AnyClip; } ;
struct TYPE_27__ {scalar_t__ RenderMode; scalar_t__ TextureMatrixType; TYPE_6__ Driver; int VertexCount; int VertexTime; scalar_t__ NewTextureMatrix; TYPE_5__ Texture; TYPE_4__ Hint; TYPE_3__ Fog; TYPE_2__ Light; TYPE_1__ Transform; struct vertex_buffer* VB; } ;
typedef scalar_t__ GLuint ;
typedef scalar_t__ GLdouble ;
typedef TYPE_7__ GLcontext ;
typedef int GLboolean ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 void* VAR_1 ;
 scalar_t__ VAR_2 ;
 void* VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_1 (TYPE_7__*) ;
 int FUNC_2 (TYPE_7__*) ;
 int FUNC_3 (TYPE_7__*,int ) ;
 int FUNC_4 (TYPE_7__*,int ) ;
 int FUNC_5 (TYPE_7__*,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_6 () ;
 int FUNC_7 (TYPE_7__*,scalar_t__,scalar_t__,scalar_t__,int *,void**,scalar_t__*) ;
 int FUNC_8 (TYPE_7__*) ;
 int FUNC_9 (TYPE_7__*,int ,scalar_t__) ;
 int FUNC_10 (TYPE_7__*,int ) ;
 int FUNC_11 (TYPE_7__*,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_12 (TYPE_7__*,scalar_t__,scalar_t__,int *) ;
 int FUNC_13 (TYPE_7__*,scalar_t__,scalar_t__,int *,int *) ;

void FUNC_14( GLcontext *VAR_7, GLboolean VAR_8 )
{
   struct vertex_buffer *VAR_9 = VAR_7->VB;




   FUNC_0( VAR_9->Count>0 );


   if (VAR_7->Transform.AnyClip) {
      GLuint VAR_10 = FUNC_12( VAR_7, VAR_9->Count - VAR_9->Start,
                                         VAR_9->Eye + VAR_9->Start,
                                         VAR_9->ClipMask + VAR_9->Start );
      if (VAR_10==VAR_0) {

         VAR_9->ClipOrMask = VAR_1;
         FUNC_4( VAR_7, VAR_8 );
         return;
      }
      else if (VAR_10==VAR_2) {
         VAR_9->ClipOrMask = VAR_3;
      }
      else {
         VAR_9->ClipAndMask = 0;
      }
   }




   FUNC_7( VAR_7, VAR_9->Count - VAR_9->Start, VAR_9->Eye + VAR_9->Start,
                         VAR_9->Clip + VAR_9->Start, VAR_9->ClipMask + VAR_9->Start,
                         &VAR_9->ClipOrMask, &VAR_9->ClipAndMask );

   if (VAR_9->ClipAndMask) {


      VAR_9->ClipOrMask = VAR_1;
      FUNC_4( VAR_7, VAR_8 );
      return;
   }


   if (VAR_7->Light.Enabled) {
      FUNC_8(VAR_7);
   }


   if (VAR_7->Fog.Enabled && VAR_7->Hint.Fog!=VAR_5) {
      FUNC_1(VAR_7);
   }


   if (VAR_7->Texture.Enabled || VAR_7->RenderMode==VAR_4) {
      if (VAR_7->Texture.TexGenEnabled) {
         FUNC_5( VAR_7, VAR_9->Count - VAR_9->Start,
                    VAR_9->Obj + VAR_9->Start,
                    VAR_9->Eye + VAR_9->Start,
                    VAR_9->Normal + VAR_9->Start,
                    VAR_9->TexCoord + VAR_9->Start );
      }
      if (VAR_7->NewTextureMatrix) {
         FUNC_2(VAR_7);
      }
      if (VAR_7->TextureMatrixType!=VAR_6) {
         FUNC_11( VAR_7, VAR_9->Count - VAR_9->Start,
                              VAR_9->TexCoord + VAR_9->Start );
      }
   }




   FUNC_13( VAR_7, VAR_9->Count - VAR_9->Start, VAR_9->Clip + VAR_9->Start,
                          VAR_9->ClipOrMask ? VAR_9->ClipMask + VAR_9->Start : ((void*)0),
                          VAR_9->Win + VAR_9->Start );


   if (VAR_7->Driver.RasterSetup) {
      (*VAR_7->Driver.RasterSetup)( VAR_7, 0, VAR_9->Count );
   }
   if (!VAR_7->Driver.RenderVB || !(*VAR_7->Driver.RenderVB)(VAR_7,VAR_8)) {
      FUNC_3( VAR_7, VAR_8 );
   }
}
