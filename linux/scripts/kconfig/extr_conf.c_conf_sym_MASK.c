
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int tristate ;
struct symbol {char* name; } ;
struct menu {TYPE_1__* prompt; struct symbol* sym; } ;
struct TYPE_2__ {int text; } ;


 int FUNC_0 (struct symbol*,int ) ;
 char* VAR_0 ;
 int* VAR_1 ;


 int FUNC_1 (struct menu*) ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (char) ;
 int FUNC_4 (int*,char*) ;
 int FUNC_5 (int*) ;
 int FUNC_6 (struct symbol*) ;
 int FUNC_7 (struct symbol*) ;
 scalar_t__ FUNC_8 (struct symbol*,int) ;
 scalar_t__ FUNC_9 (struct symbol*,int const) ;


__attribute__((used)) static int FUNC_10(struct menu *VAR_2)
{
 struct symbol *VAR_3 = VAR_2->sym;
 tristate VAR_4, VAR_5;

 while (1) {
  FUNC_2("%*s%s ", VAR_0 - 1, "", VAR_2->prompt->text);
  if (VAR_3->name)
   FUNC_2("(%s) ", VAR_3->name);
  FUNC_3('[');
  VAR_4 = FUNC_7(VAR_3);
  switch (VAR_4) {
  case 129:
   FUNC_3('N');
   break;
  case 130:
   FUNC_3('M');
   break;
  case 128:
   FUNC_3('Y');
   break;
  }
  if (VAR_4 != 129 && FUNC_9(VAR_3, 129))
   FUNC_2("/n");
  if (VAR_4 != 130 && FUNC_9(VAR_3, 130))
   FUNC_2("/m");
  if (VAR_4 != 128 && FUNC_9(VAR_3, 128))
   FUNC_2("/y");
  FUNC_2("/?] ");
  if (!FUNC_0(VAR_3, FUNC_6(VAR_3)))
   return 0;
  FUNC_5(VAR_1);

  switch (VAR_1[0]) {
  case 'n':
  case 'N':
   VAR_5 = 129;
   if (!VAR_1[1] || !FUNC_4(&VAR_1[1], "o"))
    break;
   continue;
  case 'm':
  case 'M':
   VAR_5 = 130;
   if (!VAR_1[1])
    break;
   continue;
  case 'y':
  case 'Y':
   VAR_5 = 128;
   if (!VAR_1[1] || !FUNC_4(&VAR_1[1], "es"))
    break;
   continue;
  case 0:
   VAR_5 = VAR_4;
   break;
  case '?':
   goto help;
  default:
   continue;
  }
  if (FUNC_8(VAR_3, VAR_5))
   return 0;
help:
  FUNC_1(VAR_2);
 }
}
