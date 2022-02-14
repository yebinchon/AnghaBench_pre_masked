
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct vertex_buffer {size_t* Findex; size_t* Bindex; void*** TexCoord; void*** Eye; void*** Bcolor; void*** Fcolor; } ;
struct TYPE_3__ {int ClipMask; struct vertex_buffer* VB; } ;
typedef size_t GLuint ;
typedef scalar_t__ GLint ;
typedef void* GLfloat ;
typedef TYPE_1__ GLcontext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 void* FUNC_0 (void*,void*,void*) ;

void FUNC_1( GLcontext* VAR_6, GLuint VAR_7,
                      GLuint VAR_8, GLfloat VAR_9, GLuint VAR_10, GLuint VAR_11 )
{
   struct vertex_buffer* VAR_12 = VAR_6->VB;

   if (VAR_6->ClipMask & VAR_2) {
      VAR_12->Fcolor[VAR_8][0] = FUNC_0( VAR_9, VAR_12->Fcolor[VAR_10][0], VAR_12->Fcolor[VAR_11][0] );
      VAR_12->Fcolor[VAR_8][1] = FUNC_0( VAR_9, VAR_12->Fcolor[VAR_10][1], VAR_12->Fcolor[VAR_11][1] );
      VAR_12->Fcolor[VAR_8][2] = FUNC_0( VAR_9, VAR_12->Fcolor[VAR_10][2], VAR_12->Fcolor[VAR_11][2] );
      VAR_12->Fcolor[VAR_8][3] = FUNC_0( VAR_9, VAR_12->Fcolor[VAR_10][3], VAR_12->Fcolor[VAR_11][3] );
   }
   else if (VAR_6->ClipMask & VAR_3) {
      VAR_12->Findex[VAR_8] = (GLuint) (GLint) FUNC_0( VAR_9, (GLfloat) VAR_12->Findex[VAR_10],
                                                 (GLfloat) VAR_12->Findex[VAR_11] );
   }

   if (VAR_6->ClipMask & VAR_0) {
      VAR_12->Bcolor[VAR_8][0] = FUNC_0( VAR_9, VAR_12->Bcolor[VAR_10][0], VAR_12->Bcolor[VAR_11][0] );
      VAR_12->Bcolor[VAR_8][1] = FUNC_0( VAR_9, VAR_12->Bcolor[VAR_10][1], VAR_12->Bcolor[VAR_11][1] );
      VAR_12->Bcolor[VAR_8][2] = FUNC_0( VAR_9, VAR_12->Bcolor[VAR_10][2], VAR_12->Bcolor[VAR_11][2] );
      VAR_12->Bcolor[VAR_8][3] = FUNC_0( VAR_9, VAR_12->Bcolor[VAR_10][3], VAR_12->Bcolor[VAR_11][3] );
   }
   else if (VAR_6->ClipMask & VAR_1) {
      VAR_12->Bindex[VAR_8] = (GLuint) (GLint) FUNC_0( VAR_9, (GLfloat) VAR_12->Bindex[VAR_10],
                                                 (GLfloat) VAR_12->Bindex[VAR_11] );
   }

   if (VAR_6->ClipMask & VAR_5) {

      if (VAR_7==VAR_4) {

  VAR_12->Eye[VAR_8][2] = FUNC_0( VAR_9, VAR_12->Eye[VAR_10][2], VAR_12->Eye[VAR_11][2] );
      }
      VAR_12->TexCoord[VAR_8][0] = FUNC_0(VAR_9,VAR_12->TexCoord[VAR_10][0],VAR_12->TexCoord[VAR_11][0]);
      VAR_12->TexCoord[VAR_8][1] = FUNC_0(VAR_9,VAR_12->TexCoord[VAR_10][1],VAR_12->TexCoord[VAR_11][1]);
      VAR_12->TexCoord[VAR_8][2] = FUNC_0(VAR_9,VAR_12->TexCoord[VAR_10][2],VAR_12->TexCoord[VAR_11][2]);
      VAR_12->TexCoord[VAR_8][3] = FUNC_0(VAR_9,VAR_12->TexCoord[VAR_10][3],VAR_12->TexCoord[VAR_11][3]);
   }

}
