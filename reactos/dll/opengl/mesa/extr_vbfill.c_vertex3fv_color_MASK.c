
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct vertex_buffer {size_t Count; int * Edgeflag; int * Fcolor; int * Obj; } ;
struct TYPE_5__ {int EdgeFlag; int ByteColor; } ;
struct TYPE_6__ {TYPE_1__ Current; struct vertex_buffer* VB; } ;
typedef size_t GLuint ;
typedef int GLfloat ;
typedef TYPE_2__ GLcontext ;


 int FUNC_0 (int ,int const*) ;
 int FUNC_1 (int ,int ) ;
 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_2 (TYPE_2__*,int ) ;

__attribute__((used)) static void FUNC_3( GLcontext *VAR_2, const GLfloat VAR_3[3] )
{
   struct vertex_buffer *VAR_4 = VAR_2->VB;
   GLuint VAR_5 = VAR_4->Count;

   FUNC_0( VAR_4->Obj[VAR_5], VAR_3 );
   FUNC_1( VAR_4->Fcolor[VAR_5], VAR_2->Current.ByteColor );
   VAR_4->Edgeflag[VAR_5] = VAR_2->Current.EdgeFlag;

   VAR_5++;
   VAR_4->Count = VAR_5;
   if (VAR_5==VAR_1) {
      FUNC_2( VAR_2, VAR_0 );
   }
}
