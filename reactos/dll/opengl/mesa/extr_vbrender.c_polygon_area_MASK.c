
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vertex_buffer {float** Win; } ;
typedef size_t GLuint ;
typedef size_t GLint ;
typedef float GLfloat ;



__attribute__((used)) static GLfloat FUNC_0( const struct vertex_buffer *VAR_0,
                             GLuint VAR_1, const GLuint VAR_2[] )
{
   GLfloat VAR_3 = 0.0F;
   GLint VAR_4;
   for (VAR_4=0;VAR_4<VAR_1;VAR_4++) {

      GLuint VAR_5 = VAR_2[VAR_4];
      GLuint VAR_6 = VAR_2[(VAR_4+1)%VAR_1];
      GLfloat VAR_7 = VAR_0->Win[VAR_5][0];
      GLfloat VAR_8 = VAR_0->Win[VAR_5][1];
      GLfloat VAR_9 = VAR_0->Win[VAR_6][0];
      GLfloat VAR_10 = VAR_0->Win[VAR_6][1];
      GLfloat VAR_11 = (VAR_7-VAR_9)*(VAR_8+VAR_10);
      VAR_3 += VAR_11;
   }
   return VAR_3 * 0.5F;
}
