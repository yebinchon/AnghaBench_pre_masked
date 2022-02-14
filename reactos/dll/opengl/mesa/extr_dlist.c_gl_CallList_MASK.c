
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int CompileFlag; } ;
typedef int GLuint ;
typedef TYPE_1__ GLcontext ;
typedef int GLboolean ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int ) ;

void FUNC_1( GLcontext *VAR_1, GLuint VAR_2 )
{


   GLboolean VAR_3;
   VAR_3 = VAR_1->CompileFlag;
   VAR_1->CompileFlag = VAR_0;
   FUNC_0( VAR_1, VAR_2 );
   VAR_1->CompileFlag = VAR_3;
}
