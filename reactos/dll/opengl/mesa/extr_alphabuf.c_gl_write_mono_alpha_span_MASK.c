
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t GLuint ;
typedef scalar_t__ GLubyte ;
typedef int GLint ;
typedef int GLcontext ;


 scalar_t__* FUNC_0 (int ,int ) ;

void FUNC_1( GLcontext* VAR_0, GLuint VAR_1, GLint VAR_2, GLint VAR_3,
                               GLubyte VAR_4, GLubyte VAR_5[] )
{
   GLubyte *VAR_6 = FUNC_0( VAR_2, VAR_3 );
   GLuint VAR_7;

   if (VAR_5) {
      for (VAR_7=0;VAR_7<VAR_1;VAR_7++) {
         if (VAR_5[VAR_7]) {
            *VAR_6 = VAR_4;
         }
         VAR_6++;
      }
   }
   else {
      for (VAR_7=0;VAR_7<VAR_1;VAR_7++) {
         *VAR_6++ = VAR_4;
      }
   }
}
