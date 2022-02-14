
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct gl_texture_object {int dummy; } ;
struct TYPE_7__ {TYPE_1__* Shared; } ;
struct TYPE_6__ {int TexObjects; } ;
typedef scalar_t__ GLuint ;
typedef scalar_t__ GLsizei ;
typedef TYPE_2__ GLcontext ;
typedef int GLboolean ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ,scalar_t__ const) ;
 scalar_t__ FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*,int ,char*) ;

GLboolean FUNC_3( GLcontext *VAR_4, GLsizei VAR_5,
                                  const GLuint *VAR_6,
                                  GLboolean *VAR_7 )
{
   GLboolean VAR_8 = VAR_3;
   GLuint VAR_9;

   if (FUNC_1(VAR_4)) {
      FUNC_2( VAR_4, VAR_1, "glAreTexturesResident" );
      return VAR_0;
   }
   if (VAR_5<0) {
      FUNC_2( VAR_4, VAR_2, "glAreTexturesResident(n)" );
      return VAR_0;
   }

   for (VAR_9=0;VAR_9<VAR_5;VAR_9++) {
      struct gl_texture_object *VAR_10;
      if (VAR_6[VAR_9]==0) {
         FUNC_2( VAR_4, VAR_2, "glAreTexturesResident(textures)" );
         return VAR_0;
      }
      VAR_10 = (struct gl_texture_object *)
         FUNC_0(VAR_4->Shared->TexObjects, VAR_6[VAR_9]);
      if (VAR_10) {

         VAR_7[VAR_9] = VAR_3;
      }
      else {
         FUNC_2( VAR_4, VAR_2, "glAreTexturesResident(textures)" );
         return VAR_0;
      }
   }
   return VAR_8;
}
