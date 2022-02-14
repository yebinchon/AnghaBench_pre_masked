
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char uint8_t ;
struct sd_markdown {int dummy; } ;


 size_t FUNC_0 (char const*,size_t,struct sd_markdown*,char*,size_t) ;
 size_t FUNC_1 (char const*) ;

__attribute__((used)) static size_t
FUNC_2(const char *VAR_0,
 struct sd_markdown *VAR_1,
 uint8_t *VAR_2,
 size_t VAR_3,
 int VAR_4)
{
 size_t VAR_5 = FUNC_1(VAR_0);
 size_t VAR_6 = 1, VAR_7;
 int VAR_8 = 0;

 while (VAR_6 < VAR_3) {
  VAR_6++;
  while (VAR_6 < VAR_3 && !(VAR_2[VAR_6 - 1] == '<' && VAR_2[VAR_6] == '/')) {
   if (VAR_2[VAR_6] == '\n')
    VAR_8++;

   VAR_6++;
  }
  if (VAR_4 && VAR_8 > 0 && VAR_2[VAR_6 - 2] != '\n')
   continue;

  if (VAR_6 + 2 + VAR_5 >= VAR_3)
   break;

  VAR_7 = FUNC_0(VAR_0, VAR_5, VAR_1, VAR_2 + VAR_6 - 1, VAR_3 - VAR_6 + 1);
  if (VAR_7)
   return VAR_6 + VAR_7 - 1;
 }

 return 0;
}
