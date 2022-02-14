
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int GLvoid ;
typedef int GLubyte ;
typedef int GLint ;


 int FUNC_0 (int const*,int,int,int,int *) ;

void FUNC_1(GLint VAR_0, const GLubyte *VAR_1,
                         GLint VAR_2, GLint VAR_3, GLvoid *VAR_4)
{




   const GLubyte *VAR_5 = (VAR_1 + ((VAR_0 + 3) / 4 * (VAR_3 / 4) + (VAR_2 / 4)) * 8);
   FUNC_0(VAR_5, (VAR_2&3), (VAR_3&3), 1, VAR_4);
}
