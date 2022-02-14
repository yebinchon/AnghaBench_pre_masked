
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int Mode; float End; float Start; float Index; float Density; } ;
struct TYPE_6__ {TYPE_1__ Fog; } ;
typedef size_t GLuint ;
typedef size_t GLint ;
typedef float GLfloat ;
typedef TYPE_2__ GLcontext ;


 float FUNC_0 (float) ;
 float FUNC_1 (float,float,float) ;



 float FUNC_2 (float) ;
 int FUNC_3 (TYPE_2__*,char*) ;

void FUNC_4( GLcontext *VAR_0,
                            GLuint VAR_1, GLfloat VAR_2[][4], GLuint VAR_3[] )
{

   switch (VAR_0->Fog.Mode) {
      case 128:
         {
            GLfloat VAR_4 = 1.0F / (VAR_0->Fog.End - VAR_0->Fog.Start);
            GLfloat VAR_5 = VAR_0->Fog.Index;
            GLfloat VAR_6 = VAR_0->Fog.End;
            GLuint VAR_7;
            for (VAR_7=0;VAR_7<VAR_1;VAR_7++) {
               GLfloat VAR_8 = (VAR_6 - FUNC_0(VAR_2[VAR_7][2])) * VAR_4;
               VAR_8 = FUNC_1( VAR_8, 0.0F, 1.0F );
               VAR_3[VAR_7] = (GLint)
                         ((GLfloat) (GLint) VAR_3[VAR_7] + (1.0F-VAR_8) * VAR_5);
            }
         }
  break;
      case 130:
         {
            GLfloat VAR_9 = -VAR_0->Fog.Density;
            GLfloat VAR_10 = VAR_0->Fog.Index;
            GLuint VAR_11;
            for (VAR_11=0;VAR_11<VAR_1;VAR_11++) {
               GLfloat VAR_12 = FUNC_2( VAR_9 * FUNC_0(VAR_2[VAR_11][2]) );
               VAR_12 = FUNC_1( VAR_12, 0.0F, 1.0F );
               VAR_3[VAR_11] = (GLint)
                         ((GLfloat) (GLint) VAR_3[VAR_11] + (1.0F-VAR_12) * VAR_10);
            }
         }
  break;
      case 129:
         {
            GLfloat VAR_13 = -(VAR_0->Fog.Density*VAR_0->Fog.Density);
            GLfloat VAR_14 = VAR_0->Fog.Index;
            GLuint VAR_15;
            for (VAR_15=0;VAR_15<VAR_1;VAR_15++) {
               GLfloat VAR_16 = FUNC_0(VAR_2[VAR_15][2]);
               GLfloat VAR_17 = FUNC_2( -VAR_13 * VAR_16*VAR_16 );
               VAR_17 = FUNC_1( VAR_17, 0.0F, 1.0F );
               VAR_3[VAR_15] = (GLint)
                         ((GLfloat) (GLint) VAR_3[VAR_15] + (1.0F-VAR_17) * VAR_14);
            }
         }
  break;
      default:
         FUNC_3(VAR_0, "Bad fog mode in gl_fog_index_vertices");
         return;
   }
}
