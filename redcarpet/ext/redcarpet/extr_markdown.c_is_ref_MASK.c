
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char uint8_t ;
struct link_ref {void* title; void* link; } ;


 struct link_ref* FUNC_0 (struct link_ref**,char const*,size_t) ;
 void* FUNC_1 (size_t) ;
 int FUNC_2 (void*,char const*,size_t) ;
 scalar_t__ FUNC_3 (char*,char const) ;

__attribute__((used)) static int
FUNC_4(const uint8_t *VAR_0, size_t VAR_1, size_t VAR_2, size_t *VAR_3, struct link_ref **VAR_4)
{

 size_t VAR_5 = 0;
 size_t VAR_6, VAR_7;
 size_t VAR_8, VAR_9;
 size_t VAR_10, VAR_11;
 size_t VAR_12;


 if (VAR_1 + 3 >= VAR_2) return 0;
 if (VAR_0[VAR_1] == ' ') { VAR_5 = 1;
 if (VAR_0[VAR_1 + 1] == ' ') { VAR_5 = 2;
 if (VAR_0[VAR_1 + 2] == ' ') { VAR_5 = 3;
 if (VAR_0[VAR_1 + 3] == ' ') return 0; } } }
 VAR_5 += VAR_1;


 if (VAR_0[VAR_5] != '[') return 0;
 VAR_5++;
 VAR_6 = VAR_5;
 while (VAR_5 < VAR_2 && VAR_0[VAR_5] != '\n' && VAR_0[VAR_5] != '\r' && VAR_0[VAR_5] != ']')
  VAR_5++;
 if (VAR_5 >= VAR_2 || VAR_0[VAR_5] != ']') return 0;
 VAR_7 = VAR_5;


 VAR_5++;
 if (VAR_5 >= VAR_2 || VAR_0[VAR_5] != ':') return 0;
 VAR_5++;
 while (VAR_5 < VAR_2 && FUNC_3("\t ", VAR_0[VAR_5])) VAR_5++;
 if (VAR_5 < VAR_2 && (VAR_0[VAR_5] == '\n' || VAR_0[VAR_5] == '\r')) {
  VAR_5++;
  if (VAR_5 < VAR_2 && VAR_0[VAR_5] == '\r' && VAR_0[VAR_5 - 1] == '\n') VAR_5++; }
 while (VAR_5 < VAR_2 && FUNC_3("\t ", VAR_0[VAR_5])) VAR_5++;
 if (VAR_5 >= VAR_2) return 0;


 if (VAR_0[VAR_5] == '<')
  VAR_5++;

 VAR_8 = VAR_5;

 while (VAR_5 < VAR_2 && VAR_0[VAR_5] != ' ' && VAR_0[VAR_5] != '\n' && VAR_0[VAR_5] != '\r')
  VAR_5++;

 if (VAR_0[VAR_5 - 1] == '>') VAR_9 = VAR_5 - 1;
 else VAR_9 = VAR_5;


 while (VAR_5 < VAR_2 && FUNC_3("\t ", VAR_0[VAR_5])) VAR_5++;
 if (VAR_5 < VAR_2 && VAR_0[VAR_5] != '\n' && VAR_0[VAR_5] != '\r'
   && VAR_0[VAR_5] != '\'' && VAR_0[VAR_5] != '"' && VAR_0[VAR_5] != '(')
  return 0;
 VAR_12 = 0;

 if (VAR_5 >= VAR_2 || VAR_0[VAR_5] == '\r' || VAR_0[VAR_5] == '\n') VAR_12 = VAR_5;
 if (VAR_5 + 1 < VAR_2 && VAR_0[VAR_5] == '\n' && VAR_0[VAR_5 + 1] == '\r')
  VAR_12 = VAR_5 + 1;


 if (VAR_12) {
  VAR_5 = VAR_12 + 1;
  while (VAR_5 < VAR_2 && FUNC_3("\t ", VAR_0[VAR_5])) VAR_5++; }



 VAR_10 = VAR_11 = 0;
 if (VAR_5 + 1 < VAR_2
 && (VAR_0[VAR_5] == '\'' || VAR_0[VAR_5] == '"' || VAR_0[VAR_5] == '(')) {
  VAR_5++;
  VAR_10 = VAR_5;

  while (VAR_5 < VAR_2 && VAR_0[VAR_5] != '\n' && VAR_0[VAR_5] != '\r') VAR_5++;
  if (VAR_5 + 1 < VAR_2 && VAR_0[VAR_5] == '\n' && VAR_0[VAR_5 + 1] == '\r')
   VAR_11 = VAR_5 + 1;
  else VAR_11 = VAR_5;

  VAR_5 -= 1;
  while (VAR_5 > VAR_10 && VAR_0[VAR_5] == ' ')
   VAR_5 -= 1;
  if (VAR_5 > VAR_10
  && (VAR_0[VAR_5] == '\'' || VAR_0[VAR_5] == '"' || VAR_0[VAR_5] == ')')) {
   VAR_12 = VAR_11;
   VAR_11 = VAR_5; } }

 if (!VAR_12 || VAR_9 == VAR_8)
  return 0;


 if (VAR_3)
  *VAR_3 = VAR_12;

 if (VAR_4) {
  struct link_ref *VAR_13;

  VAR_13 = FUNC_0(VAR_4, VAR_0 + VAR_6, VAR_7 - VAR_6);
  if (!VAR_13)
   return 0;

  VAR_13->link = FUNC_1(VAR_9 - VAR_8);
  FUNC_2(VAR_13->link, VAR_0 + VAR_8, VAR_9 - VAR_8);

  if (VAR_11 > VAR_10) {
   VAR_13->title = FUNC_1(VAR_11 - VAR_10);
   FUNC_2(VAR_13->title, VAR_0 + VAR_10, VAR_11 - VAR_10);
  }
 }

 return 1;
}
