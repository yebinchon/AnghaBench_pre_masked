
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_10__ {TYPE_1__** Image; int (* SampleFunc ) (TYPE_4__*,int ,int const*,int const*,int const*,int const*,int *,int *,int *,int *) ;} ;
struct TYPE_8__ {int EnvMode; TYPE_4__* Current; } ;
struct TYPE_9__ {TYPE_2__ Texture; } ;
struct TYPE_7__ {int Format; } ;
typedef int GLuint ;
typedef int GLubyte ;
typedef int GLfloat ;
typedef TYPE_3__ GLcontext ;


 int VAR_0 ;
 int FUNC_0 (TYPE_3__*,int ,int ,int ,int *,int *,int *,int *,int *,int *,int *,int *) ;
 int FUNC_1 (TYPE_4__*,int ,int const*,int const*,int const*,int const*,int *,int *,int *,int *) ;

void FUNC_2( GLcontext *VAR_1, GLuint VAR_2,
                        const GLfloat VAR_3[], const GLfloat VAR_4[],
                        const GLfloat VAR_5[], const GLfloat VAR_6[],
                        GLubyte VAR_7[], GLubyte VAR_8[],
                        GLubyte VAR_9[], GLubyte VAR_10[] )
{
   GLubyte VAR_11[VAR_0];
   GLubyte VAR_12[VAR_0];
   GLubyte VAR_13[VAR_0];
   GLubyte VAR_14[VAR_0];

   if (!VAR_1->Texture.Current || !VAR_1->Texture.Current->SampleFunc)
      return;


   (*VAR_1->Texture.Current->SampleFunc)( VAR_1->Texture.Current, VAR_2,
                                        VAR_3, VAR_4, VAR_5, VAR_6,
                                        VAR_11, VAR_12, VAR_13, VAR_14 );

   FUNC_0( VAR_1, VAR_2,
                  VAR_1->Texture.Current->Image[0]->Format,
                  VAR_1->Texture.EnvMode,
                  VAR_7, VAR_8, VAR_9, VAR_10,
                  VAR_11, VAR_12, VAR_13, VAR_14 );
}
