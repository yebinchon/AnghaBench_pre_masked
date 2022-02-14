
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int (* LightModelfv ) (TYPE_3__*,int ,int const*) ;} ;
struct TYPE_10__ {TYPE_1__ Exec; scalar_t__ ExecuteFlag; } ;
struct TYPE_9__ {int f; int e; } ;
typedef TYPE_2__ Node ;
typedef int GLfloat ;
typedef int GLenum ;
typedef TYPE_3__ GLcontext ;


 int VAR_0 ;
 TYPE_2__* FUNC_0 (TYPE_3__*,int ,int) ;
 int FUNC_1 (TYPE_3__*,int ,int const*) ;

void FUNC_2( GLcontext *VAR_1,
                           GLenum VAR_2, const GLfloat *VAR_3 )
{
   Node *VAR_4 = FUNC_0( VAR_1, VAR_0, 5 );
   if (VAR_4) {
      VAR_4[1].e = VAR_2;
      VAR_4[2].f = VAR_3[0];
      VAR_4[3].f = VAR_3[1];
      VAR_4[4].f = VAR_3[2];
      VAR_4[5].f = VAR_3[3];
   }
   if (VAR_1->ExecuteFlag) {
      (*VAR_1->Exec.LightModelfv)( VAR_1, VAR_2, VAR_3 );
   }
}
