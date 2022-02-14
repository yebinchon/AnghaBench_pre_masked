
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ GLint ;
typedef scalar_t__ GLfloat ;
typedef int GLenum ;
typedef int GLcontext ;


 int FUNC_0 (int *,int ,int ,scalar_t__*) ;

void FUNC_1( GLcontext *VAR_0, GLenum VAR_1,
                                  GLenum VAR_2, GLfloat *VAR_3 )
{
   GLint VAR_4[10];

   FUNC_0( VAR_0, VAR_1, VAR_2, VAR_4 );
   *VAR_3 = (GLfloat) VAR_4[0];
}
