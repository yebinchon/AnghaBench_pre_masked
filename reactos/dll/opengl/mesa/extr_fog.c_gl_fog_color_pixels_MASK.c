
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {double* Color; int Mode; double End; float Start; double Density; } ;
struct TYPE_8__ {double Tz; float Sz; } ;
struct TYPE_10__ {double* ProjectionMatrix; TYPE_3__ Fog; TYPE_2__ Viewport; TYPE_1__* Visual; } ;
struct TYPE_7__ {double RedScale; double GreenScale; double BlueScale; } ;
typedef size_t GLuint ;
typedef int GLubyte ;
typedef int GLint ;
typedef double GLfloat ;
typedef int GLdepth ;
typedef TYPE_4__ GLcontext ;


 double FUNC_0 (double,float,float) ;



 double FUNC_1 (double) ;
 int FUNC_2 (TYPE_4__*,char*) ;

void FUNC_3( GLcontext *VAR_0,
                          GLuint VAR_1, const GLdepth VAR_2[], GLubyte VAR_3[],
     GLubyte VAR_4[], GLubyte VAR_5[], GLubyte VAR_6[] )
{
   GLfloat VAR_7 = VAR_0->ProjectionMatrix[10];
   GLfloat VAR_8 = VAR_0->ProjectionMatrix[14];
   GLuint VAR_9;

   GLfloat VAR_10 = VAR_0->Fog.Color[0] * VAR_0->Visual->RedScale;
   GLfloat VAR_11 = VAR_0->Fog.Color[1] * VAR_0->Visual->GreenScale;
   GLfloat VAR_12 = VAR_0->Fog.Color[2] * VAR_0->Visual->BlueScale;

   GLfloat VAR_13 = VAR_0->Viewport.Tz;
   GLfloat VAR_14 = 1.0F / VAR_0->Viewport.Sz;

   switch (VAR_0->Fog.Mode) {
      case 128:
         {
            GLfloat VAR_15 = VAR_0->Fog.End;
            GLfloat VAR_16 = 1.0F / (VAR_0->Fog.End - VAR_0->Fog.Start);
            for (VAR_9=0;VAR_9<VAR_1;VAR_9++) {
               GLfloat VAR_17 = ((GLfloat) VAR_2[VAR_9] - VAR_13) * VAR_14;
               GLfloat VAR_18 = -VAR_8 / (VAR_7+VAR_17);
               GLfloat VAR_19, VAR_20;
               if (VAR_18 < 0.0) VAR_18 = -VAR_18;
               VAR_19 = (VAR_15 - VAR_18) * VAR_16;
               VAR_19 = FUNC_0( VAR_19, 0.0F, 1.0F );
               VAR_20 = 1.0F - VAR_19;
               VAR_3[VAR_9] = (GLint) (VAR_19 * (GLfloat) VAR_3[VAR_9] + VAR_20 * VAR_10);
               VAR_4[VAR_9] = (GLint) (VAR_19 * (GLfloat) VAR_4[VAR_9] + VAR_20 * VAR_11);
               VAR_5[VAR_9] = (GLint) (VAR_19 * (GLfloat) VAR_5[VAR_9] + VAR_20 * VAR_12);
            }
         }
  break;
      case 130:
  for (VAR_9=0;VAR_9<VAR_1;VAR_9++) {
     GLfloat VAR_21 = ((GLfloat) VAR_2[VAR_9] - VAR_13) * VAR_14;
     GLfloat VAR_22 = -VAR_8 / (VAR_7+VAR_21);
            GLfloat VAR_23, VAR_24;
     if (VAR_22 < 0.0) VAR_22 = -VAR_22;
     VAR_23 = FUNC_1( -VAR_0->Fog.Density * VAR_22 );
     VAR_23 = FUNC_0( VAR_23, 0.0F, 1.0F );
            VAR_24 = 1.0F - VAR_23;
            VAR_3[VAR_9] = (GLint) (VAR_23 * (GLfloat) VAR_3[VAR_9] + VAR_24 * VAR_10);
            VAR_4[VAR_9] = (GLint) (VAR_23 * (GLfloat) VAR_4[VAR_9] + VAR_24 * VAR_11);
            VAR_5[VAR_9] = (GLint) (VAR_23 * (GLfloat) VAR_5[VAR_9] + VAR_24 * VAR_12);
  }
  break;
      case 129:
         {
            GLfloat VAR_25 = -VAR_0->Fog.Density * VAR_0->Fog.Density;
            for (VAR_9=0;VAR_9<VAR_1;VAR_9++) {
               GLfloat VAR_26 = ((GLfloat) VAR_2[VAR_9] - VAR_13) * VAR_14;
               GLfloat VAR_27 = -VAR_8 / (VAR_7+VAR_26);
               GLfloat VAR_28, VAR_29;
               if (VAR_27 < 0.0) VAR_27 = -VAR_27;
               VAR_28 = FUNC_1( VAR_25 * VAR_27*VAR_27 );
               VAR_28 = FUNC_0( VAR_28, 0.0F, 1.0F );
               VAR_29 = 1.0F - VAR_28;
               VAR_3[VAR_9] = (GLint) (VAR_28 * (GLfloat) VAR_3[VAR_9] + VAR_29 * VAR_10);
               VAR_4[VAR_9] = (GLint) (VAR_28 * (GLfloat) VAR_4[VAR_9] + VAR_29 * VAR_11);
               VAR_5[VAR_9] = (GLint) (VAR_28 * (GLfloat) VAR_5[VAR_9] + VAR_29 * VAR_12);
            }
         }
  break;
      default:
         FUNC_2(VAR_0, "Bad fog mode in gl_fog_color_pixels");
         return;
   }
}
