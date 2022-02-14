
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int MatrixMode; } ;
struct TYPE_7__ {TYPE_1__ Transform; } ;
typedef int GLenum ;
typedef TYPE_2__ GLcontext ;


 int VAR_0 ;
 int VAR_1 ;



 scalar_t__ FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*,int ,char*) ;

void FUNC_2( GLcontext *VAR_2, GLenum VAR_3 )
{
   if (FUNC_0(VAR_2)) {
      FUNC_1( VAR_2, VAR_1, "glMatrixMode" );
      return;
   }
   switch (VAR_3) {
      case 130:
      case 129:
      case 128:
         VAR_2->Transform.MatrixMode = VAR_3;
         break;
      default:
         FUNC_1( VAR_2, VAR_0, "glMatrixMode" );
   }
}
