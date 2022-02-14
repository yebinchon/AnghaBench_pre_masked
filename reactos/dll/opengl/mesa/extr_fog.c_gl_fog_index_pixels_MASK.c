
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int Mode; double End; float Start; double Index; double Density; } ;
struct TYPE_6__ {double Tz; float Sz; } ;
struct TYPE_8__ {double* ProjectionMatrix; TYPE_2__ Fog; TYPE_1__ Viewport; } ;
typedef size_t GLuint ;
typedef double GLfloat ;
typedef int GLdepth ;
typedef TYPE_3__ GLcontext ;


 double FUNC_0 (double,float,float) ;



 double FUNC_1 (double) ;
 int FUNC_2 (TYPE_3__*,char*) ;

void FUNC_3( GLcontext *VAR_0,
                          GLuint VAR_1, const GLdepth VAR_2[], GLuint VAR_3[] )
{
   GLfloat VAR_4 = VAR_0->ProjectionMatrix[10];
   GLfloat VAR_5 = VAR_0->ProjectionMatrix[14];
   GLuint VAR_6;

   GLfloat VAR_7 = VAR_0->Viewport.Tz;
   GLfloat VAR_8 = 1.0F / VAR_0->Viewport.Sz;

   switch (VAR_0->Fog.Mode) {
      case 128:
         {
            GLfloat VAR_9 = VAR_0->Fog.End;
            GLfloat VAR_10 = 1.0F / (VAR_0->Fog.End - VAR_0->Fog.Start);
            for (VAR_6=0;VAR_6<VAR_1;VAR_6++) {
               GLfloat VAR_11 = ((GLfloat) VAR_2[VAR_6] - VAR_7) * VAR_8;
               GLfloat VAR_12 = -VAR_5 / (VAR_4+VAR_11);
               GLfloat VAR_13;
               if (VAR_12 < 0.0) VAR_12 = -VAR_12;
               VAR_13 = (VAR_9 - VAR_12) * VAR_10;
               VAR_13 = FUNC_0( VAR_13, 0.0F, 1.0F );
               VAR_3[VAR_6] = (GLuint) ((GLfloat) VAR_3[VAR_6] + (1.0F-VAR_13) * VAR_0->Fog.Index);
            }
  }
  break;
      case 130:
         for (VAR_6=0;VAR_6<VAR_1;VAR_6++) {
     GLfloat VAR_14 = ((GLfloat) VAR_2[VAR_6] - VAR_7) * VAR_8;
     GLfloat VAR_15 = -VAR_5 / (VAR_4+VAR_14);
            GLfloat VAR_16;
     if (VAR_15 < 0.0) VAR_15 = -VAR_15;
     VAR_16 = FUNC_1( -VAR_0->Fog.Density * VAR_15 );
     VAR_16 = FUNC_0( VAR_16, 0.0F, 1.0F );
     VAR_3[VAR_6] = (GLuint) ((GLfloat) VAR_3[VAR_6] + (1.0F-VAR_16) * VAR_0->Fog.Index);
  }
  break;
      case 129:
         {
            GLfloat VAR_17 = -VAR_0->Fog.Density * VAR_0->Fog.Density;
            for (VAR_6=0;VAR_6<VAR_1;VAR_6++) {
               GLfloat VAR_18 = ((GLfloat) VAR_2[VAR_6] - VAR_7) * VAR_8;
               GLfloat VAR_19 = -VAR_5 / (VAR_4+VAR_18);
               GLfloat VAR_20;
               if (VAR_19 < 0.0) VAR_19 = -VAR_19;
               VAR_20 = FUNC_1( VAR_17 * VAR_19*VAR_19 );
               VAR_20 = FUNC_0( VAR_20, 0.0F, 1.0F );
               VAR_3[VAR_6] = (GLuint) ((GLfloat) VAR_3[VAR_6] + (1.0F-VAR_20) * VAR_0->Fog.Index);
            }
  }
  break;
      default:
         FUNC_2(VAR_0, "Bad fog mode in gl_fog_index_pixels");
         return;
   }
}
