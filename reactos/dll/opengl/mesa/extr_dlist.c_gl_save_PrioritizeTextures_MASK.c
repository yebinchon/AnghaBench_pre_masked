
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int (* PrioritizeTextures ) (TYPE_3__*,size_t,int const*,int const*) ;} ;
struct TYPE_10__ {TYPE_1__ Exec; scalar_t__ ExecuteFlag; } ;
struct TYPE_9__ {int f; int ui; } ;
typedef TYPE_2__ Node ;
typedef int GLuint ;
typedef size_t GLsizei ;
typedef size_t GLint ;
typedef TYPE_3__ GLcontext ;
typedef int GLclampf ;


 int VAR_0 ;
 TYPE_2__* FUNC_0 (TYPE_3__*,int ,int) ;
 int FUNC_1 (TYPE_3__*,size_t,int const*,int const*) ;

void FUNC_2( GLcontext *VAR_1,
                                 GLsizei VAR_2, const GLuint *VAR_3,
                                 const GLclampf *VAR_4 )
{
   GLint VAR_5;

   for (VAR_5=0;VAR_5<VAR_2;VAR_5++) {
      Node *VAR_6 = FUNC_0( VAR_1, VAR_0, 2 );
      if (VAR_6) {
         VAR_6[1].ui = VAR_3[VAR_5];
         VAR_6[2].f = VAR_4[VAR_5];
      }
   }
   if (VAR_1->ExecuteFlag) {
      (*VAR_1->Exec.PrioritizeTextures)( VAR_1, VAR_2, VAR_3, VAR_4 );
   }
}
