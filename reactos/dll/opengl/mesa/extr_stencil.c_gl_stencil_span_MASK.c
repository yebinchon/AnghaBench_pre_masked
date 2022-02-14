
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
 int* FUNC_0 (int,int) ;
 int FUNC_1 (TYPE_2__*,size_t,int,int,int ,int*) ;
 int FUNC_2 (TYPE_2__*,char*) ;

GLint FUNC_3( GLcontext *VAR_1,
                       GLuint VAR_2, GLint VAR_3, GLint VAR_4, GLubyte VAR_5[] )
{
   GLubyte VAR_6[VAR_0];
   GLint VAR_7 = 0;
   GLuint VAR_8;
   GLstencil VAR_9, VAR_10;
   GLstencil *VAR_11;

   VAR_11 = FUNC_0( VAR_3, VAR_4 );
   switch (VAR_1->Stencil.Function) {
      case 129:

         for (VAR_8=0;VAR_8<VAR_2;VAR_8++) {
     if (VAR_5[VAR_8]) {
        VAR_5[VAR_8] = 0;
        VAR_6[VAR_8] = 1;
     }
     else {
        VAR_6[VAR_8] = 0;
     }
  }
  VAR_7 = 1;
  break;
      case 130:
  VAR_9 = VAR_1->Stencil.Ref & VAR_1->Stencil.ValueMask;
  for (VAR_8=0;VAR_8<VAR_2;VAR_8++) {
     if (VAR_5[VAR_8]) {
        VAR_10 = VAR_11[VAR_8] & VAR_1->Stencil.ValueMask;
        if (VAR_9 < VAR_10) {

    VAR_6[VAR_8] = 0;
        }
        else {
    VAR_6[VAR_8] = 1;
    VAR_5[VAR_8] = 0;
        }
     }
     else {
        VAR_6[VAR_8] = 0;
     }
  }
  break;
      case 131:
  VAR_9 = VAR_1->Stencil.Ref & VAR_1->Stencil.ValueMask;
  for (VAR_8=0;VAR_8<VAR_2;VAR_8++) {
     if (VAR_5[VAR_8]) {
        VAR_10 = VAR_11[VAR_8] & VAR_1->Stencil.ValueMask;
        if (VAR_9 <= VAR_10) {

    VAR_6[VAR_8] = 0;
        }
        else {
    VAR_6[VAR_8] = 1;
    VAR_5[VAR_8] = 0;
        }
     }
     else {
        VAR_6[VAR_8] = 0;
     }
  }
  break;
      case 132:
  VAR_9 = VAR_1->Stencil.Ref & VAR_1->Stencil.ValueMask;
  for (VAR_8=0;VAR_8<VAR_2;VAR_8++) {
     if (VAR_5[VAR_8]) {
        VAR_10 = VAR_11[VAR_8] & VAR_1->Stencil.ValueMask;
        if (VAR_9 > VAR_10) {

    VAR_6[VAR_8] = 0;
        }
        else {
    VAR_6[VAR_8] = 1;
    VAR_5[VAR_8] = 0;
        }
     }
     else {
        VAR_6[VAR_8] = 0;
     }
  }
  break;
      case 133:
  VAR_9 = VAR_1->Stencil.Ref & VAR_1->Stencil.ValueMask;
  for (VAR_8=0;VAR_8<VAR_2;VAR_8++) {
     if (VAR_5[VAR_8]) {
        VAR_10 = VAR_11[VAR_8] & VAR_1->Stencil.ValueMask;
        if (VAR_9 >= VAR_10) {

    VAR_6[VAR_8] = 0;
        }
        else {
    VAR_6[VAR_8] = 1;
    VAR_5[VAR_8] = 0;
        }
     }
     else {
        VAR_6[VAR_8] = 0;
     }
  }
  break;
      case 134:
  VAR_9 = VAR_1->Stencil.Ref & VAR_1->Stencil.ValueMask;
  for (VAR_8=0;VAR_8<VAR_2;VAR_8++) {
     if (VAR_5[VAR_8]) {
        VAR_10 = VAR_11[VAR_8] & VAR_1->Stencil.ValueMask;
        if (VAR_9 == VAR_10) {

    VAR_6[VAR_8] = 0;
        }
        else {
    VAR_6[VAR_8] = 1;
    VAR_5[VAR_8] = 0;
        }
     }
     else {
        VAR_6[VAR_8] = 0;
     }
  }
  break;
      case 128:
  VAR_9 = VAR_1->Stencil.Ref & VAR_1->Stencil.ValueMask;
  for (VAR_8=0;VAR_8<VAR_2;VAR_8++) {
     if (VAR_5[VAR_8]) {
        VAR_10 = VAR_11[VAR_8] & VAR_1->Stencil.ValueMask;
        if (VAR_9 != VAR_10) {

    VAR_6[VAR_8] = 0;
        }
        else {
    VAR_6[VAR_8] = 1;
    VAR_5[VAR_8] = 0;
        }
     }
     else {
        VAR_6[VAR_8] = 0;
     }
  }
  break;
      case 135:

  for (VAR_8=0;VAR_8<VAR_2;VAR_8++) {
     VAR_6[VAR_8] = 0;
  }
  break;
      default:
         FUNC_2(VAR_1, "Bad stencil func in gl_stencil_span");
         return 0;
   }

   FUNC_1( VAR_1, VAR_2, VAR_3, VAR_4, VAR_1->Stencil.FailFunc, VAR_6 );

   return (VAR_7) ? 0 : 1;
}
