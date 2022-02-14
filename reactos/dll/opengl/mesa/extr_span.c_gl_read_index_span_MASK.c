
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int (* ReadIndexSpan ) (TYPE_3__*,size_t,scalar_t__,scalar_t__,size_t*) ;} ;
struct TYPE_9__ {TYPE_2__ Driver; TYPE_1__* Buffer; } ;
struct TYPE_7__ {scalar_t__ Height; scalar_t__ Width; } ;
typedef size_t GLuint ;
typedef scalar_t__ GLint ;
typedef TYPE_3__ GLcontext ;


 size_t FUNC_0 (size_t,scalar_t__) ;
 int FUNC_1 (TYPE_3__*,size_t,scalar_t__,scalar_t__,size_t*) ;
 int FUNC_2 (TYPE_3__*,size_t,scalar_t__,scalar_t__,size_t*) ;

void FUNC_3( GLcontext *VAR_0,
                         GLuint VAR_1, GLint VAR_2, GLint VAR_3, GLuint VAR_4[] )
{
   register GLuint VAR_5;

   if (VAR_3<0 || VAR_3>=VAR_0->Buffer->Height || VAR_2>=VAR_0->Buffer->Width) {

      for (VAR_5=0;VAR_5<VAR_1;VAR_5++) {
  VAR_4[VAR_5] = 0;
      }
   }
   else {
      if (VAR_2>=0 && VAR_2+VAR_1<=VAR_0->Buffer->Width) {

  (*VAR_0->Driver.ReadIndexSpan)( VAR_0, VAR_1, VAR_2, VAR_3, VAR_4 );
      }
      else {
  VAR_5 = 0;
  if (VAR_2<0) {
     while (VAR_2<0 && VAR_1>0) {
        VAR_4[VAR_5] = 0;
        VAR_2++;
        VAR_1--;
        VAR_5++;
     }
  }
  VAR_1 = FUNC_0( VAR_1, VAR_0->Buffer->Width - VAR_2 );
  (*VAR_0->Driver.ReadIndexSpan)( VAR_0, VAR_1, VAR_2, VAR_3, VAR_4+VAR_5 );
      }
   }
}
