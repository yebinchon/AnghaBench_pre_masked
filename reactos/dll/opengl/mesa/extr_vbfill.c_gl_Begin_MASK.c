
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_7__ ;
typedef struct TYPE_23__ TYPE_6__ ;
typedef struct TYPE_22__ TYPE_5__ ;
typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;


struct vertex_buffer {int Findex; int Index; int Fcolor; int Color; scalar_t__ MonoColor; int MonoNormal; scalar_t__ Count; scalar_t__ Start; } ;
struct pixel_buffer {int dummy; } ;
struct TYPE_22__ {int TwoSide; } ;
struct TYPE_23__ {TYPE_5__ Model; int Enabled; } ;
struct TYPE_21__ {int Index; int * ByteColor; } ;
struct TYPE_20__ {int (* Index ) (TYPE_7__*,int ) ;int (* Color ) (TYPE_7__*,int ,int ,int ,int ) ;int (* Begin ) (TYPE_7__*,int) ;} ;
struct TYPE_18__ {scalar_t__ Vertex3f; } ;
struct TYPE_24__ {int Primitive; int LightTwoSide; TYPE_6__ Light; int StippleCounter; TYPE_4__ Current; TYPE_3__ Driver; TYPE_2__* Visual; scalar_t__ MonoPixels; TYPE_1__ Exec; scalar_t__ NewState; scalar_t__ NewProjectionMatrix; scalar_t__ NewModelViewMatrix; struct pixel_buffer* PB; struct vertex_buffer* VB; } ;
struct TYPE_19__ {scalar_t__ RGBAflag; } ;
typedef int GLubyte ;
typedef int GLenum ;
typedef TYPE_7__ GLcontext ;


 int VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int const VAR_4 ;



 int const VAR_5 ;







 int VAR_6 ;
 scalar_t__ FUNC_0 (TYPE_7__*) ;
 int FUNC_1 (struct pixel_buffer*,int const) ;
 int VAR_7 ;
 int FUNC_2 (TYPE_7__*) ;
 int FUNC_3 (TYPE_7__*) ;
 int FUNC_4 (TYPE_7__*,int ,char*) ;
 int FUNC_5 (TYPE_7__*) ;
 int FUNC_6 () ;
 int FUNC_7 (TYPE_7__*) ;
 scalar_t__ VAR_8 ;
 int FUNC_8 (TYPE_7__*,int) ;
 int FUNC_9 (TYPE_7__*,int ,int ,int ,int ) ;
 int FUNC_10 (TYPE_7__*,int ) ;

void FUNC_11( GLcontext *VAR_9, GLenum VAR_10 )
{
   struct vertex_buffer *VAR_11 = VAR_9->VB;
   struct pixel_buffer *VAR_12 = VAR_9->PB;




   if (FUNC_0(VAR_9)) {
      FUNC_4( VAR_9, VAR_3, "glBegin" );
      return;
   }
   if (VAR_9->NewModelViewMatrix) {
      FUNC_2(VAR_9);
   }
   if (VAR_9->NewProjectionMatrix) {
      FUNC_3(VAR_9);
   }
   if (VAR_9->NewState) {
      FUNC_7(VAR_9);
   }
   else if (VAR_9->Exec.Vertex3f==VAR_8) {
      FUNC_5(VAR_9);
   }

   if (VAR_9->Driver.Begin) {
      (*VAR_9->Driver.Begin)( VAR_9, VAR_10 );
   }

   VAR_9->Primitive = VAR_10;
   VAR_11->Start = VAR_11->Count = 0;

   VAR_11->MonoColor = VAR_9->MonoPixels;
   VAR_11->MonoNormal = VAR_6;
   if (VAR_11->MonoColor) {



      if (VAR_9->Visual->RGBAflag) {
         GLubyte VAR_13 = VAR_9->Current.ByteColor[0];
         GLubyte VAR_14 = VAR_9->Current.ByteColor[1];
         GLubyte VAR_15 = VAR_9->Current.ByteColor[2];
         GLubyte VAR_16 = VAR_9->Current.ByteColor[3];
         (*VAR_9->Driver.Color)( VAR_9, VAR_13, VAR_14, VAR_15, VAR_16 );
      }
      else {
         (*VAR_9->Driver.Index)( VAR_9, VAR_9->Current.Index );
      }
   }


   VAR_11->Color = VAR_11->Fcolor;
   VAR_11->Index = VAR_11->Findex;

   switch (VAR_9->Primitive) {
      case 134:
  VAR_9->LightTwoSide = VAR_1;
  FUNC_1( VAR_12, VAR_5 );
  break;
      case 137:
      case 135:
      case 136:
  VAR_9->LightTwoSide = VAR_1;
  VAR_9->StippleCounter = 0;
  FUNC_1( VAR_12, VAR_4 );
         break;
      case 130:
      case 128:
      case 129:
      case 132:
      case 131:
      case 133:
  VAR_9->LightTwoSide = VAR_9->Light.Enabled && VAR_9->Light.Model.TwoSide;
  FUNC_1( VAR_12, 133 );
         break;
      default:
  FUNC_4( VAR_9, VAR_2, "glBegin" );
  VAR_9->Primitive = VAR_0;
   }
}
