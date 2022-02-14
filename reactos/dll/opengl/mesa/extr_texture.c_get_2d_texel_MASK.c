
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gl_texture_object {int dummy; } ;
struct gl_texture_image {scalar_t__ Width; scalar_t__ Height; int Format; int * Data; } ;
typedef int GLubyte ;
typedef scalar_t__ GLint ;
 int FUNC_0 () ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (struct gl_texture_object const*,int ,int *,int *,int *,int *) ;

__attribute__((used)) static void FUNC_3( const struct gl_texture_object *VAR_0,
                          const struct gl_texture_image *VAR_1, GLint VAR_2, GLint VAR_3,
                          GLubyte *VAR_4, GLubyte *VAR_5, GLubyte *VAR_6,
                          GLubyte *VAR_7 )
{
   GLint VAR_8 = VAR_1->Width;
   GLubyte *VAR_9;







   switch (VAR_1->Format) {
      case 133:
         {
            GLubyte VAR_10 = VAR_1->Data[ VAR_8 *VAR_3 + VAR_2 ];
            FUNC_2(VAR_0, VAR_10, VAR_4, VAR_5, VAR_6, VAR_7);
            return;
         }
      case 134:
         *VAR_7 = VAR_1->Data[ VAR_8 * VAR_3 + VAR_2 ];
         return;
      case 131:
      case 132:
         *VAR_4 = VAR_1->Data[ VAR_8 * VAR_3 + VAR_2 ];
         return;
      case 130:
         VAR_9 = VAR_1->Data + (VAR_8 * VAR_3 + VAR_2) * 2;
         *VAR_4 = VAR_9[0];
         *VAR_7 = VAR_9[1];
         return;
      case 129:
         VAR_9 = VAR_1->Data + (VAR_8 * VAR_3 + VAR_2) * 3;
         *VAR_4 = VAR_9[0];
         *VAR_5 = VAR_9[1];
         *VAR_6 = VAR_9[2];
         return;
      case 128:
         VAR_9 = VAR_1->Data + (VAR_8 * VAR_3 + VAR_2) * 4;
         *VAR_4 = VAR_9[0];
         *VAR_5 = VAR_9[1];
         *VAR_6 = VAR_9[2];
         *VAR_7 = VAR_9[3];
         return;
      default:
         FUNC_1(((void*)0), "Bad format in get_2d_texel");
   }
}
