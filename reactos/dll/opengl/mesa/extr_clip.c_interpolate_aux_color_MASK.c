
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct vertex_buffer {void*** Fcolor; } ;
struct TYPE_3__ {struct vertex_buffer* VB; } ;
typedef size_t GLuint ;
typedef int GLfloat ;
typedef TYPE_1__ GLcontext ;


 void* FUNC_0 (int ,void*,void*) ;

void FUNC_1( GLcontext* VAR_0, GLuint VAR_1,
       GLuint VAR_2, GLfloat VAR_3, GLuint VAR_4, GLuint VAR_5 )
{
   struct vertex_buffer* VAR_6 = VAR_0->VB;

   VAR_6->Fcolor[VAR_2][0] = FUNC_0( VAR_3, VAR_6->Fcolor[VAR_4][0], VAR_6->Fcolor[VAR_5][0] );
   VAR_6->Fcolor[VAR_2][1] = FUNC_0( VAR_3, VAR_6->Fcolor[VAR_4][1], VAR_6->Fcolor[VAR_5][1] );
   VAR_6->Fcolor[VAR_2][2] = FUNC_0( VAR_3, VAR_6->Fcolor[VAR_4][2], VAR_6->Fcolor[VAR_5][2] );
   VAR_6->Fcolor[VAR_2][3] = FUNC_0( VAR_3, VAR_6->Fcolor[VAR_4][3], VAR_6->Fcolor[VAR_5][3] );
}
