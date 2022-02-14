
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct gl_texture_object {TYPE_1__** Image; } ;
struct TYPE_2__ {size_t MaxLog2; } ;
typedef float GLubyte ;
typedef size_t GLint ;
typedef size_t GLfloat ;


 size_t FUNC_0 (size_t,int,size_t) ;
 size_t FUNC_1 (size_t) ;
 int FUNC_2 (struct gl_texture_object const*,TYPE_1__*,size_t,float*,float*,float*,float*) ;

__attribute__((used)) static void
FUNC_3( const struct gl_texture_object *VAR_0,
                                 GLfloat VAR_1, GLfloat VAR_2,
                                 GLubyte *VAR_3, GLubyte *VAR_4,
                                 GLubyte *VAR_5, GLubyte *VAR_6 )
{
   GLint VAR_7 = VAR_0->Image[0]->MaxLog2;

   if (VAR_2>=VAR_7) {
      FUNC_2( VAR_0, VAR_0->Image[VAR_7],
                         VAR_1, VAR_3, VAR_4, VAR_5, VAR_6 );
   }
   else {
      GLubyte VAR_8, VAR_9, VAR_10, VAR_11;
      GLubyte VAR_12, VAR_13, VAR_14, VAR_15;
      GLfloat VAR_16 = FUNC_1(VAR_2);
      GLint VAR_17 = (GLint) (VAR_2 + 1.0F);
      VAR_17 = FUNC_0( VAR_17, 1, VAR_7 );
      FUNC_2( VAR_0, VAR_0->Image[VAR_17-1],
                         VAR_1, &VAR_8, &VAR_9, &VAR_10, &VAR_11 );
      FUNC_2( VAR_0, VAR_0->Image[VAR_17],
                         VAR_1, &VAR_12, &VAR_13, &VAR_14, &VAR_15 );
      *VAR_3 = (1.0F-VAR_16)*VAR_8 + VAR_16*VAR_12;
      *VAR_4 = (1.0F-VAR_16)*VAR_9 + VAR_16*VAR_13;
      *VAR_5 = (1.0F-VAR_16)*VAR_10 + VAR_16*VAR_14;
      *VAR_6 = (1.0F-VAR_16)*VAR_11 + VAR_16*VAR_15;
   }
}
