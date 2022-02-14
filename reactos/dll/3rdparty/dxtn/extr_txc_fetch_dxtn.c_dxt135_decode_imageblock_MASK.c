
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int GLvoid ;
typedef int GLushort ;
typedef int GLuint ;
typedef int GLubyte ;
typedef int GLint ;
typedef int GLchan ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int const) ;
 int FUNC_1 (int const) ;
 int FUNC_2 (int const) ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 int FUNC_3 (int) ;

__attribute__((used)) static void FUNC_4 ( const GLubyte *VAR_5,
                         GLint VAR_6, GLint VAR_7, GLuint VAR_8, GLvoid *VAR_9 ) {
   GLchan *VAR_10 = (GLchan *) VAR_9;
   const GLushort VAR_11 = VAR_5[0] | (VAR_5[1] << 8);
   const GLushort VAR_12 = VAR_5[2] | (VAR_5[3] << 8);
   const GLuint VAR_13 = VAR_5[4] | (VAR_5[5] << 8) |
      (VAR_5[6] << 16) | (VAR_5[7] << 24);

   GLubyte VAR_14 = 2 * (VAR_7 * 4 + VAR_6) ;
   GLubyte VAR_15 = (GLubyte) ((VAR_13 >> VAR_14) & 3);

   VAR_10[VAR_0] = VAR_2;
   switch (VAR_15) {
   case 0:
      VAR_10[VAR_4] = FUNC_3( FUNC_1(VAR_11) );
      VAR_10[VAR_3] = FUNC_3( FUNC_2(VAR_11) );
      VAR_10[VAR_1] = FUNC_3( FUNC_0(VAR_11) );
      break;
   case 1:
      VAR_10[VAR_4] = FUNC_3( FUNC_1(VAR_12) );
      VAR_10[VAR_3] = FUNC_3( FUNC_2(VAR_12) );
      VAR_10[VAR_1] = FUNC_3( FUNC_0(VAR_12) );
      break;
   case 2:
      if ((VAR_8 > 1) || (VAR_11 > VAR_12)) {
         VAR_10[VAR_4] = FUNC_3( ((FUNC_1(VAR_11) * 2 + FUNC_1(VAR_12)) / 3) );
         VAR_10[VAR_3] = FUNC_3( ((FUNC_2(VAR_11) * 2 + FUNC_2(VAR_12)) / 3) );
         VAR_10[VAR_1] = FUNC_3( ((FUNC_0(VAR_11) * 2 + FUNC_0(VAR_12)) / 3) );
      }
      else {
         VAR_10[VAR_4] = FUNC_3( ((FUNC_1(VAR_11) + FUNC_1(VAR_12)) / 2) );
         VAR_10[VAR_3] = FUNC_3( ((FUNC_2(VAR_11) + FUNC_2(VAR_12)) / 2) );
         VAR_10[VAR_1] = FUNC_3( ((FUNC_0(VAR_11) + FUNC_0(VAR_12)) / 2) );
      }
      break;
   case 3:
      if ((VAR_8 > 1) || (VAR_11 > VAR_12)) {
         VAR_10[VAR_4] = FUNC_3( ((FUNC_1(VAR_11) + FUNC_1(VAR_12) * 2) / 3) );
         VAR_10[VAR_3] = FUNC_3( ((FUNC_2(VAR_11) + FUNC_2(VAR_12) * 2) / 3) );
         VAR_10[VAR_1] = FUNC_3( ((FUNC_0(VAR_11) + FUNC_0(VAR_12) * 2) / 3) );
      }
      else {
         VAR_10[VAR_4] = 0;
         VAR_10[VAR_3] = 0;
         VAR_10[VAR_1] = 0;
         if (VAR_8 == 1) VAR_10[VAR_0] = FUNC_3(0);
      }
      break;
   default:

      break;
   }
}
