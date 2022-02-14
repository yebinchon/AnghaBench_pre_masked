
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int GLvoid ;
typedef int GLuint ;
typedef int GLubyte ;
typedef int GLint ;
typedef scalar_t__ GLchan ;


 size_t VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int const) ;
 int FUNC_1 (int const*,int,int,int,int *) ;

void FUNC_2(GLint VAR_2, const GLubyte *VAR_3,
                         GLint VAR_4, GLint VAR_5, GLvoid *VAR_6) {





   GLchan *VAR_7 = (GLchan *) VAR_6;
   const GLubyte *VAR_8 = (VAR_3 + ((VAR_2 + 3) / 4 * (VAR_5 / 4) + (VAR_4 / 4)) * 16);
   const GLubyte VAR_9 = VAR_8[0];
   const GLubyte VAR_10 = VAR_8[1];
   const GLubyte VAR_11 = ((VAR_5&3) * 4 + (VAR_4&3)) * 3;
   const GLubyte VAR_12 = VAR_8[2 + VAR_11 / 8];
   const GLubyte VAR_13 = VAR_8[3 + VAR_11 / 8];
   const GLubyte VAR_14 = (VAR_12 >> (VAR_11 & 0x7) |
      (VAR_13 << (8 - (VAR_11 & 0x7)))) & 0x7;

   FUNC_1(VAR_8 + 8, (VAR_4&3), (VAR_5&3), 2, VAR_6);
   if (VAR_14 == 0)
      VAR_7[VAR_0] = FUNC_0( VAR_9 );
   else if (VAR_14 == 1)
      VAR_7[VAR_0] = FUNC_0( VAR_10 );
   else if (VAR_9 > VAR_10)
      VAR_7[VAR_0] = FUNC_0( ((VAR_9 * (8 - VAR_14) + (VAR_10 * (VAR_14 - 1))) / 7) );
   else if (VAR_14 < 6)
      VAR_7[VAR_0] = FUNC_0( ((VAR_9 * (6 - VAR_14) + (VAR_10 * (VAR_14 - 1))) / 5) );
   else if (VAR_14 == 6)
      VAR_7[VAR_0] = 0;
   else
      VAR_7[VAR_0] = VAR_1;

}
