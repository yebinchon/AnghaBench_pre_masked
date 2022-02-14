
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int GLuint ;
typedef int GLenum ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (int ,int ,size_t,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (void*,void const*,size_t) ;

bool FUNC_5(GLenum VAR_2, GLuint VAR_3, const void *VAR_4, size_t VAR_5)
{
 void *VAR_6;
 bool VAR_7 = 1;

 if (!FUNC_2(VAR_2, VAR_3))
  return 0;



 VAR_6 = FUNC_0(VAR_2, 0, VAR_5,
          VAR_1 | VAR_0);
 VAR_7 = FUNC_3("glMapBufferRange");
 if (VAR_7 && VAR_6) {
  FUNC_4(VAR_6, VAR_4, VAR_5);
  FUNC_1(VAR_2);
 }

 FUNC_2(VAR_2, 0);
 return VAR_7;
}
