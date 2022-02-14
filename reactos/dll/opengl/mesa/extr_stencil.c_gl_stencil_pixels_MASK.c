
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int Function; int Ref; int ValueMask; int FailFunc; } ;
struct TYPE_7__ {TYPE_1__ Stencil; } ;
typedef size_t GLuint ;
typedef int GLubyte ;
typedef int GLstencil ;
typedef int GLint ;
typedef TYPE_2__ GLcontext ;
 int VAR_0 ;
 int* FUNC_0 (int const,int const) ;
 int FUNC_1 (TYPE_2__*,size_t,int const*,int const*,int ,int*) ;
 int FUNC_2 (TYPE_2__*,char*) ;

GLint FUNC_3( GLcontext *VAR_1,
                         GLuint VAR_2, const GLint VAR_3[], const GLint VAR_4[],
    GLubyte VAR_5[] )
{
   GLubyte VAR_6[VAR_0];
   GLstencil VAR_7, VAR_8;
   GLuint VAR_9;
   GLint VAR_10 = 0;
   switch (VAR_1->Stencil.Function) {
      case 129:

         for (VAR_9=0;VAR_9<VAR_2;VAR_9++) {
     if (VAR_5[VAR_9]) {
        VAR_5[VAR_9] = 0;
        VAR_6[VAR_9] = 1;
     }
     else {
        VAR_6[VAR_9] = 0;
     }
  }
  VAR_10 = 1;
  break;
      case 130:
  VAR_7 = VAR_1->Stencil.Ref & VAR_1->Stencil.ValueMask;
  for (VAR_9=0;VAR_9<VAR_2;VAR_9++) {
     if (VAR_5[VAR_9]) {
               GLstencil *VAR_11 = FUNC_0(VAR_3[VAR_9],VAR_4[VAR_9]);
        VAR_8 = *VAR_11 & VAR_1->Stencil.ValueMask;
        if (VAR_7 < VAR_8) {

    VAR_6[VAR_9] = 0;
        }
        else {
    VAR_6[VAR_9] = 1;
    VAR_5[VAR_9] = 0;
        }
     }
     else {
        VAR_6[VAR_9] = 0;
     }
  }
  break;
      case 131:
  VAR_7 = VAR_1->Stencil.Ref & VAR_1->Stencil.ValueMask;
  for (VAR_9=0;VAR_9<VAR_2;VAR_9++) {
     if (VAR_5[VAR_9]) {
               GLstencil *VAR_12 = FUNC_0(VAR_3[VAR_9],VAR_4[VAR_9]);
        VAR_8 = *VAR_12 & VAR_1->Stencil.ValueMask;
        if (VAR_7 <= VAR_8) {

    VAR_6[VAR_9] = 0;
        }
        else {
    VAR_6[VAR_9] = 1;
    VAR_5[VAR_9] = 0;
        }
     }
     else {
        VAR_6[VAR_9] = 0;
     }
  }
  break;
      case 132:
  VAR_7 = VAR_1->Stencil.Ref & VAR_1->Stencil.ValueMask;
  for (VAR_9=0;VAR_9<VAR_2;VAR_9++) {
     if (VAR_5[VAR_9]) {
               GLstencil *VAR_13 = FUNC_0(VAR_3[VAR_9],VAR_4[VAR_9]);
        VAR_8 = *VAR_13 & VAR_1->Stencil.ValueMask;
        if (VAR_7 > VAR_8) {

    VAR_6[VAR_9] = 0;
        }
        else {
    VAR_6[VAR_9] = 1;
    VAR_5[VAR_9] = 0;
        }
     }
     else {
        VAR_6[VAR_9] = 0;
     }
  }
  break;
      case 133:
  VAR_7 = VAR_1->Stencil.Ref & VAR_1->Stencil.ValueMask;
  for (VAR_9=0;VAR_9<VAR_2;VAR_9++) {
     if (VAR_5[VAR_9]) {
               GLstencil *VAR_14 = FUNC_0(VAR_3[VAR_9],VAR_4[VAR_9]);
        VAR_8 = *VAR_14 & VAR_1->Stencil.ValueMask;
        if (VAR_7 >= VAR_8) {

    VAR_6[VAR_9] = 0;
        }
        else {
    VAR_6[VAR_9] = 1;
    VAR_5[VAR_9] = 0;
        }
     }
     else {
        VAR_6[VAR_9] = 0;
     }
  }
  break;
      case 134:
  VAR_7 = VAR_1->Stencil.Ref & VAR_1->Stencil.ValueMask;
  for (VAR_9=0;VAR_9<VAR_2;VAR_9++) {
     if (VAR_5[VAR_9]) {
               GLstencil *VAR_15 = FUNC_0(VAR_3[VAR_9],VAR_4[VAR_9]);
        VAR_8 = *VAR_15 & VAR_1->Stencil.ValueMask;
        if (VAR_7 == VAR_8) {

    VAR_6[VAR_9] = 0;
        }
        else {
    VAR_6[VAR_9] = 1;
    VAR_5[VAR_9] = 0;
        }
     }
     else {
        VAR_6[VAR_9] = 0;
     }
  }
  break;
      case 128:
  VAR_7 = VAR_1->Stencil.Ref & VAR_1->Stencil.ValueMask;
  for (VAR_9=0;VAR_9<VAR_2;VAR_9++) {
     if (VAR_5[VAR_9]) {
               GLstencil *VAR_16 = FUNC_0(VAR_3[VAR_9],VAR_4[VAR_9]);
        VAR_8 = *VAR_16 & VAR_1->Stencil.ValueMask;
        if (VAR_7 != VAR_8) {

    VAR_6[VAR_9] = 0;
        }
        else {
    VAR_6[VAR_9] = 1;
    VAR_5[VAR_9] = 0;
        }
     }
     else {
        VAR_6[VAR_9] = 0;
     }
  }
  break;
      case 135:

  for (VAR_9=0;VAR_9<VAR_2;VAR_9++) {
     VAR_6[VAR_9] = 0;
  }
  break;
      default:
         FUNC_2(VAR_1, "Bad stencil func in gl_stencil_pixels");
         return 0;
   }

   FUNC_1( VAR_1, VAR_2, VAR_3, VAR_4, VAR_1->Stencil.FailFunc, VAR_6 );

   return (VAR_10) ? 0 : 1;
}
