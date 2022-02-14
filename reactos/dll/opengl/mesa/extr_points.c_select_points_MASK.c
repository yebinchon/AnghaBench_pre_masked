
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct vertex_buffer {scalar_t__* ClipMask; int** Win; } ;
struct TYPE_4__ {struct vertex_buffer* VB; } ;
typedef size_t GLuint ;
typedef TYPE_1__ GLcontext ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int) ;

__attribute__((used)) static void FUNC_1( GLcontext *VAR_1, GLuint VAR_2, GLuint VAR_3 )
{
   struct vertex_buffer *VAR_4 = VAR_1->VB;
   GLuint VAR_5;

   for (VAR_5=VAR_2;VAR_5<=VAR_3;VAR_5++) {
      if (VAR_4->ClipMask[VAR_5]==0) {
         FUNC_0( VAR_1, VAR_4->Win[VAR_5][2] / VAR_0 );
      }
   }
}
