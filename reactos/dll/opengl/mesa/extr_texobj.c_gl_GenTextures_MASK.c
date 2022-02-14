
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct gl_texture_object {int dummy; } ;
struct TYPE_7__ {int TexObjects; } ;
struct TYPE_6__ {TYPE_3__* Shared; } ;
typedef size_t GLuint ;
typedef size_t GLsizei ;
typedef TYPE_1__ GLcontext ;


 int VAR_0 ;
 int VAR_1 ;
 size_t FUNC_0 (int ,size_t) ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 struct gl_texture_object* FUNC_2 (TYPE_3__*,size_t,size_t) ;
 int FUNC_3 (TYPE_1__*,int ,char*) ;

void FUNC_4( GLcontext *VAR_2, GLsizei VAR_3, GLuint *VAR_4 )
{
   GLuint VAR_5, VAR_6;

   if (FUNC_1(VAR_2)) {
      FUNC_3( VAR_2, VAR_0, "glGenTextures" );
      return;
   }
   if (VAR_3<0) {
      FUNC_3( VAR_2, VAR_1, "glGenTextures" );
      return;
   }

   VAR_5 = FUNC_0(VAR_2->Shared->TexObjects, VAR_3);


   for (VAR_6=0;VAR_6<VAR_3;VAR_6++) {
      VAR_4[VAR_6] = VAR_5 + VAR_6;
   }


   for (VAR_6=0;VAR_6<VAR_3;VAR_6++) {
      GLuint VAR_7 = VAR_5 + VAR_6;
      GLuint VAR_8 = 0;
      struct gl_texture_object *VAR_9 = FUNC_2(VAR_2->Shared, VAR_7, VAR_8);
      (void)VAR_9;
   }
}
