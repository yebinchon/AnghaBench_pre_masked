
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int anal; } ;
typedef TYPE_1__ RCore ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_1__*,int ) ;
 int FUNC_2 (int ,char const*) ;
 int FUNC_3 (int ,char const*) ;
 int FUNC_4 (int ,char const*) ;

__attribute__((used)) static int FUNC_5(void *VAR_1, const char *VAR_2) {
 RCore *VAR_3 = (RCore *) VAR_1;

 switch (*VAR_2) {
 case ' ':
  if (VAR_2[1]) {
   return FUNC_2 (VAR_3->anal, VAR_2 + 1);
  }
  FUNC_0 ("usage: zo filename\n");
  return 0;
 case 's':
  if (VAR_2[1] == ' ' && VAR_2[2]) {
   return FUNC_4 (VAR_3->anal, VAR_2 + 2);
  }
  FUNC_0 ("usage: zos filename\n");
  return 0;
 case 'z':
  if (VAR_2[1] == ' ' && VAR_2[2]) {
   return FUNC_3 (VAR_3->anal, VAR_2 + 2);
  }
  FUNC_0 ("usage: zoz filename\n");
  return 0;
 case '?':
  FUNC_1 (VAR_3, VAR_0);
  break;
 default:
  FUNC_0 ("usage: zo[zs] filename\n");
  return 0;
 }

 return 1;
}
