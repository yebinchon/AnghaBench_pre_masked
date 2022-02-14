
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int GLubyte ;
typedef int GLint ;
typedef int GLchan ;


 int VAR_0 ;

__attribute__((used)) static void FUNC_0( GLubyte VAR_1[4][4][4], const GLchan *VAR_2,
                         GLint VAR_3, GLint VAR_4, GLint VAR_5, GLint VAR_6)
{
   GLubyte VAR_7, VAR_8, VAR_9;
   const GLchan *VAR_10;
   for (VAR_8 = 0; VAR_8 < VAR_5; VAR_8++) {
      VAR_10 = VAR_2 + VAR_8 * VAR_3 * VAR_6;
      for (VAR_7 = 0; VAR_7 < VAR_4; VAR_7++) {
         for (VAR_9 = 0; VAR_9 < VAR_6; VAR_9++) {
            VAR_1[VAR_8][VAR_7][VAR_9] = *VAR_10++ / (VAR_0 / 255);
         }
      }
   }
}
