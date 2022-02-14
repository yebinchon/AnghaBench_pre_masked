
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gl_texture_object {scalar_t__ const MinMagThresh; int MinFilter; int MagFilter; int * Image; } ;
typedef size_t GLuint ;
typedef int GLubyte ;
typedef scalar_t__ GLfloat ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (struct gl_texture_object const*,int ,scalar_t__ const,int *,int *,int *,int *) ;
 int FUNC_2 (struct gl_texture_object const*,scalar_t__ const,scalar_t__ const,int *,int *,int *,int *) ;
 int FUNC_3 (struct gl_texture_object const*,scalar_t__ const,scalar_t__ const,int *,int *,int *,int *) ;
 int FUNC_4 (struct gl_texture_object const*,int ,scalar_t__ const,int *,int *,int *,int *) ;
 int FUNC_5 (struct gl_texture_object const*,scalar_t__ const,scalar_t__ const,int *,int *,int *,int *) ;
 int FUNC_6 (struct gl_texture_object const*,scalar_t__ const,scalar_t__ const,int *,int *,int *,int *) ;

__attribute__((used)) static void FUNC_7( const struct gl_texture_object *VAR_0, GLuint VAR_1,
                              const GLfloat VAR_2[], const GLfloat VAR_3[],
                              const GLfloat VAR_4[], const GLfloat VAR_5[],
                              GLubyte VAR_6[], GLubyte VAR_7[], GLubyte VAR_8[],
                              GLubyte VAR_9[] )
{
   GLuint VAR_10;

   for (VAR_10=0;VAR_10<VAR_1;VAR_10++) {
      if (VAR_5[VAR_10] > VAR_0->MinMagThresh) {

         switch (VAR_0->MinFilter) {
            case 130:
               FUNC_4( VAR_0, VAR_0->Image[0], VAR_2[VAR_10],
                                  &VAR_6[VAR_10], &VAR_7[VAR_10], &VAR_8[VAR_10], &VAR_9[VAR_10] );
               break;
            case 133:
               FUNC_1( VAR_0, VAR_0->Image[0], VAR_2[VAR_10],
                                 &VAR_6[VAR_10], &VAR_7[VAR_10], &VAR_8[VAR_10], &VAR_9[VAR_10] );
               break;
            case 128:
               FUNC_6( VAR_0, VAR_5[VAR_10], VAR_2[VAR_10],
                                 &VAR_6[VAR_10], &VAR_7[VAR_10], &VAR_8[VAR_10], &VAR_9[VAR_10] );
               break;
            case 131:
               FUNC_3( VAR_0, VAR_2[VAR_10], VAR_5[VAR_10],
                                 &VAR_6[VAR_10], &VAR_7[VAR_10], &VAR_8[VAR_10], &VAR_9[VAR_10] );
               break;
            case 129:
               FUNC_5( VAR_0, VAR_2[VAR_10], VAR_5[VAR_10],
                                 &VAR_6[VAR_10], &VAR_7[VAR_10], &VAR_8[VAR_10], &VAR_9[VAR_10] );
               break;
            case 132:
               FUNC_2( VAR_0, VAR_2[VAR_10], VAR_5[VAR_10],
                                 &VAR_6[VAR_10], &VAR_7[VAR_10], &VAR_8[VAR_10], &VAR_9[VAR_10] );
               break;
            default:
               FUNC_0(((void*)0), "Bad min filter in sample_1d_texture");
               return;
         }
      }
      else {

         switch (VAR_0->MagFilter) {
            case 130:
               FUNC_4( VAR_0, VAR_0->Image[0], VAR_2[VAR_10],
                                  &VAR_6[VAR_10], &VAR_7[VAR_10], &VAR_8[VAR_10], &VAR_9[VAR_10] );
               break;
            case 133:
               FUNC_1( VAR_0, VAR_0->Image[0], VAR_2[VAR_10],
                                 &VAR_6[VAR_10], &VAR_7[VAR_10], &VAR_8[VAR_10], &VAR_9[VAR_10] );
               break;
            default:
               FUNC_0(((void*)0), "Bad mag filter in sample_1d_texture");
               return;
         }
      }
   }
}
