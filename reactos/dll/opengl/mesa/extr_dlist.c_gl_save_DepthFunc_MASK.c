
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int (* DepthFunc ) (TYPE_3__*,int ) ;} ;
struct TYPE_10__ {TYPE_1__ Exec; scalar_t__ ExecuteFlag; } ;
struct TYPE_9__ {int e; } ;
typedef TYPE_2__ Node ;
typedef int GLenum ;
typedef TYPE_3__ GLcontext ;


 int VAR_0 ;
 TYPE_2__* FUNC_0 (TYPE_3__*,int ,int) ;
 int FUNC_1 (TYPE_3__*,int ) ;

void FUNC_2( GLcontext *VAR_1, GLenum VAR_2 )
{
   Node *VAR_3 = FUNC_0( VAR_1, VAR_0, 1 );
   if (VAR_3) {
      VAR_3[1].e = VAR_2;
   }
   if (VAR_1->ExecuteFlag) {
      (*VAR_1->Exec.DepthFunc)( VAR_1, VAR_2 );
   }
}
