
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* VAR_0 ;
 int FUNC_0 (int) ;

__attribute__((used)) static char *
FUNC_1(void)
{
 char *VAR_1;
 char *VAR_2;
 int VAR_3;

 for (VAR_1 = VAR_0;;) {
  VAR_2 = VAR_1;
  for (;;) {
   if (*VAR_1 == '\0')
    goto done;
   if (!FUNC_0((int) *VAR_1))
    break;
   VAR_1++;
  }
  VAR_2 = VAR_1;

  for (;;) {
   if (*VAR_1 == '\0') {
    goto done;
   } else if ((*VAR_1 == '"') || (*VAR_1 == '\'')) {
    VAR_3 = *VAR_1++;

    for (;;) {
     if (*VAR_1 == '\0') {
      goto done;
     } else if (*VAR_1 == '\\') {
      VAR_1++;
      if (*VAR_1 == '\0')
       goto done;
      VAR_1++;
     } else if (*VAR_1 == VAR_3) {
      VAR_1++;
      break;
     } else {
      VAR_1++;
     }
    }
   } else if (*VAR_1 == '\\') {
    VAR_1++;
    if (*VAR_1 == '\0')
     goto done;
    VAR_1++;
   } else if ((*VAR_1 == ';') || (*VAR_1 == '\n')) {

    VAR_1++;
    if (*VAR_1 == '\0')
     goto done;
    break;
   } else {
    VAR_1++;
   }
  }
 }
done:
 return (VAR_2);
}
