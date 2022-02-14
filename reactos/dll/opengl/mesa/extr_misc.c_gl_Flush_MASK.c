
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int (* Flush ) (TYPE_2__*) ;} ;
struct TYPE_8__ {TYPE_1__ Driver; } ;
typedef TYPE_2__ GLcontext ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*,int ,char*) ;
 int FUNC_2 (TYPE_2__*) ;

void FUNC_3( GLcontext *VAR_1 )
{

   if (FUNC_0(VAR_1)) {
      FUNC_1( VAR_1, VAR_0, "glFlush" );
      return;
   }
   if (VAR_1->Driver.Flush) {
      (*VAR_1->Driver.Flush)( VAR_1 );
   }
}
