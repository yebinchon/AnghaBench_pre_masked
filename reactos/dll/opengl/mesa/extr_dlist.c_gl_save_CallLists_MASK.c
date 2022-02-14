
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int (* CallLists ) (TYPE_3__*,scalar_t__,int ,int const*) ;} ;
struct TYPE_10__ {TYPE_1__ Exec; scalar_t__ ExecuteFlag; } ;
struct TYPE_9__ {scalar_t__ ui; } ;
typedef TYPE_2__ Node ;
typedef int GLvoid ;
typedef scalar_t__ GLuint ;
typedef scalar_t__ GLsizei ;
typedef int GLenum ;
typedef TYPE_3__ GLcontext ;


 int VAR_0 ;
 TYPE_2__* FUNC_0 (TYPE_3__*,int ,int) ;
 int FUNC_1 (TYPE_3__*,scalar_t__,int ,int const*) ;
 scalar_t__ FUNC_2 (scalar_t__,int ,int const*) ;

void FUNC_3( GLcontext *VAR_1,
                        GLsizei VAR_2, GLenum VAR_3, const GLvoid *VAR_4 )
{
   GLuint VAR_5;

   for (VAR_5=0;VAR_5<VAR_2;VAR_5++) {
      GLuint VAR_6 = FUNC_2( VAR_5, VAR_3, VAR_4 );
      Node *VAR_7 = FUNC_0( VAR_1, VAR_0, 1 );
      if (VAR_7) {
         VAR_7[1].ui = VAR_6;
      }
   }
   if (VAR_1->ExecuteFlag) {
      (*VAR_1->Exec.CallLists)( VAR_1, VAR_2, VAR_3, VAR_4 );
   }
}
