
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* Buffer; } ;
struct TYPE_4__ {scalar_t__ Height; scalar_t__ Width; } ;
typedef int GLuint ;
typedef scalar_t__ GLubyte ;
typedef scalar_t__ GLint ;
typedef TYPE_2__ GLcontext ;



__attribute__((used)) static GLuint FUNC_0( GLcontext *VAR_0,
                         GLint VAR_1, GLint VAR_2, GLint VAR_3, GLubyte VAR_4[] )
{
   GLint VAR_5;


   if (VAR_3<0 || VAR_3>=VAR_0->Buffer->Height) {
      return 0;
   }


   if (VAR_2>=0 && VAR_2+VAR_1<=VAR_0->Buffer->Width) {

      return 1;
   }
   else if (VAR_2+VAR_1<=0) {

      return 0;
   }
   else if (VAR_2>=VAR_0->Buffer->Width) {

      return 0;
   }
   else {

      for (VAR_5=0;VAR_5<VAR_1;VAR_5++) {
         if (VAR_2+VAR_5<0 || VAR_2+VAR_5>=VAR_0->Buffer->Width) {
            VAR_4[VAR_5] = 0;
         }
      }
      return 1;
   }
}
