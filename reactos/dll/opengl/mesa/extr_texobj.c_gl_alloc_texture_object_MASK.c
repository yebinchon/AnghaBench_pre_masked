
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gl_texture_object {int Name; int Dimensions; float MinMagThresh; int* Palette; int PaletteSize; struct gl_texture_object* Next; void* PaletteFormat; void* PaletteIntFormat; int MagFilter; int MinFilter; void* WrapT; void* WrapS; } ;
struct gl_shared_state {int TexObjects; struct gl_texture_object* TexObjectList; } ;
typedef int GLuint ;


 int VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 int FUNC_0 (int ,int,struct gl_texture_object*) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int,int) ;

struct gl_texture_object *
FUNC_3( struct gl_shared_state *VAR_4, GLuint VAR_5,
                         GLuint VAR_6)
{
   struct gl_texture_object *VAR_7;

   FUNC_1(VAR_6 >= 0 && VAR_6 <= 2);

   VAR_7 = (struct gl_texture_object *)
                     FUNC_2(1,sizeof(struct gl_texture_object));
   if (VAR_7) {

      VAR_7->Name = VAR_5;
      VAR_7->Dimensions = VAR_6;
      VAR_7->WrapS = VAR_2;
      VAR_7->WrapT = VAR_2;
      VAR_7->MinFilter = VAR_1;
      VAR_7->MagFilter = VAR_0;
      VAR_7->MinMagThresh = 0.0F;
      VAR_7->Palette[0] = 255;
      VAR_7->Palette[1] = 255;
      VAR_7->Palette[2] = 255;
      VAR_7->Palette[3] = 255;
      VAR_7->PaletteSize = 1;
      VAR_7->PaletteIntFormat = VAR_3;
      VAR_7->PaletteFormat = VAR_3;


      if (VAR_4) {
         VAR_7->Next = VAR_4->TexObjectList;
         VAR_4->TexObjectList = VAR_7;
      }

      if (VAR_5 > 0) {

         FUNC_0(VAR_4->TexObjects, VAR_5, VAR_7);
      }
   }
   return VAR_7;
}
