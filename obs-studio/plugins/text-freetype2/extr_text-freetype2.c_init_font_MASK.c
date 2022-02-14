
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ft2_source {int * font_face; int font_flags; int font_style; int font_size; int font_name; } ;
typedef int FT_Long ;


 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int ,char const*,int ,int **) ;
 int VAR_0 ;
 char* FUNC_2 (int ,int ,int ,int ,int *) ;

__attribute__((used)) static bool FUNC_3(struct ft2_source *VAR_1)
{
 FT_Long VAR_2;
 const char *VAR_3 = FUNC_2(VAR_1->font_name, VAR_1->font_size,
      VAR_1->font_style,
      VAR_1->font_flags, &VAR_2);
 if (!VAR_3)
  return 0;

 if (VAR_1->font_face != ((void*)0)) {
  FUNC_0(VAR_1->font_face);
  VAR_1->font_face = ((void*)0);
 }

 return FUNC_1(VAR_0, VAR_3, VAR_2, &VAR_1->font_face) == 0;
}
