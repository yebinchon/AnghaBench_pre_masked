
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct gl_texture_object {int Priority; } ;
struct TYPE_7__ {TYPE_1__* Shared; } ;
struct TYPE_6__ {int TexObjects; } ;
typedef scalar_t__ GLuint ;
typedef scalar_t__ GLsizei ;
typedef TYPE_2__ GLcontext ;
typedef int GLclampf ;


 int FUNC_0 (int const,float,float) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ,scalar_t__ const) ;
 scalar_t__ FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*,int ,char*) ;

void FUNC_4( GLcontext *VAR_2,
                            GLsizei VAR_3, const GLuint *VAR_4,
                            const GLclampf *VAR_5 )
{
   GLuint VAR_6;

   if (FUNC_2(VAR_2)) {
      FUNC_3( VAR_2, VAR_0, "glAreTexturesResident" );
      return;
   }
   if (VAR_3<0) {
      FUNC_3( VAR_2, VAR_1, "glAreTexturesResident(n)" );
      return;
   }

   for (VAR_6=0;VAR_6<VAR_3;VAR_6++) {
      struct gl_texture_object *VAR_7;
      if (VAR_4[VAR_6]>0) {
         VAR_7 = (struct gl_texture_object *)
            FUNC_1(VAR_2->Shared->TexObjects, VAR_4[VAR_6]);
         if (VAR_7) {
            VAR_7->Priority = FUNC_0( VAR_5[VAR_6], 0.0F, 1.0F );
         }
      }
   }
}
