
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct gl_texture_object {void* Dirty; struct gl_texture_object* Next; } ;
struct TYPE_6__ {int Enabled; void* AnyDirty; int * Current; int * Current1D; int * Current2D; } ;
struct TYPE_7__ {TYPE_2__ Texture; TYPE_1__* Shared; } ;
struct TYPE_5__ {struct gl_texture_object* TexObjectList; } ;
typedef TYPE_3__ GLcontext ;


 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct gl_texture_object*) ;
 int FUNC_1 (struct gl_texture_object*) ;

void FUNC_2( GLcontext *VAR_3 )
{
   struct gl_texture_object *VAR_4;

   if (VAR_3->Texture.Enabled & VAR_2)
      VAR_3->Texture.Current = VAR_3->Texture.Current2D;
   else if (VAR_3->Texture.Enabled & VAR_1)
      VAR_3->Texture.Current = VAR_3->Texture.Current1D;
   else
      VAR_3->Texture.Current = ((void*)0);

   if (VAR_3->Texture.AnyDirty) {
      for (VAR_4 = VAR_3->Shared->TexObjectList; VAR_4; VAR_4 = VAR_4->Next) {
         if (VAR_4->Dirty) {
            FUNC_1(VAR_4);
            FUNC_0(VAR_4);
            VAR_4->Dirty = VAR_0;
         }
      }
      VAR_3->Texture.AnyDirty = VAR_0;
   }
}
