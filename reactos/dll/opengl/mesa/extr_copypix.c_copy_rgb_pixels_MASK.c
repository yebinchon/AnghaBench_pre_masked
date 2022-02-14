
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_8__ ;
typedef struct TYPE_22__ TYPE_7__ ;
typedef struct TYPE_21__ TYPE_6__ ;
typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


struct TYPE_19__ {int (* WriteColorSpan ) (TYPE_8__*,scalar_t__,scalar_t__,scalar_t__,scalar_t__*,scalar_t__*,scalar_t__*,scalar_t__*,int *) ;int (* SetBuffer ) (TYPE_8__*,scalar_t__) ;} ;
struct TYPE_17__ {scalar_t__ DrawBuffer; } ;
struct TYPE_20__ {float ZoomX; float ZoomY; double RedScale; double RedBias; double GreenScale; double GreenBias; double BlueScale; double BlueBias; double AlphaScale; double AlphaBias; scalar_t__ ReadBuffer; int MapRtoRsize; int MapGtoGsize; int MapBtoBsize; int MapAtoAsize; int* MapRtoR; int* MapGtoG; int* MapBtoB; int* MapAtoA; scalar_t__ MapColorFlag; } ;
struct TYPE_22__ {int* RasterPos; } ;
struct TYPE_21__ {scalar_t__ Test; } ;
struct TYPE_23__ {scalar_t__ RasterMask; TYPE_4__ Driver; TYPE_3__* Buffer; TYPE_2__ Color; TYPE_1__* Visual; TYPE_5__ Pixel; TYPE_7__ Current; TYPE_6__ Depth; } ;
struct TYPE_18__ {scalar_t__ Width; scalar_t__ Height; } ;
struct TYPE_16__ {scalar_t__ RedScale; scalar_t__ GreenScale; scalar_t__ BlueScale; scalar_t__ AlphaScale; int InvRedScale; int InvGreenScale; int InvBlueScale; int InvAlphaScale; } ;
typedef scalar_t__ GLint ;
typedef scalar_t__ GLfloat ;
typedef TYPE_8__ GLcontext ;
typedef int GLboolean ;


 scalar_t__ FUNC_0 (scalar_t__,int ,scalar_t__) ;
 int FUNC_1 (int ,scalar_t__*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (scalar_t__*) ;
 scalar_t__* VAR_7 ;
 scalar_t__* VAR_8 ;
 int FUNC_3 (TYPE_8__*,scalar_t__,scalar_t__,scalar_t__,scalar_t__*,scalar_t__*,scalar_t__*,scalar_t__*) ;
 int FUNC_4 (TYPE_8__*,scalar_t__,scalar_t__,scalar_t__,scalar_t__*,scalar_t__*,scalar_t__*,scalar_t__*,scalar_t__*,int ) ;
 int FUNC_5 (TYPE_8__*,scalar_t__,scalar_t__,scalar_t__,scalar_t__*,scalar_t__*,scalar_t__*,scalar_t__*,scalar_t__*,scalar_t__) ;
 scalar_t__* VAR_9 ;
 scalar_t__* VAR_10 ;
 int FUNC_6 (TYPE_8__*,scalar_t__) ;
 int FUNC_7 (TYPE_8__*,scalar_t__) ;
 int FUNC_8 (TYPE_8__*,scalar_t__,scalar_t__,scalar_t__,scalar_t__*,scalar_t__*,scalar_t__*,scalar_t__*,int *) ;
 scalar_t__* VAR_11 ;

__attribute__((used)) static void FUNC_9( GLcontext* VAR_12,
                             GLint VAR_13, GLint VAR_14, GLint VAR_15, GLint VAR_16,
                             GLint VAR_17, GLint VAR_18 )
{
   FUNC_1( VAR_4, VAR_11, VAR_6 );
   FUNC_1( VAR_5, VAR_10, VAR_6 );
   FUNC_1( VAR_5, VAR_9, VAR_6 );
   FUNC_1( VAR_5, VAR_8, VAR_6 );
   FUNC_1( VAR_5, VAR_7, VAR_6 );
   GLboolean VAR_19, VAR_20, VAR_21;
   GLint VAR_22, VAR_23, VAR_24;
   GLint VAR_25, VAR_26;
   GLboolean VAR_27;

   if (VAR_12->Pixel.ZoomX==1.0F && VAR_12->Pixel.ZoomY==1.0F) {
      VAR_21 = VAR_2;
   }
   else {
      VAR_21 = VAR_3;
   }


   if (VAR_14<VAR_18) {

      VAR_22 = VAR_14 + VAR_16 - 1;
      VAR_23 = VAR_18 + VAR_16 - 1;
      VAR_24 = -1;
   }
   else {

      VAR_22 = VAR_14;
      VAR_23 = VAR_18;
      VAR_24 = 1;
   }

   VAR_19 = VAR_12->Pixel.RedScale!=1.0 || VAR_12->Pixel.RedBias!=0.0
                || VAR_12->Pixel.GreenScale!=1.0 || VAR_12->Pixel.GreenBias!=0.0
  || VAR_12->Pixel.BlueScale!=1.0 || VAR_12->Pixel.BlueBias!=0.0
  || VAR_12->Pixel.AlphaScale!=1.0 || VAR_12->Pixel.AlphaBias!=0.0;

   if (VAR_12->Depth.Test) {

      GLint VAR_28 = (GLint) (VAR_12->Current.RasterPos[2] * VAR_0);
      for (VAR_25=0;VAR_25<VAR_15;VAR_25++) {
         VAR_11[VAR_25] = VAR_28;
      }
   }

   if (VAR_12->RasterMask==0 && !VAR_21
       && VAR_17>=0 && VAR_17+VAR_15<=VAR_12->Buffer->Width) {
      VAR_20 = VAR_3;
   }
   else {
      VAR_20 = VAR_2;
   }


   VAR_27 = VAR_12->Pixel.ReadBuffer!=VAR_12->Color.DrawBuffer;

   for (VAR_26=0; VAR_26<VAR_16; VAR_26++, VAR_22+=VAR_24, VAR_23+=VAR_24) {


      if (VAR_27) {
         (*VAR_12->Driver.SetBuffer)( VAR_12, VAR_12->Pixel.ReadBuffer );
      }
      FUNC_3( VAR_12, VAR_15, VAR_13, VAR_22, VAR_10, VAR_9, VAR_8, VAR_7 );

      if (VAR_19) {
         GLfloat VAR_29 = VAR_12->Pixel.RedBias * VAR_12->Visual->RedScale;
         GLfloat VAR_30 = VAR_12->Pixel.GreenBias * VAR_12->Visual->GreenScale;
         GLfloat VAR_31 = VAR_12->Pixel.BlueBias * VAR_12->Visual->BlueScale;
         GLfloat VAR_32 = VAR_12->Pixel.AlphaBias * VAR_12->Visual->AlphaScale;
         GLint VAR_33 = (GLint) VAR_12->Visual->RedScale;
         GLint VAR_34 = (GLint) VAR_12->Visual->GreenScale;
         GLint VAR_35 = (GLint) VAR_12->Visual->BlueScale;
         GLint VAR_36 = (GLint) VAR_12->Visual->AlphaScale;
         for (VAR_25=0;VAR_25<VAR_15;VAR_25++) {
            GLint VAR_37 = VAR_10[VAR_25] * VAR_12->Pixel.RedScale + VAR_29;
            GLint VAR_38 = VAR_9[VAR_25] * VAR_12->Pixel.GreenScale + VAR_30;
            GLint VAR_39 = VAR_8[VAR_25] * VAR_12->Pixel.BlueScale + VAR_31;
            GLint VAR_40 = VAR_7[VAR_25] * VAR_12->Pixel.AlphaScale + VAR_32;
            VAR_10[VAR_25] = FUNC_0( VAR_37, 0, VAR_33 );
            VAR_9[VAR_25] = FUNC_0( VAR_38, 0, VAR_34 );
            VAR_8[VAR_25] = FUNC_0( VAR_39, 0, VAR_35 );
            VAR_7[VAR_25] = FUNC_0( VAR_40, 0, VAR_36 );
         }
      }

      if (VAR_12->Pixel.MapColorFlag) {
         GLfloat VAR_41 = (VAR_12->Pixel.MapRtoRsize-1) * VAR_12->Visual->InvRedScale;
         GLfloat VAR_42 = (VAR_12->Pixel.MapGtoGsize-1) * VAR_12->Visual->InvGreenScale;
         GLfloat VAR_43 = (VAR_12->Pixel.MapBtoBsize-1) * VAR_12->Visual->InvBlueScale;
         GLfloat VAR_44 = (VAR_12->Pixel.MapAtoAsize-1) * VAR_12->Visual->InvAlphaScale;
         for (VAR_25=0;VAR_25<VAR_15;VAR_25++) {
            GLint VAR_45 = VAR_10[VAR_25] * VAR_41;
            GLint VAR_46 = VAR_9[VAR_25] * VAR_42;
            GLint VAR_47 = VAR_8[VAR_25] * VAR_43;
            GLint VAR_48 = VAR_7[VAR_25] * VAR_44;
            VAR_10[VAR_25] = (GLint) (VAR_12->Pixel.MapRtoR[VAR_45]*VAR_12->Visual->RedScale);
            VAR_9[VAR_25] = (GLint) (VAR_12->Pixel.MapGtoG[VAR_46]*VAR_12->Visual->GreenScale);
            VAR_8[VAR_25] = (GLint) (VAR_12->Pixel.MapBtoB[VAR_47]*VAR_12->Visual->BlueScale);
            VAR_7[VAR_25] = (GLint) (VAR_12->Pixel.MapAtoA[VAR_48]*VAR_12->Visual->AlphaScale);
         }
      }


      if (VAR_27) {
         (*VAR_12->Driver.SetBuffer)( VAR_12, VAR_12->Color.DrawBuffer );
      }
      if (VAR_20 && VAR_23>=0 && VAR_23<VAR_12->Buffer->Height) {
         (*VAR_12->Driver.WriteColorSpan)( VAR_12, VAR_15, VAR_17, VAR_23,
                                 VAR_10, VAR_9, VAR_8, VAR_7, ((void*)0));
      }
      else if (VAR_21) {
         FUNC_5( VAR_12, VAR_15, VAR_17, VAR_23, VAR_11,
                                     VAR_10, VAR_9, VAR_8, VAR_7, VAR_18 );
      }
      else {
         FUNC_4( VAR_12, VAR_15, VAR_17, VAR_23, VAR_11,
                              VAR_10, VAR_9, VAR_8, VAR_7, VAR_1 );
      }
   }
   FUNC_2( VAR_11 );
   FUNC_2( VAR_10 );
   FUNC_2( VAR_9 );
   FUNC_2( VAR_8 );
   FUNC_2( VAR_7 );
}
