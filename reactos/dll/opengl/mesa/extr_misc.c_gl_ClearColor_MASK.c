
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_11__ {int (* ClearColor ) (TYPE_4__*,int ,int ,int ,int ) ;} ;
struct TYPE_9__ {int* ClearColor; } ;
struct TYPE_12__ {TYPE_3__ Driver; TYPE_2__* Visual; TYPE_1__ Color; } ;
struct TYPE_10__ {int RedScale; int GreenScale; int BlueScale; int AlphaScale; scalar_t__ RGBAflag; } ;
typedef int GLubyte ;
typedef int GLint ;
typedef TYPE_4__ GLcontext ;
typedef int GLclampf ;


 void* FUNC_0 (int ,float,float) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (TYPE_4__*,int ,char*) ;
 int FUNC_3 (TYPE_4__*,int ,int ,int ,int ) ;

void FUNC_4( GLcontext *VAR_1, GLclampf VAR_2, GLclampf VAR_3,
                    GLclampf VAR_4, GLclampf VAR_5 )
{
   if (FUNC_1(VAR_1)) {
      FUNC_2( VAR_1, VAR_0, "glClearColor" );
      return;
   }

   VAR_1->Color.ClearColor[0] = FUNC_0( VAR_2, 0.0F, 1.0F );
   VAR_1->Color.ClearColor[1] = FUNC_0( VAR_3, 0.0F, 1.0F );
   VAR_1->Color.ClearColor[2] = FUNC_0( VAR_4, 0.0F, 1.0F );
   VAR_1->Color.ClearColor[3] = FUNC_0( VAR_5, 0.0F, 1.0F );

   if (VAR_1->Visual->RGBAflag) {
      GLubyte VAR_6 = (GLint) (VAR_1->Color.ClearColor[0] * VAR_1->Visual->RedScale);
      GLubyte VAR_7 = (GLint) (VAR_1->Color.ClearColor[1] * VAR_1->Visual->GreenScale);
      GLubyte VAR_8 = (GLint) (VAR_1->Color.ClearColor[2] * VAR_1->Visual->BlueScale);
      GLubyte VAR_9 = (GLint) (VAR_1->Color.ClearColor[3] * VAR_1->Visual->AlphaScale);
      (*VAR_1->Driver.ClearColor)( VAR_1, VAR_6, VAR_7, VAR_8, VAR_9 );
   }
}
