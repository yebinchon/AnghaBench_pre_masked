
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct vertex_buffer {size_t Count; int * Edgeflag; int * TexCoord; int * Normal; int * Findex; int * Fcolor; int * Obj; } ;
struct TYPE_5__ {int EdgeFlag; int TexCoord; int Normal; int Index; int ByteColor; } ;
struct TYPE_6__ {TYPE_1__ Current; struct vertex_buffer* VB; } ;
typedef size_t GLuint ;
typedef int GLfloat ;
typedef TYPE_2__ GLcontext ;


 int FUNC_0 (int ,int ,int ,int ,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ) ;
 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_4 (TYPE_2__*,int ) ;

__attribute__((used)) static void FUNC_5( GLcontext *VAR_2,
                               GLfloat VAR_3, GLfloat VAR_4, GLfloat VAR_5, GLfloat VAR_6 )
{
   struct vertex_buffer *VAR_7 = VAR_2->VB;
   GLuint VAR_8 = VAR_7->Count;


   FUNC_0( VAR_7->Obj[VAR_8], VAR_3, VAR_4, VAR_5, VAR_6 );


   FUNC_2( VAR_7->Fcolor[VAR_8], VAR_2->Current.ByteColor );


   VAR_7->Findex[VAR_8] = VAR_2->Current.Index;


   FUNC_1( VAR_7->Normal[VAR_8], VAR_2->Current.Normal );


   FUNC_3( VAR_7->TexCoord[VAR_8], VAR_2->Current.TexCoord );


   VAR_7->Edgeflag[VAR_8] = VAR_2->Current.EdgeFlag;

   VAR_8++;
   VAR_7->Count = VAR_8;
   if (VAR_8==VAR_1) {
      FUNC_4( VAR_2, VAR_0 );
   }
}
