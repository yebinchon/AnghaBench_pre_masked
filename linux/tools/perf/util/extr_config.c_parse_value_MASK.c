
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int value ;


 int FUNC_0 () ;
 scalar_t__ FUNC_1 (int) ;

__attribute__((used)) static char *FUNC_2(void)
{
 static char VAR_0[1024];
 int VAR_1 = 0, VAR_2 = 0, VAR_3 = 0;
 size_t VAR_4 = 0;

 for (;;) {
  int VAR_5 = FUNC_0();

  if (VAR_4 >= sizeof(VAR_0) - 1)
   return ((void*)0);
  if (VAR_5 == '\n') {
   if (VAR_1)
    return ((void*)0);
   VAR_0[VAR_4] = 0;
   return VAR_0;
  }
  if (VAR_2)
   continue;
  if (FUNC_1(VAR_5) && !VAR_1) {
   VAR_3 = 1;
   continue;
  }
  if (!VAR_1) {
   if (VAR_5 == ';' || VAR_5 == '#') {
    VAR_2 = 1;
    continue;
   }
  }
  if (VAR_3) {
   if (VAR_4)
    VAR_0[VAR_4++] = ' ';
   VAR_3 = 0;
  }
  if (VAR_5 == '\\') {
   VAR_5 = FUNC_0();
   switch (VAR_5) {
   case '\n':
    continue;
   case 't':
    VAR_5 = '\t';
    break;
   case 'b':
    VAR_5 = '\b';
    break;
   case 'n':
    VAR_5 = '\n';
    break;

   case '\\': case '"':
    break;

   default:
    return ((void*)0);
   }
   VAR_0[VAR_4++] = VAR_5;
   continue;
  }
  if (VAR_5 == '"') {
   VAR_1 = 1-VAR_1;
   continue;
  }
  VAR_0[VAR_4++] = VAR_5;
 }
}
