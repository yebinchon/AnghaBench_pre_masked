
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__** ClipEquation; scalar_t__* ClipEnabled; int AnyClip; } ;
struct TYPE_5__ {TYPE_1__ Transform; } ;
typedef size_t GLuint ;
typedef int GLubyte ;
typedef scalar_t__ GLfloat ;
typedef TYPE_2__ GLcontext ;
typedef scalar_t__ GLboolean ;


 int FUNC_0 (int ) ;
 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 size_t VAR_7 ;

__attribute__((used)) static GLuint FUNC_1( GLcontext *VAR_8, GLuint VAR_9,
                                           GLfloat VAR_10[][4],
                                 GLubyte VAR_11[] )
{
   GLboolean VAR_12 = VAR_4;
   GLuint VAR_13;

   FUNC_0(VAR_8->Transform.AnyClip);

   for (VAR_13=0;VAR_13<VAR_7;VAR_13++) {
      if (VAR_8->Transform.ClipEnabled[VAR_13]) {
         GLfloat VAR_14 = VAR_8->Transform.ClipEquation[VAR_13][0];
         GLfloat VAR_15 = VAR_8->Transform.ClipEquation[VAR_13][1];
         GLfloat VAR_16 = VAR_8->Transform.ClipEquation[VAR_13][2];
         GLfloat VAR_17 = VAR_8->Transform.ClipEquation[VAR_13][3];
         GLboolean VAR_18 = VAR_5;
         GLuint VAR_19;
         for (VAR_19=0;VAR_19<VAR_9;VAR_19++) {
            GLfloat VAR_20 = VAR_10[VAR_19][0] * VAR_14 + VAR_10[VAR_19][1] * VAR_15
                        + VAR_10[VAR_19][2] * VAR_16 + VAR_10[VAR_19][3] * VAR_17;
            if (VAR_20 < VAR_6) {

               VAR_11[VAR_19] = VAR_3;
               VAR_12 = VAR_5;
            }
            else {

               VAR_18 = VAR_4;
            }
         }
         if (VAR_18) {
            return VAR_0;
         }
      }
   }

   return VAR_12 ? VAR_2 : VAR_1;
}
