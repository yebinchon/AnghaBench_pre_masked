
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int RCore ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int,int) ;

__attribute__((used)) static int FUNC_3(void *VAR_1, const char *VAR_2) {
 RCore *VAR_3 = (RCore *) VAR_1;

 switch (*VAR_2) {
 case 0:
 case '*':
  return FUNC_2 (VAR_3, VAR_2[0] == '*', 0);
 case 'f':
  switch (VAR_2[1]) {
  case 0:
  case '*':
   return FUNC_2 (VAR_3, VAR_2[1] == '*', 1);
  default:
   FUNC_0 ("usage: z/[f*]\n");
   return 0;
  }
 case '?':
  FUNC_1 (VAR_3, VAR_0);
  break;
 default:
  FUNC_0 ("usage: z/[*]\n");
  return 0;
 }

 return 1;
}
