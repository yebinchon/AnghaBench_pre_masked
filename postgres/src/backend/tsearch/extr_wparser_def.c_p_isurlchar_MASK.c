
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {char* str; TYPE_1__* state; } ;
struct TYPE_4__ {int charlen; int posbyte; } ;
typedef TYPE_2__ TParser ;



__attribute__((used)) static int
FUNC_0(TParser *VAR_0)
{
 char VAR_1;


 if (VAR_0->state->charlen != 1)
  return 0;
 VAR_1 = *(VAR_0->str + VAR_0->state->posbyte);

 if (VAR_1 <= 0x20 || VAR_1 >= 0x7F)
  return 0;

 switch (VAR_1)
 {
  case '"':
  case '<':
  case '>':
  case '\\':
  case '^':
  case '`':
  case '{':
  case '|':
  case '}':
   return 0;
 }
 return 1;
}
