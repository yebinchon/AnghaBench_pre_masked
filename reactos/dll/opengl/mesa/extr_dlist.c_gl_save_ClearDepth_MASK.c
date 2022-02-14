
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int (* ClearDepth ) (TYPE_3__*,scalar_t__) ;} ;
struct TYPE_10__ {TYPE_1__ Exec; scalar_t__ ExecuteFlag; } ;
struct TYPE_9__ {scalar_t__ f; } ;
typedef TYPE_2__ Node ;
typedef scalar_t__ GLfloat ;
typedef TYPE_3__ GLcontext ;
typedef scalar_t__ GLclampd ;


 int VAR_0 ;
 TYPE_2__* FUNC_0 (TYPE_3__*,int ,int) ;
 int FUNC_1 (TYPE_3__*,scalar_t__) ;

void FUNC_2( GLcontext *VAR_1, GLclampd VAR_2 )
{
   Node *VAR_3 = FUNC_0( VAR_1, VAR_0, 1 );
   if (VAR_3) {
      VAR_3[1].f = (GLfloat) VAR_2;
   }
   if (VAR_1->ExecuteFlag) {
      (*VAR_1->Exec.ClearDepth)( VAR_1, VAR_2 );
   }
}
