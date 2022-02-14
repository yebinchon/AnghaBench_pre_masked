
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int (* PopMatrix ) (TYPE_2__*) ;} ;
struct TYPE_7__ {TYPE_1__ Exec; scalar_t__ ExecuteFlag; } ;
typedef TYPE_2__ GLcontext ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,int ,int ) ;
 int FUNC_1 (TYPE_2__*) ;

void FUNC_2( GLcontext *VAR_1 )
{
   (void) FUNC_0( VAR_1, VAR_0, 0 );
   if (VAR_1->ExecuteFlag) {
      (*VAR_1->Exec.PopMatrix)( VAR_1 );
   }
}
