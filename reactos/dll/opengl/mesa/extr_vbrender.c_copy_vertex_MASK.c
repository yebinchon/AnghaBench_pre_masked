
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vertex_buffer {int ** Material; int * MaterialMask; int * ClipMask; int * Edgeflag; int * Bindex; int * Findex; int * TexCoord; int * Bcolor; int * Fcolor; int * Win; int * Eye; int * Clip; } ;
typedef size_t GLuint ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static void FUNC_2( struct vertex_buffer *VAR_0, GLuint VAR_1, GLuint VAR_2 )
{
   FUNC_1( VAR_0->Clip[VAR_1], VAR_0->Clip[VAR_2] );
   FUNC_1( VAR_0->Eye[VAR_1], VAR_0->Eye[VAR_2] );
   FUNC_0( VAR_0->Win[VAR_1], VAR_0->Win[VAR_2] );
   FUNC_1( VAR_0->Fcolor[VAR_1], VAR_0->Fcolor[VAR_2] );
   FUNC_1( VAR_0->Bcolor[VAR_1], VAR_0->Bcolor[VAR_2] );
   FUNC_1( VAR_0->TexCoord[VAR_1], VAR_0->TexCoord[VAR_2] );
   VAR_0->Findex[VAR_1] = VAR_0->Findex[VAR_2];
   VAR_0->Bindex[VAR_1] = VAR_0->Bindex[VAR_2];
   VAR_0->Edgeflag[VAR_1] = VAR_0->Edgeflag[VAR_2];
   VAR_0->ClipMask[VAR_1] = VAR_0->ClipMask[VAR_2];
   VAR_0->MaterialMask[VAR_1] = VAR_0->MaterialMask[VAR_2];
   VAR_0->Material[VAR_1][0] = VAR_0->Material[VAR_2][0];
   VAR_0->Material[VAR_1][1] = VAR_0->Material[VAR_2][1];
}
