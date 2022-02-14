
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int GLvoid ;
typedef int GLuint ;
typedef int GLsizeiptr ;
typedef int GLenum ;


 int FUNC_0 (int ,int ,int const*,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int,int *) ;
 int FUNC_3 (char*) ;

bool FUNC_4(GLenum VAR_0, GLuint *VAR_1, GLsizeiptr VAR_2,
        const GLvoid *VAR_3, GLenum VAR_4)
{
 bool VAR_5;
 if (!FUNC_2(1, VAR_1))
  return 0;
 if (!FUNC_1(VAR_0, *VAR_1))
  return 0;

 FUNC_0(VAR_0, VAR_2, VAR_3, VAR_4);
 VAR_5 = FUNC_3("glBufferData");

 FUNC_1(VAR_0, 0);
 return VAR_5;
}
