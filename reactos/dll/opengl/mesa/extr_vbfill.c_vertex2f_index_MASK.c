
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct vertex_buffer {size_t Count; int * Edgeflag; int * Findex; int * Obj; } ;
struct TYPE_5__ {int EdgeFlag; int Index; } ;
struct TYPE_6__ {TYPE_1__ Current; struct vertex_buffer* VB; } ;
typedef size_t GLuint ;
typedef int GLfloat ;
typedef TYPE_2__ GLcontext ;


 int FUNC_0 (int ,int ,int ,float) ;
 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_1 (TYPE_2__*,int ) ;

__attribute__((used)) static void FUNC_2( GLcontext *VAR_2, GLfloat VAR_3, GLfloat VAR_4 )
{
   struct vertex_buffer *VAR_5 = VAR_2->VB;
   GLuint VAR_6 = VAR_5->Count;

   FUNC_0( VAR_5->Obj[VAR_6], VAR_3, VAR_4, 0.0F );
   VAR_5->Findex[VAR_6] = VAR_2->Current.Index;
   VAR_5->Edgeflag[VAR_6] = VAR_2->Current.EdgeFlag;

   VAR_6++;
   VAR_5->Count = VAR_6;
   if (VAR_6==VAR_1) {
      FUNC_1( VAR_2, VAR_0 );
   }
}
