
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gl_texture_object {size_t* Palette; int PaletteFormat; } ;
typedef size_t GLubyte ;
typedef int GLint ;
 int FUNC_0 (int *,char*) ;

__attribute__((used)) static void FUNC_1(const struct gl_texture_object *VAR_0,
                           GLubyte VAR_1, GLubyte *VAR_2, GLubyte *VAR_3,
                           GLubyte *VAR_4, GLubyte *VAR_5)
{
   GLint VAR_6 = VAR_1;
   const GLubyte *VAR_7;

   VAR_7 = VAR_0->Palette;

   switch (VAR_0->PaletteFormat) {
      case 133:
         *VAR_5 = VAR_0->Palette[VAR_1];
         return;
      case 131:
      case 132:
         *VAR_2 = VAR_7[VAR_1];
         return;
      case 130:
         *VAR_2 = VAR_7[(VAR_1 << 1) + 0];
         *VAR_5 = VAR_7[(VAR_1 << 1) + 1];
         return;
      case 129:
         *VAR_2 = VAR_7[VAR_1 * 3 + 0];
         *VAR_3 = VAR_7[VAR_1 * 3 + 1];
         *VAR_4 = VAR_7[VAR_1 * 3 + 2];
         return;
      case 128:
         *VAR_2 = VAR_7[(VAR_6 << 2) + 0];
         *VAR_3 = VAR_7[(VAR_6 << 2) + 1];
         *VAR_4 = VAR_7[(VAR_6 << 2) + 2];
         *VAR_5 = VAR_7[(VAR_6 << 2) + 3];
         return;
      default:
         FUNC_0(((void*)0), "Bad palette format in palette_sample");
   }
}
