
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_17__ {float ZoomX; float ZoomY; int DepthScale; int DepthBias; } ;
struct TYPE_16__ {int (* ReadDepthSpanFloat ) (TYPE_6__*,size_t,size_t,size_t,int*) ;} ;
struct TYPE_15__ {int Index; scalar_t__* ByteColor; } ;
struct TYPE_19__ {TYPE_5__* Visual; TYPE_4__ Pixel; TYPE_3__ Driver; TYPE_2__ Current; TYPE_1__* Buffer; } ;
struct TYPE_18__ {scalar_t__ RGBAflag; } ;
struct TYPE_14__ {int Depth; } ;
typedef int GLuint ;
typedef scalar_t__ GLubyte ;
typedef size_t GLint ;
typedef int GLfloat ;
typedef size_t GLdepth ;
typedef TYPE_6__ GLcontext ;
typedef scalar_t__ GLboolean ;


 int FUNC_0 (int,double,double) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (scalar_t__*,int,size_t) ;
 int FUNC_2 (TYPE_6__*,int ,char*) ;
 int FUNC_3 (TYPE_6__*,size_t,size_t,size_t,size_t*,scalar_t__*,scalar_t__*,scalar_t__*,scalar_t__*,int ) ;
 int FUNC_4 (TYPE_6__*,size_t,size_t,size_t,size_t*,int *,int ) ;
 int FUNC_5 (TYPE_6__*,size_t,size_t,size_t,size_t*,scalar_t__*,scalar_t__*,scalar_t__*,scalar_t__*,size_t) ;
 int FUNC_6 (TYPE_6__*,size_t,size_t,size_t,size_t*,int *,size_t) ;
 int FUNC_7 (TYPE_6__*,size_t,size_t,size_t,int*) ;

__attribute__((used)) static void FUNC_8( GLcontext* VAR_6, GLint VAR_7, GLint VAR_8,
                               GLint VAR_9, GLint VAR_10,
                               GLint VAR_11, GLint VAR_12 )
{
   GLfloat VAR_13[VAR_5];
   GLdepth VAR_14[VAR_5];
   GLuint VAR_15[VAR_5];
   GLubyte VAR_16[VAR_5], VAR_17[VAR_5];
   GLubyte VAR_18[VAR_5], VAR_19[VAR_5];
   GLint VAR_20, VAR_21, VAR_22;
   GLint VAR_23, VAR_24;
   GLboolean VAR_25;

   if (!VAR_6->Buffer->Depth) {
      FUNC_2( VAR_6, VAR_3, "glCopyPixels" );
      return;
   }

   if (VAR_6->Pixel.ZoomX==1.0F && VAR_6->Pixel.ZoomY==1.0F) {
      VAR_25 = VAR_2;
   }
   else {
      VAR_25 = VAR_4;
   }


   if (VAR_8<VAR_12) {

      VAR_20 = VAR_8 + VAR_10 - 1;
      VAR_21 = VAR_12 + VAR_10 - 1;
      VAR_22 = -1;
   }
   else {

      VAR_20 = VAR_8;
      VAR_21 = VAR_12;
      VAR_22 = 1;
   }


   if (VAR_6->Visual->RGBAflag) {
      GLubyte VAR_26, VAR_27, VAR_28, VAR_29;
      VAR_26 = VAR_6->Current.ByteColor[0];
      VAR_27 = VAR_6->Current.ByteColor[1];
      VAR_28 = VAR_6->Current.ByteColor[2];
      VAR_29 = VAR_6->Current.ByteColor[3];
      FUNC_1( VAR_16, (int) VAR_26, VAR_9 );
      FUNC_1( VAR_17, (int) VAR_27, VAR_9 );
      FUNC_1( VAR_18, (int) VAR_28, VAR_9 );
      FUNC_1( VAR_19, (int) VAR_29, VAR_9 );
   }
   else {
      for (VAR_23=0;VAR_23<VAR_9;VAR_23++) {
         VAR_15[VAR_23] = VAR_6->Current.Index;
      }
   }

   for (VAR_24=0; VAR_24<VAR_10; VAR_24++, VAR_20+=VAR_22, VAR_21+=VAR_22) {

      (*VAR_6->Driver.ReadDepthSpanFloat)( VAR_6, VAR_9, VAR_7, VAR_20, VAR_13 );

      for (VAR_23=0;VAR_23<VAR_9;VAR_23++) {
         GLfloat VAR_30 = VAR_13[VAR_23] * VAR_6->Pixel.DepthScale + VAR_6->Pixel.DepthBias;
         VAR_14[VAR_23] = (GLint) (FUNC_0( VAR_30, 0.0, 1.0 ) * VAR_0);
      }

      if (VAR_6->Visual->RGBAflag) {
         if (VAR_25) {
            FUNC_5( VAR_6, VAR_9, VAR_11, VAR_21, VAR_14,
                                        VAR_16, VAR_17, VAR_18, VAR_19, VAR_12 );
         }
         else {
            FUNC_3( VAR_6, VAR_9, VAR_11, VAR_21, VAR_14,
                                 VAR_16, VAR_17, VAR_18, VAR_19, VAR_1 );
         }
      }
      else {
         if (VAR_25) {
            FUNC_6( VAR_6, VAR_9, VAR_11, VAR_21,
                                        VAR_14, VAR_15, VAR_12);
         }
         else {
            FUNC_4( VAR_6, VAR_9, VAR_11, VAR_21,
                                 VAR_14, VAR_15, VAR_1 );
         }
      }
   }
}
