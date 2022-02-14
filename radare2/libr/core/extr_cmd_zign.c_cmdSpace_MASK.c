
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* anal; } ;
struct TYPE_4__ {int zign_spaces; } ;
typedef int RSpaces ;
typedef TYPE_2__ RCore ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_2__*,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,char const*) ;
 int FUNC_4 (int *,int *,char const*) ;
 int FUNC_5 (int *,char const*) ;
 int FUNC_6 (int *,char const*) ;
 int FUNC_7 (int *,char const) ;

__attribute__((used)) static int FUNC_8(void *VAR_1, const char *VAR_2) {
 RCore *VAR_3 = (RCore *) VAR_1;
 RSpaces *VAR_4 = &VAR_3->anal->zign_spaces;

 switch (*VAR_2) {
 case '+':
  if (!VAR_2[1]) {
   FUNC_0 ("usage: zs+zignspace\n");
   return 0;
  }
  FUNC_3 (VAR_4, VAR_2 + 1);
  break;
 case 'r':
  if (VAR_2[1] != ' ' || !VAR_2[2]) {
   FUNC_0 ("usage: zsr newname\n");
   return 0;
  }
  FUNC_4 (VAR_4, ((void*)0), VAR_2 + 2);
  break;
 case '-':
  if (VAR_2[1] == '\x00') {
   FUNC_2 (VAR_4);
  } else if (VAR_2[1] == '*') {
   FUNC_6 (VAR_4, ((void*)0));
  } else {
   FUNC_6 (VAR_4, VAR_2 + 1);
  }
  break;
 case 'j':
 case '*':
 case '\0':
  FUNC_7 (VAR_4, VAR_2[0]);
  break;
 case ' ':
  if (!VAR_2[1]) {
   FUNC_0 ("usage: zs zignspace\n");
   return 0;
  }
  FUNC_5 (VAR_4, VAR_2 + 1);
  break;
 case '?':
  FUNC_1 (VAR_3, VAR_0);
  break;
 default:
  FUNC_0 ("usage: zs[+-*] [namespace]\n");
  return 0;
 }

 return 1;
}
