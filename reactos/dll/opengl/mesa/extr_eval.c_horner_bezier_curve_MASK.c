
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int GLuint ;
typedef double GLfloat ;



__attribute__((used)) static void
FUNC_0(GLfloat *VAR_0, GLfloat *VAR_1, GLfloat VAR_2,
                    GLuint VAR_3, GLuint VAR_4)
{
  GLfloat VAR_5, VAR_6;
  GLuint VAR_7, VAR_8, VAR_9;

  if(VAR_4 >= 2)
  {
    VAR_9 = VAR_4-1;
    VAR_5 = 1.0-VAR_2;

    for(VAR_8=0; VAR_8<VAR_3; VAR_8++)
      VAR_1[VAR_8] = VAR_5*VAR_0[VAR_8] + VAR_9*VAR_2*VAR_0[VAR_3+VAR_8];

    for(VAR_7=2, VAR_0+=2*VAR_3, VAR_6=VAR_2*VAR_2; VAR_7<VAR_4; VAR_7++, VAR_6*=VAR_2, VAR_0 +=VAR_3)
    {
      VAR_9 *= VAR_4-VAR_7;
      VAR_9 /= VAR_7;

      for(VAR_8=0; VAR_8<VAR_3; VAR_8++)
        VAR_1[VAR_8] = VAR_5*VAR_1[VAR_8] + VAR_9*VAR_6*VAR_0[VAR_8];
    }
  }
  else
  {
    for(VAR_8=0; VAR_8<VAR_3; VAR_8++)
      VAR_1[VAR_8] = VAR_0[VAR_8];
  }
}
