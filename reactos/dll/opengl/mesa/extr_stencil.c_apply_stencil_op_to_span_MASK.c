
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int WriteMask; int Ref; } ;
struct TYPE_6__ {TYPE_1__ Stencil; } ;
typedef size_t GLuint ;
typedef int GLubyte ;
typedef int GLstencil ;
typedef size_t GLint ;
typedef int GLenum ;
typedef TYPE_2__ GLcontext ;
 int* FUNC_0 (size_t,size_t) ;
 int FUNC_1 (TYPE_2__*,char*) ;

__attribute__((used)) static void FUNC_2( GLcontext *VAR_0,
                                      GLuint VAR_1, GLint VAR_2, GLint VAR_3,
          GLenum VAR_4, GLubyte VAR_5[] )
{
   GLint VAR_6;
   GLstencil VAR_7, VAR_8;
   GLstencil VAR_9, VAR_10;
   GLstencil *VAR_11;

   VAR_9 = VAR_0->Stencil.WriteMask;
   VAR_10 = ~VAR_0->Stencil.WriteMask;
   VAR_8 = VAR_0->Stencil.Ref;
   VAR_11 = FUNC_0( VAR_2, VAR_3 );

   switch (VAR_4) {
      case 130:

         break;
      case 128:
  if (VAR_10==0) {
     for (VAR_6=0;VAR_6<VAR_1;VAR_6++) {
        if (VAR_5[VAR_6]) {
    VAR_11[VAR_6] = 0;
        }
     }
  }
  else {
     for (VAR_6=0;VAR_6<VAR_1;VAR_6++) {
        if (VAR_5[VAR_6]) {
    VAR_11[VAR_6] = VAR_11[VAR_6] & VAR_10;
        }
     }
  }
  break;
      case 129:
  if (VAR_10==0) {
     for (VAR_6=0;VAR_6<VAR_1;VAR_6++) {
        if (VAR_5[VAR_6]) {
                  VAR_11[VAR_6] = VAR_8;
        }
     }
  }
  else {
     for (VAR_6=0;VAR_6<VAR_1;VAR_6++) {
        if (VAR_5[VAR_6]) {
    VAR_7 = VAR_11[VAR_6];
    VAR_11[VAR_6] = (VAR_10 & VAR_7 ) | (VAR_9 & VAR_8);
        }
     }
  }
  break;
      case 132:
  if (VAR_10==0) {
     for (VAR_6=0;VAR_6<VAR_1;VAR_6++) {
        if (VAR_5[VAR_6]) {
    VAR_7 = VAR_11[VAR_6];
    if (VAR_7<0xff) {
       VAR_11[VAR_6] = VAR_7+1;
    }
        }
     }
  }
  else {
     for (VAR_6=0;VAR_6<VAR_1;VAR_6++) {
        if (VAR_5[VAR_6]) {

    VAR_7 = VAR_11[VAR_6];
    if (VAR_7<0xff) {
       VAR_11[VAR_6] = (VAR_10 & VAR_7) | (VAR_9 & (VAR_7+1));
    }
        }
     }
  }
  break;
      case 133:
  if (VAR_10==0) {
     for (VAR_6=0;VAR_6<VAR_1;VAR_6++) {
        if (VAR_5[VAR_6]) {
    VAR_7 = VAR_11[VAR_6];
    if (VAR_7>0) {
       VAR_11[VAR_6] = VAR_7-1;
    }
        }
     }
  }
  else {
     for (VAR_6=0;VAR_6<VAR_1;VAR_6++) {
        if (VAR_5[VAR_6]) {

    VAR_7 = VAR_11[VAR_6];
    if (VAR_7>0) {
       VAR_11[VAR_6] = (VAR_10 & VAR_7) | (VAR_9 & (VAR_7-1));
    }
        }
     }
  }
  break;
      case 131:
  if (VAR_10==0) {
     for (VAR_6=0;VAR_6<VAR_1;VAR_6++) {
        if (VAR_5[VAR_6]) {
    VAR_7 = VAR_11[VAR_6];
    VAR_11[VAR_6] = ~VAR_7;
        }
     }
  }
  else {
     for (VAR_6=0;VAR_6<VAR_1;VAR_6++) {
        if (VAR_5[VAR_6]) {
    VAR_7 = VAR_11[VAR_6];
    VAR_11[VAR_6] = (VAR_10 & VAR_7) | (VAR_9 & ~VAR_7);
        }
     }
  }
  break;
      default:
         FUNC_1(VAR_0, "Bad stencilop in apply_stencil_op_to_span");
   }
}
