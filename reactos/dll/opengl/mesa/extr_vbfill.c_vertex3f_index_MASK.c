
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


 int FUNC_0 (int ,int ,int ,int ) ;
 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_1 (TYPE_2__*,int ) ;

__attribute__((used)) static void FUNC_2( GLcontext *VAR_2, GLfloat VAR_3, GLfloat VAR_4, GLfloat VAR_5 )
{
   struct vertex_buffer *VAR_6 = VAR_2->VB;
   GLuint VAR_7 = VAR_6->Count;

   FUNC_0( VAR_6->Obj[VAR_7], VAR_3, VAR_4, VAR_5 );
   VAR_6->Findex[VAR_7] = VAR_2->Current.Index;
   VAR_6->Edgeflag[VAR_7] = VAR_2->Current.EdgeFlag;

   VAR_7++;
   VAR_6->Count = VAR_7;
   if (VAR_7==VAR_1) {
      FUNC_1( VAR_2, VAR_0 );
   }
}
