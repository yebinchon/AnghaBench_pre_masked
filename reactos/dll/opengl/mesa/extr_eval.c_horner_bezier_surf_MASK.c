
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int GLuint ;
typedef double GLfloat ;


 int FUNC_0 (double*,double*,double,int,int) ;

__attribute__((used)) static void
FUNC_1(GLfloat *VAR_0, GLfloat *VAR_1, GLfloat VAR_2, GLfloat VAR_3,
                   GLuint VAR_4, GLuint VAR_5, GLuint VAR_6)
{
  GLfloat *VAR_7 = VAR_0 + VAR_5*VAR_6*VAR_4;
  GLuint VAR_8, VAR_9 = VAR_6*VAR_4;

  if(VAR_6 > VAR_5)
  {
    if(VAR_5 >= 2)
    {
      GLfloat VAR_10, VAR_11;
      GLuint VAR_12, VAR_13, VAR_14;


      for(VAR_12=0; VAR_12<VAR_6; VAR_12++)
      {
        GLfloat *VAR_15 = &VAR_0[VAR_12*VAR_4];



 VAR_14 = VAR_5-1;
 VAR_10 = 1.0-VAR_2;

 for(VAR_13=0; VAR_13<VAR_4; VAR_13++)
   VAR_7[VAR_12*VAR_4+VAR_13] = VAR_10*VAR_15[VAR_13] + VAR_14*VAR_2*VAR_15[VAR_9+VAR_13];

 for(VAR_8=2, VAR_15+=2*VAR_9, VAR_11=VAR_2*VAR_2; VAR_8<VAR_5;
            VAR_8++, VAR_11*=VAR_2, VAR_15 +=VAR_9)
 {
   VAR_14 *= VAR_5-VAR_8;
          VAR_14 /= VAR_8;

   for(VAR_13=0; VAR_13<VAR_4; VAR_13++)
     VAR_7[VAR_12*VAR_4+VAR_13] = VAR_10*VAR_7[VAR_12*VAR_4+VAR_13] + VAR_14*VAR_11*VAR_15[VAR_13];
 }
      }


      FUNC_0(VAR_7, VAR_1, VAR_3, VAR_4, VAR_6);
    }
    else
      FUNC_0(VAR_0, VAR_1, VAR_3, VAR_4, VAR_6);
  }
  else
  {
    if(VAR_6 > 1)
    {
      GLuint VAR_16;


      for(VAR_16=0; VAR_16<VAR_5; VAR_16++, VAR_0 += VAR_9)
      {




 FUNC_0(VAR_0, &VAR_7[VAR_16*VAR_4], VAR_3, VAR_4, VAR_6);
      }


      FUNC_0(VAR_7, VAR_1, VAR_2, VAR_4, VAR_5);
    }
    else
      FUNC_0(VAR_0, VAR_1, VAR_2, VAR_4, VAR_5);
  }
}
