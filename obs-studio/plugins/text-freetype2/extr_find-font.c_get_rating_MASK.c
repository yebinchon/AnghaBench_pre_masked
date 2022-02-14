
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct font_path_info {char* face_and_style; } ;
struct dstr {char* array; } ;


 scalar_t__ FUNC_0 (char const) ;

__attribute__((used)) static inline size_t FUNC_1(struct font_path_info *VAR_0, struct dstr *VAR_1)
{
 const char *VAR_2 = VAR_0->face_and_style;
 const char *VAR_3 = VAR_1->array;
 size_t VAR_4 = 0;

 do {
  char VAR_5 = (char)FUNC_0(*VAR_2);
  char VAR_6 = (char)FUNC_0(*VAR_3);

  if (VAR_5 != VAR_6)
   break;

  VAR_4++;
 } while (*VAR_2++ && *VAR_3++);

 return VAR_4;
}
