
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int GLvoid ;
typedef int GLuint ;
typedef int GLubyte ;
typedef int GLint ;
typedef int GLchan ;


 size_t VAR_0 ;
 scalar_t__ FUNC_0 (int const) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int const*,int,int,int,int *) ;

void FUNC_3(GLint VAR_1, const GLubyte *VAR_2,
                         GLint VAR_3, GLint VAR_4, GLvoid *VAR_5) {





   GLchan *VAR_6 = (GLchan *) VAR_5;
   const GLubyte *VAR_7 = (VAR_2 + ((VAR_1 + 3) / 4 * (VAR_4 / 4) + (VAR_3 / 4)) * 16);
   const GLubyte VAR_8 = (VAR_7[((VAR_4&3) * 4 + (VAR_3&3)) / 2] >> (4 * (VAR_3&1))) & 0xf;
   FUNC_2(VAR_7 + 8, (VAR_3&3), (VAR_4&3), 2, VAR_5);
   VAR_6[VAR_0] = FUNC_1( (GLubyte)(FUNC_0(VAR_8)) );


}
