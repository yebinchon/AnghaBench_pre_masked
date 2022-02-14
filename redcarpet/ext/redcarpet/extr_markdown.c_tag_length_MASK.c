
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char uint8_t ;
typedef enum mkd_autolink { ____Placeholder_mkd_autolink } mkd_autolink ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (char) ;
 size_t FUNC_1 (char*,size_t) ;

__attribute__((used)) static size_t
FUNC_2(uint8_t *VAR_3, size_t VAR_4, enum mkd_autolink *VAR_5)
{
 size_t VAR_6, VAR_7;


 if (VAR_4 < 3) return 0;


 if (VAR_3[0] != '<') return 0;
 VAR_6 = (VAR_3[1] == '/') ? 2 : 1;

 if (!FUNC_0(VAR_3[VAR_6]))
  return 0;


 *VAR_5 = VAR_2;


 while (VAR_6 < VAR_4 && (FUNC_0(VAR_3[VAR_6]) || VAR_3[VAR_6] == '.' || VAR_3[VAR_6] == '+' || VAR_3[VAR_6] == '-'))
  VAR_6++;

 if (VAR_6 > 1 && VAR_3[VAR_6] == '@') {
  if ((VAR_7 = FUNC_1(VAR_3 + VAR_6, VAR_4 - VAR_6)) != 0) {
   *VAR_5 = VAR_0;
   return VAR_6 + VAR_7;
  }
 }

 if (VAR_6 > 2 && VAR_3[VAR_6] == ':') {
  *VAR_5 = VAR_1;
  VAR_6++;
 }


 if (VAR_6 >= VAR_4)
  *VAR_5 = VAR_2;

 else if (*VAR_5) {
  VAR_7 = VAR_6;

  while (VAR_6 < VAR_4) {
   if (VAR_3[VAR_6] == '\\') VAR_6 += 2;
   else if (VAR_3[VAR_6] == '>' || VAR_3[VAR_6] == '\'' ||
     VAR_3[VAR_6] == '"' || VAR_3[VAR_6] == ' ' || VAR_3[VAR_6] == '\n')
     break;
   else VAR_6++;
  }

  if (VAR_6 >= VAR_4) return 0;
  if (VAR_6 > VAR_7 && VAR_3[VAR_6] == '>') return VAR_6 + 1;

  *VAR_5 = VAR_2;
 }


 while (VAR_6 < VAR_4 && VAR_3[VAR_6] != '>') VAR_6++;
 if (VAR_6 >= VAR_4) return 0;
 return VAR_6 + 1;
}
