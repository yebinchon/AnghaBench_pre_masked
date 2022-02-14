
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {TYPE_1__* Shared; } ;
struct TYPE_6__ {int TexObjects; } ;
typedef scalar_t__ GLuint ;
typedef TYPE_2__ GLcontext ;
typedef int GLboolean ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ,scalar_t__) ;
 scalar_t__ FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*,int ,char*) ;

GLboolean FUNC_3( GLcontext *VAR_3, GLuint VAR_4 )
{
   if (FUNC_1(VAR_3)) {
      FUNC_2( VAR_3, VAR_1, "glIsTextures" );
      return VAR_0;
   }
   if (VAR_4>0 && FUNC_0(VAR_3->Shared->TexObjects, VAR_4)) {
      return VAR_2;
   }
   else {
      return VAR_0;
   }
}
