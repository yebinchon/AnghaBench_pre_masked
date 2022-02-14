
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
 int* FUNC_0 (size_t const,size_t const) ;
 int FUNC_1 (TYPE_2__*,char*) ;

__attribute__((used)) static void FUNC_2( GLcontext *VAR_0,
                                        GLuint VAR_1, const GLint VAR_2[],
            const GLint VAR_3[],
            GLenum VAR_4, GLubyte VAR_5[] )
{
   GLint VAR_6;
   GLstencil VAR_7;
   GLstencil VAR_8, VAR_9;

   VAR_8 = VAR_0->Stencil.WriteMask;
   VAR_9 = ~VAR_0->Stencil.WriteMask;

   VAR_7 = VAR_0->Stencil.Ref;

   switch (VAR_4) {
      case 130:

         break;
      case 128:
  if (VAR_9==0) {
     for (VAR_6=0;VAR_6<VAR_1;VAR_6++) {
        if (VAR_5[VAR_6]) {
                  GLstencil *VAR_10 = FUNC_0( VAR_2[VAR_6], VAR_3[VAR_6] );
                  *VAR_10 = 0;
        }
     }
  }
  else {
     for (VAR_6=0;VAR_6<VAR_1;VAR_6++) {
        if (VAR_5[VAR_6]) {
                  GLstencil *VAR_11 = FUNC_0( VAR_2[VAR_6], VAR_3[VAR_6] );
    *VAR_11 = VAR_9 & *VAR_11;
        }
     }
  }
  break;
      case 129:
  if (VAR_9==0) {
     for (VAR_6=0;VAR_6<VAR_1;VAR_6++) {
        if (VAR_5[VAR_6]) {
                  GLstencil *VAR_12 = FUNC_0( VAR_2[VAR_6], VAR_3[VAR_6] );
                  *VAR_12 = VAR_7;
        }
     }
  }
  else {
     for (VAR_6=0;VAR_6<VAR_1;VAR_6++) {
        if (VAR_5[VAR_6]) {
                  GLstencil *VAR_13 = FUNC_0( VAR_2[VAR_6], VAR_3[VAR_6] );
    *VAR_13 = (VAR_9 & *VAR_13 ) | (VAR_8 & VAR_7);
        }
     }
  }
  break;
      case 132:
  if (VAR_9==0) {
     for (VAR_6=0;VAR_6<VAR_1;VAR_6++) {
        if (VAR_5[VAR_6]) {
                  GLstencil *VAR_14 = FUNC_0( VAR_2[VAR_6], VAR_3[VAR_6] );
    if (*VAR_14 < 0xff) {
       *VAR_14 = *VAR_14 + 1;
    }
        }
     }
  }
  else {
     for (VAR_6=0;VAR_6<VAR_1;VAR_6++) {
        if (VAR_5[VAR_6]) {
                  GLstencil *VAR_15 = FUNC_0( VAR_2[VAR_6], VAR_3[VAR_6] );
    if (*VAR_15<0xff) {
       *VAR_15 = (VAR_9 & *VAR_15) | (VAR_8 & (*VAR_15+1));
    }
        }
     }
  }
  break;
      case 133:
  if (VAR_9==0) {
     for (VAR_6=0;VAR_6<VAR_1;VAR_6++) {
        if (VAR_5[VAR_6]) {
                  GLstencil *VAR_16 = FUNC_0( VAR_2[VAR_6], VAR_3[VAR_6] );
    if (*VAR_16>0) {
       *VAR_16 = *VAR_16 - 1;
    }
        }
     }
  }
  else {
     for (VAR_6=0;VAR_6<VAR_1;VAR_6++) {
        if (VAR_5[VAR_6]) {
                  GLstencil *VAR_17 = FUNC_0( VAR_2[VAR_6], VAR_3[VAR_6] );
    if (*VAR_17>0) {
       *VAR_17 = (VAR_9 & *VAR_17) | (VAR_8 & (*VAR_17-1));
    }
        }
     }
  }
  break;
      case 131:
  if (VAR_9==0) {
     for (VAR_6=0;VAR_6<VAR_1;VAR_6++) {
        if (VAR_5[VAR_6]) {
                  GLstencil *VAR_18 = FUNC_0( VAR_2[VAR_6], VAR_3[VAR_6] );
                  *VAR_18 = ~*VAR_18;
        }
     }
  }
  else {
     for (VAR_6=0;VAR_6<VAR_1;VAR_6++) {
        if (VAR_5[VAR_6]) {
                  GLstencil *VAR_19 = FUNC_0( VAR_2[VAR_6], VAR_3[VAR_6] );
                  *VAR_19 = (VAR_9 & *VAR_19) | (VAR_8 & ~*VAR_19);
        }
     }
  }
  break;
      default:
         FUNC_1(VAR_0, "Bad stencilop in apply_stencil_op_to_pixels");
   }
}
