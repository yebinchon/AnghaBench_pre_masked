
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* Shared; } ;
struct TYPE_4__ {int DisplayList; } ;
typedef scalar_t__ GLuint ;
typedef TYPE_2__ GLcontext ;
typedef int GLboolean ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,scalar_t__) ;

GLboolean FUNC_1( GLcontext *VAR_2, GLuint VAR_3 )
{
   if (VAR_3 > 0 && FUNC_0(VAR_2->Shared->DisplayList, VAR_3)) {
      return VAR_1;
   }
   else {
      return VAR_0;
   }
}
