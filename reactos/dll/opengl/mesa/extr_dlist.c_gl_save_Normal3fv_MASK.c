
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int (* Normal3fv ) (TYPE_3__*,int const*) ;} ;
struct TYPE_10__ {TYPE_1__ Exec; scalar_t__ ExecuteFlag; } ;
struct TYPE_9__ {int f; } ;
typedef TYPE_2__ Node ;
typedef int GLfloat ;
typedef TYPE_3__ GLcontext ;


 int VAR_0 ;
 TYPE_2__* FUNC_0 (TYPE_3__*,int ,int) ;
 int FUNC_1 (TYPE_3__*,int const*) ;

void FUNC_2( GLcontext *VAR_1, const GLfloat VAR_2[3] )
{
   Node *VAR_3 = FUNC_0( VAR_1, VAR_0, 3 );
   if (VAR_3) {
      VAR_3[1].f = VAR_2[0];
      VAR_3[2].f = VAR_2[1];
      VAR_3[3].f = VAR_2[2];
   }
   if (VAR_1->ExecuteFlag) {
      (*VAR_1->Exec.Normal3fv)( VAR_1, VAR_2 );
   }
}
