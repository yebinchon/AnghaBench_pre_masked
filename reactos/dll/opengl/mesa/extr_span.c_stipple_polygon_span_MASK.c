
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t* PolygonStipple; } ;
typedef size_t GLuint ;
typedef scalar_t__ GLubyte ;
typedef int GLint ;
typedef TYPE_1__ GLcontext ;



__attribute__((used)) static void FUNC_0( GLcontext *VAR_0,
                                  GLuint VAR_1, GLint VAR_2, GLint VAR_3, GLubyte VAR_4[] )
{
   register GLuint VAR_5, VAR_6, VAR_7, VAR_8=0x80000000;

   VAR_7 = VAR_0->PolygonStipple[VAR_3 % 32];
   VAR_6 = VAR_8 >> (GLuint) (VAR_2 % 32);

   for (VAR_5=0;VAR_5<VAR_1;VAR_5++) {
      if ((VAR_6 & VAR_7)==0) {
  VAR_4[VAR_5] = 0;
      }
      VAR_6 = VAR_6 >> 1;
      if (VAR_6==0) {
  VAR_6 = 0x80000000;
      }
   }
}
