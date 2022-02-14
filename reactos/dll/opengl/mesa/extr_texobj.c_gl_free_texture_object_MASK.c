
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gl_texture_object {scalar_t__* Image; scalar_t__ Name; struct gl_texture_object* Next; } ;
struct gl_shared_state {int TexObjects; struct gl_texture_object* TexObjectList; } ;
typedef size_t GLuint ;


 int FUNC_0 (int ,scalar_t__) ;
 size_t VAR_0 ;
 int FUNC_1 (struct gl_texture_object*) ;
 int FUNC_2 (struct gl_texture_object*) ;
 int FUNC_3 (scalar_t__) ;

void FUNC_4( struct gl_shared_state *VAR_1,
                             struct gl_texture_object *VAR_2 )
{
   struct gl_texture_object *VAR_3, *VAR_4;

   FUNC_1(VAR_2);


   if (VAR_1) {
      VAR_3 = ((void*)0);
      VAR_4 = VAR_1->TexObjectList;
      while (VAR_4) {
         if (VAR_4==VAR_2) {
            if (VAR_3) {
               VAR_3->Next = VAR_2->Next;
            }
            else {
               VAR_1->TexObjectList = VAR_2->Next;
            }
            break;
         }
         VAR_3 = VAR_4;
         VAR_4 = VAR_4->Next;
      }
   }

   if (VAR_2->Name) {

      FUNC_0(VAR_1->TexObjects, VAR_2->Name);
   }


   {
      GLuint VAR_5;
      for (VAR_5=0;VAR_5<VAR_0;VAR_5++) {
         if (VAR_2->Image[VAR_5]) {
            FUNC_3( VAR_2->Image[VAR_5] );
         }
      }
   }

   FUNC_2( VAR_2 );
}
