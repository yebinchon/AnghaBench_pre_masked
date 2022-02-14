
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strref {char* array; scalar_t__ len; } ;
struct lexer {char* offset; } ;



__attribute__((used)) static void FUNC_0(struct lexer *VAR_0, struct strref *VAR_1)
{
 const char *VAR_2 = VAR_0->offset;
 bool VAR_3 = 0;

 while (*VAR_2 != 0 && *VAR_2 != '\n') {
  if (!VAR_3) {
   if (*VAR_2 == '\\') {
    VAR_3 = 1;
   } else if (*VAR_2 == '"') {
    VAR_2++;
    break;
   }
  } else {
   VAR_3 = 0;
  }

  ++VAR_2;
 }

 VAR_1->len += (size_t)(VAR_2 - VAR_0->offset);

 if (*VAR_1->array == '"') {
  VAR_1->array++;
  VAR_1->len--;

  if (*(VAR_2 - 1) == '"')
   VAR_1->len--;
 }

 VAR_0->offset = VAR_2;
}
