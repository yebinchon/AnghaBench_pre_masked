
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {float ZoomX; float ZoomY; size_t IndexShift; size_t IndexOffset; scalar_t__ MapStoSsize; size_t* MapStoS; scalar_t__ MapStencilFlag; } ;
struct TYPE_11__ {TYPE_2__ Pixel; TYPE_1__* Buffer; } ;
struct TYPE_9__ {int Stencil; } ;
typedef size_t GLubyte ;
typedef scalar_t__ GLint ;
typedef TYPE_3__ GLcontext ;
typedef scalar_t__ GLboolean ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_3__*,int ,char*) ;
 int FUNC_1 (TYPE_3__*,scalar_t__,scalar_t__,scalar_t__,size_t*) ;
 int FUNC_2 (TYPE_3__*,scalar_t__,scalar_t__,scalar_t__,size_t*) ;
 int FUNC_3 (TYPE_3__*,scalar_t__,scalar_t__,scalar_t__,size_t*,scalar_t__) ;

__attribute__((used)) static void FUNC_4( GLcontext* VAR_4, GLint VAR_5, GLint VAR_6,
                                 GLint VAR_7, GLint VAR_8,
                                 GLint VAR_9, GLint VAR_10 )
{
   GLubyte VAR_11[VAR_3];
   GLint VAR_12, VAR_13, VAR_14;
   GLint VAR_15, VAR_16;
   GLboolean VAR_17;

   if (!VAR_4->Buffer->Stencil) {
      FUNC_0( VAR_4, VAR_1, "glCopyPixels" );
      return;
   }

   if (VAR_4->Pixel.ZoomX==1.0F && VAR_4->Pixel.ZoomY==1.0F) {
      VAR_17 = VAR_0;
   }
   else {
      VAR_17 = VAR_2;
   }


   if (VAR_6<VAR_10) {

      VAR_12 = VAR_6 + VAR_8 - 1;
      VAR_13 = VAR_10 + VAR_8 - 1;
      VAR_14 = -1;
   }
   else {

      VAR_12 = VAR_6;
      VAR_13 = VAR_10;
      VAR_14 = 1;
   }

   for (VAR_16=0; VAR_16<VAR_8; VAR_16++, VAR_12+=VAR_14, VAR_13+=VAR_14) {

      FUNC_1( VAR_4, VAR_7, VAR_5, VAR_12, VAR_11 );

      if (VAR_4->Pixel.IndexShift<0) {
         for (VAR_15=0;VAR_15<VAR_7;VAR_15++) {
            VAR_11[VAR_15] = (VAR_11[VAR_15] >> -VAR_4->Pixel.IndexShift)
                         + VAR_4->Pixel.IndexOffset;
         }
      }
      else {
         for (VAR_15=0;VAR_15<VAR_7;VAR_15++) {
            VAR_11[VAR_15] = (VAR_11[VAR_15] << VAR_4->Pixel.IndexShift)
    + VAR_4->Pixel.IndexOffset;
         }
      }

      if (VAR_4->Pixel.MapStencilFlag) {
         for (VAR_15=0;VAR_15<VAR_7;VAR_15++) {
            if ((GLint) VAR_11[VAR_15] < VAR_4->Pixel.MapStoSsize) {
               VAR_11[VAR_15] = VAR_4->Pixel.MapStoS[ VAR_11[VAR_15] ];
            }
         }
      }

      if (VAR_17) {
         FUNC_3( VAR_4, VAR_7, VAR_9, VAR_13, VAR_11, VAR_10 );
      }
      else {
         FUNC_2( VAR_4, VAR_7, VAR_9, VAR_13, VAR_11 );
      }
   }
}
