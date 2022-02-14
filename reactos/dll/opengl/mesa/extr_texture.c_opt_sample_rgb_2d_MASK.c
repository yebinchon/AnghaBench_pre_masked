
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gl_texture_object {scalar_t__ WrapS; scalar_t__ WrapT; struct gl_texture_image** Image; } ;
struct gl_texture_image {int Width; int Height; int WidthLog2; scalar_t__ Border; scalar_t__ Format; int * Data; } ;
typedef size_t GLuint ;
typedef int GLubyte ;
typedef int GLint ;
typedef int const GLfloat ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static void FUNC_1( const struct gl_texture_object *VAR_2,
                               GLuint VAR_3, const GLfloat VAR_4[], const GLfloat VAR_5[],
                               const GLfloat VAR_6[], const GLfloat VAR_7[],
                               GLubyte VAR_8[], GLubyte VAR_9[],
                               GLubyte VAR_10[], GLubyte VAR_11[] )
{
   const struct gl_texture_image *VAR_12 = VAR_2->Image[0];
   GLfloat VAR_13 = VAR_12->Width, VAR_14 = VAR_12->Height;
   GLint VAR_15 = VAR_12->Width-1, VAR_16 = VAR_12->Height-1;
   GLint VAR_17 = VAR_12->WidthLog2;
   GLuint VAR_18;

   FUNC_0(VAR_2->WrapS==VAR_0);
   FUNC_0(VAR_2->WrapT==VAR_0);
   FUNC_0(VAR_12->Border==0);
   FUNC_0(VAR_12->Format==VAR_1);

   for (VAR_18=0;VAR_18<VAR_3;VAR_18++) {
      GLint VAR_19 = (GLint) (VAR_4[VAR_18] * VAR_13) & VAR_15;
      GLint VAR_20 = (GLint) (VAR_5[VAR_18] * VAR_14) & VAR_16;
      GLint VAR_21 = (VAR_20 << VAR_17) | VAR_19;
      GLubyte *VAR_22 = VAR_12->Data + VAR_21 + VAR_21 + VAR_21;
      VAR_8[VAR_18] = VAR_22[0];
      VAR_9[VAR_18] = VAR_22[1];
      VAR_10[VAR_18] = VAR_22[2];
   }
}
