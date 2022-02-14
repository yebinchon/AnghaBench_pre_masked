
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t GLuint ;
typedef int GLubyte ;
typedef int GLint ;
typedef int GLcontext ;


 int * FUNC_0 (int ,int ) ;

void FUNC_1( GLcontext* VAR_0,
                         GLuint VAR_1, GLint VAR_2, GLint VAR_3, GLubyte VAR_4[] )
{
   GLubyte *VAR_5 = FUNC_0( VAR_2, VAR_3 );
   GLuint VAR_6;
   for (VAR_6=0;VAR_6<VAR_1;VAR_6++) {
      VAR_4[VAR_6] = *VAR_5++;
   }
}
