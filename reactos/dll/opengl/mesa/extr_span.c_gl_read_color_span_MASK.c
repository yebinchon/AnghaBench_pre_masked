
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int (* ReadColorSpan ) (TYPE_3__*,size_t,scalar_t__,scalar_t__,scalar_t__*,scalar_t__*,scalar_t__*,scalar_t__*) ;} ;
struct TYPE_10__ {int RasterMask; TYPE_2__ Driver; TYPE_1__* Buffer; } ;
struct TYPE_8__ {scalar_t__ Height; scalar_t__ Width; } ;
typedef size_t GLuint ;
typedef scalar_t__ GLubyte ;
typedef scalar_t__ GLint ;
typedef TYPE_3__ GLcontext ;


 int VAR_0 ;
 size_t FUNC_0 (size_t,scalar_t__) ;
 int FUNC_1 (TYPE_3__*,size_t,scalar_t__,scalar_t__,scalar_t__*) ;
 int FUNC_2 (TYPE_3__*,size_t,scalar_t__,scalar_t__,scalar_t__*,scalar_t__*,scalar_t__*,scalar_t__*) ;
 int FUNC_3 (TYPE_3__*,size_t,scalar_t__,scalar_t__,scalar_t__*,scalar_t__*,scalar_t__*,scalar_t__*) ;

void FUNC_4( GLcontext *VAR_1,
                         GLuint VAR_2, GLint VAR_3, GLint VAR_4,
    GLubyte VAR_5[], GLubyte VAR_6[],
    GLubyte VAR_7[], GLubyte VAR_8[] )
{
   register GLuint VAR_9;

   if (VAR_4<0 || VAR_4>=VAR_1->Buffer->Height || VAR_3>=VAR_1->Buffer->Width) {

      for (VAR_9=0;VAR_9<VAR_2;VAR_9++) {
  VAR_5[VAR_9] = VAR_6[VAR_9] = VAR_7[VAR_9] = VAR_8[VAR_9] = 0;
      }
   }
   else {
      if (VAR_3>=0 && VAR_3+VAR_2<=VAR_1->Buffer->Width) {

  (*VAR_1->Driver.ReadColorSpan)( VAR_1, VAR_2, VAR_3, VAR_4, VAR_5, VAR_6, VAR_7, VAR_8 );
         if (VAR_1->RasterMask & VAR_0) {
            FUNC_1( VAR_1, VAR_2, VAR_3, VAR_4, VAR_8 );
         }
      }
      else {
  VAR_9 = 0;
  if (VAR_3<0) {
     while (VAR_3<0 && VAR_2>0) {
        VAR_5[VAR_9] = VAR_6[VAR_9] = VAR_7[VAR_9] = VAR_8[VAR_9] = 0;
        VAR_3++;
        VAR_2--;
        VAR_9++;
     }
  }
  VAR_2 = FUNC_0( VAR_2, VAR_1->Buffer->Width - VAR_3 );
  (*VAR_1->Driver.ReadColorSpan)( VAR_1, VAR_2, VAR_3, VAR_4, VAR_5+VAR_9, VAR_6+VAR_9, VAR_7+VAR_9, VAR_8+VAR_9);
         if (VAR_1->RasterMask & VAR_0) {
            FUNC_1( VAR_1, VAR_2, VAR_3, VAR_4, VAR_8+VAR_9 );
         }
      }
   }
}
