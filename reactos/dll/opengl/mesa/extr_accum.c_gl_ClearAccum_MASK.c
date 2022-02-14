
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {void** ClearColor; } ;
struct TYPE_7__ {TYPE_1__ Accum; } ;
typedef int GLfloat ;
typedef TYPE_2__ GLcontext ;


 void* FUNC_0 (int ,double,double) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*,int ,char*) ;

void FUNC_3( GLcontext *VAR_1,
                    GLfloat VAR_2, GLfloat VAR_3, GLfloat VAR_4, GLfloat VAR_5 )
{
   if (FUNC_1(VAR_1)) {
      FUNC_2( VAR_1, VAR_0, "glAccum" );
      return;
   }
   VAR_1->Accum.ClearColor[0] = FUNC_0( VAR_2, -1.0, 1.0 );
   VAR_1->Accum.ClearColor[1] = FUNC_0( VAR_3, -1.0, 1.0 );
   VAR_1->Accum.ClearColor[2] = FUNC_0( VAR_4, -1.0, 1.0 );
   VAR_1->Accum.ClearColor[3] = FUNC_0( VAR_5, -1.0, 1.0 );
}
