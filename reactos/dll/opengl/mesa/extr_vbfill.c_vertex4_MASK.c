
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct vertex_buffer {size_t Count; int VertexSizeMask; int * Edgeflag; int * TexCoord; int * Normal; int * Fcolor; int * Obj; } ;
struct TYPE_5__ {int EdgeFlag; int TexCoord; int Normal; int ByteColor; } ;
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
 int VAR_2 ;
 int FUNC_4 (TYPE_2__*,int ) ;

__attribute__((used)) static void FUNC_5( GLcontext *VAR_3,
                     GLfloat VAR_4, GLfloat VAR_5, GLfloat VAR_6, GLfloat VAR_7 )
{
   struct vertex_buffer *VAR_8 = VAR_3->VB;
   GLuint VAR_9 = VAR_8->Count;

   FUNC_0( VAR_8->Obj[VAR_9], VAR_4, VAR_5, VAR_6, VAR_7 );
   FUNC_2( VAR_8->Fcolor[VAR_9], VAR_3->Current.ByteColor );
   FUNC_1( VAR_8->Normal[VAR_9], VAR_3->Current.Normal );
   FUNC_3( VAR_8->TexCoord[VAR_9], VAR_3->Current.TexCoord );
   VAR_8->Edgeflag[VAR_9] = VAR_3->Current.EdgeFlag;
   VAR_8->VertexSizeMask = VAR_2;

   VAR_9++;
   VAR_8->Count = VAR_9;
   if (VAR_9==VAR_1) {
      FUNC_4( VAR_3, VAR_0 );
   }
}
