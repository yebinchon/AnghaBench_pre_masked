
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * data; void* e; void* i; } ;
typedef TYPE_1__ Node ;
typedef int GLvoid ;
typedef scalar_t__ GLsizei ;
typedef void* GLint ;
typedef void* GLenum ;
typedef int GLcontext ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (int *,int ,int) ;

void FUNC_1( GLcontext *VAR_1, GLsizei VAR_2, GLsizei VAR_3,
                         GLenum VAR_4, GLenum VAR_5, const GLvoid *VAR_6 )
{
   Node *VAR_7 = FUNC_0( VAR_1, VAR_0, 5 );
   if (VAR_7) {
      VAR_7[1].i = (GLint) VAR_2;
      VAR_7[2].i = (GLint) VAR_3;
      VAR_7[3].e = VAR_4;
      VAR_7[4].e = VAR_5;
      VAR_7[5].data = (GLvoid *) VAR_6;
   }





}
