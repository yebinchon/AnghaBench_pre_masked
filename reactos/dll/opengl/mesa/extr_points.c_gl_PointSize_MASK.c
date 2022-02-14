
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {double Size; } ;
struct TYPE_7__ {int NewState; TYPE_1__ Point; } ;
typedef double GLfloat ;
typedef TYPE_2__ GLcontext ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_2__*) ;
 int VAR_2 ;
 int FUNC_1 (TYPE_2__*,int ,char*) ;

void FUNC_2( GLcontext *VAR_3, GLfloat VAR_4 )
{
   if (VAR_4<=0.0) {
      FUNC_1( VAR_3, VAR_1, "glPointSize" );
      return;
   }
   if (FUNC_0(VAR_3)) {
      FUNC_1( VAR_3, VAR_0, "glPointSize" );
      return;
   }
   VAR_3->Point.Size = VAR_4;
   VAR_3->NewState |= VAR_2;
}
