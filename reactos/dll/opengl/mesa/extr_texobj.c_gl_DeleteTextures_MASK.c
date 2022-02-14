
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct gl_texture_object {scalar_t__ RefCount; } ;
struct TYPE_12__ {struct gl_texture_object* Default2D; struct gl_texture_object* Default1D; int TexObjects; } ;
struct TYPE_10__ {int (* DeleteTexture ) (TYPE_3__*,struct gl_texture_object*) ;} ;
struct TYPE_9__ {struct gl_texture_object* Current2D; struct gl_texture_object* Current1D; } ;
struct TYPE_11__ {TYPE_5__* Shared; TYPE_2__ Driver; TYPE_1__ Texture; } ;
typedef size_t GLuint ;
typedef size_t GLsizei ;
typedef TYPE_3__ GLcontext ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,size_t const) ;
 scalar_t__ FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (TYPE_3__*,int ,char*) ;
 int FUNC_4 (TYPE_5__*,struct gl_texture_object*) ;
 int FUNC_5 (TYPE_3__*,struct gl_texture_object*) ;

void FUNC_6( GLcontext *VAR_1, GLsizei VAR_2, const GLuint *VAR_3)
{
   GLuint VAR_4;

   if (FUNC_1(VAR_1)) {
      FUNC_3( VAR_1, VAR_0, "glAreTexturesResident" );
      return;
   }

   for (VAR_4=0;VAR_4<VAR_2;VAR_4++) {
      struct gl_texture_object *VAR_5;
      if (VAR_3[VAR_4]>0) {
         VAR_5 = (struct gl_texture_object *)
            FUNC_0(VAR_1->Shared->TexObjects, VAR_3[VAR_4]);
         if (VAR_5) {
            if (VAR_1->Texture.Current1D==VAR_5) {

               VAR_1->Texture.Current1D = VAR_1->Shared->Default1D;
               VAR_5->RefCount--;
               FUNC_2( VAR_5->RefCount >= 0 );
            }
            else if (VAR_1->Texture.Current2D==VAR_5) {

               VAR_1->Texture.Current2D = VAR_1->Shared->Default2D;
               VAR_5->RefCount--;
               FUNC_2( VAR_5->RefCount >= 0 );
            }


            if (VAR_1->Driver.DeleteTexture) {
               (*VAR_1->Driver.DeleteTexture)( VAR_1, VAR_5 );
            }

            if (VAR_5->RefCount==0) {
               FUNC_4(VAR_1->Shared, VAR_5);
            }
         }
      }
   }
}
