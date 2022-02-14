
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {float* Color; float End; int Mode; float Start; float Density; } ;
struct TYPE_8__ {TYPE_2__ Fog; TYPE_1__* Visual; } ;
struct TYPE_6__ {float RedScale; float GreenScale; float BlueScale; } ;
typedef size_t GLuint ;
typedef float GLubyte ;
typedef float GLfloat ;
typedef TYPE_3__ GLcontext ;


 float FUNC_0 (float) ;
 float FUNC_1 (float,float,float) ;



 float FUNC_2 (float) ;
 int FUNC_3 (TYPE_3__*,char*) ;

void FUNC_4( GLcontext *VAR_0,
                            GLuint VAR_1, GLfloat VAR_2[][4], GLubyte VAR_3[][4] )
{
   GLuint VAR_4;
   GLfloat VAR_5;
   GLfloat VAR_6 = VAR_0->Fog.Color[0] * VAR_0->Visual->RedScale;
   GLfloat VAR_7 = VAR_0->Fog.Color[1] * VAR_0->Visual->GreenScale;
   GLfloat VAR_8 = VAR_0->Fog.Color[2] * VAR_0->Visual->BlueScale;
   GLfloat VAR_9 = VAR_0->Fog.End;

   switch (VAR_0->Fog.Mode) {
      case 128:
         VAR_5 = 1.0F / (VAR_0->Fog.End - VAR_0->Fog.Start);
         for (VAR_4=0;VAR_4<VAR_1;VAR_4++) {
            GLfloat VAR_10 = (VAR_9 - FUNC_0(VAR_2[VAR_4][2])) * VAR_5;
            VAR_10 = FUNC_1( VAR_10, 0.0F, 1.0F );
            VAR_3[VAR_4][0] = VAR_10 * VAR_3[VAR_4][0] + (1.0F-VAR_10) * VAR_6;
            VAR_3[VAR_4][1] = VAR_10 * VAR_3[VAR_4][1] + (1.0F-VAR_10) * VAR_7;
            VAR_3[VAR_4][2] = VAR_10 * VAR_3[VAR_4][2] + (1.0F-VAR_10) * VAR_8;
         }
  break;
      case 130:
         VAR_5 = -VAR_0->Fog.Density;
         for (VAR_4=0;VAR_4<VAR_1;VAR_4++) {
            GLfloat VAR_11 = FUNC_2( VAR_5 * FUNC_0(VAR_2[VAR_4][2]) );
            VAR_11 = FUNC_1( VAR_11, 0.0F, 1.0F );
            VAR_3[VAR_4][0] = VAR_11 * VAR_3[VAR_4][0] + (1.0F-VAR_11) * VAR_6;
            VAR_3[VAR_4][1] = VAR_11 * VAR_3[VAR_4][1] + (1.0F-VAR_11) * VAR_7;
            VAR_3[VAR_4][2] = VAR_11 * VAR_3[VAR_4][2] + (1.0F-VAR_11) * VAR_8;
         }
  break;
      case 129:
         VAR_5 = -(VAR_0->Fog.Density*VAR_0->Fog.Density);
         for (VAR_4=0;VAR_4<VAR_1;VAR_4++) {
            GLfloat VAR_12 = FUNC_0(VAR_2[VAR_4][2]);
            GLfloat VAR_13 = FUNC_2( VAR_5 * VAR_12*VAR_12 );
            VAR_13 = FUNC_1( VAR_13, 0.0F, 1.0F );
            VAR_3[VAR_4][0] = VAR_13 * VAR_3[VAR_4][0] + (1.0F-VAR_13) * VAR_6;
            VAR_3[VAR_4][1] = VAR_13 * VAR_3[VAR_4][1] + (1.0F-VAR_13) * VAR_7;
            VAR_3[VAR_4][2] = VAR_13 * VAR_3[VAR_4][2] + (1.0F-VAR_13) * VAR_8;
         }
  break;
      default:
         FUNC_3(VAR_0, "Bad fog mode in gl_fog_color_vertices");
         return;
   }
}
