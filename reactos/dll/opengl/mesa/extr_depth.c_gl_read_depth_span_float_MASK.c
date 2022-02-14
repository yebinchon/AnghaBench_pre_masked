
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* Buffer; } ;
struct TYPE_5__ {scalar_t__ Depth; } ;
typedef size_t GLuint ;
typedef int GLint ;
typedef float GLfloat ;
typedef scalar_t__ GLdepth ;
typedef TYPE_2__ GLcontext ;


 float VAR_0 ;
 scalar_t__* FUNC_0 (TYPE_2__*,int ,int ) ;

void FUNC_1( GLcontext* VAR_1,
                               GLuint VAR_2, GLint VAR_3, GLint VAR_4, GLfloat VAR_5[] )
{
   GLdepth *VAR_6;
   GLfloat VAR_7;
   GLuint VAR_8;

   VAR_7 = 1.0F / VAR_0;

   if (VAR_1->Buffer->Depth) {
      VAR_6 = FUNC_0( VAR_1, VAR_3, VAR_4 );
      for (VAR_8=0;VAR_8<VAR_2;VAR_8++) {
  VAR_5[VAR_8] = (GLfloat) VAR_6[VAR_8] * VAR_7;
      }
   }
   else {
      for (VAR_8=0;VAR_8<VAR_2;VAR_8++) {
  VAR_5[VAR_8] = 0.0F;
      }
   }
}
