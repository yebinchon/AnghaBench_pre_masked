
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int anal; } ;
typedef TYPE_1__ RCore ;


 int FUNC_0 (void*,char const*) ;
 int FUNC_1 (void*,char const*) ;
 int FUNC_2 (void*,char const*) ;
 int FUNC_3 (void*,char const*) ;
 int FUNC_4 (void*,char const*) ;
 int FUNC_5 (void*,char const*) ;
 int FUNC_6 (void*,char const*) ;
 int FUNC_7 (void*,char const*) ;
 int VAR_0 ;
 int FUNC_8 (TYPE_1__*,char*) ;
 int FUNC_9 (TYPE_1__*,int ) ;
 int FUNC_10 (int ,char const*) ;
 int FUNC_11 (int ,char const) ;

__attribute__((used)) static int FUNC_12(void *VAR_1, const char *VAR_2) {
 RCore *VAR_3 = (RCore *) VAR_1;

 switch (*VAR_2) {
 case '\0':
 case '*':
 case 'q':
 case 'j':
  FUNC_11 (VAR_3->anal, VAR_2[0]);
  break;
 case 'k':
  FUNC_8 (VAR_3, "k anal/zigns/*");
  break;
 case '-':
  FUNC_10 (VAR_3->anal, VAR_2 + 1);
  break;
 case '.':
  return FUNC_1 (VAR_1, VAR_2 + 1);
 case 'o':
  return FUNC_5 (VAR_1, VAR_2 + 1);
 case 'g':
  return FUNC_0 (VAR_1, "F");
 case 'a':
  return FUNC_0 (VAR_1, VAR_2 + 1);
 case 'f':
  return FUNC_3 (VAR_1, VAR_2 + 1);
 case '/':
  return FUNC_6 (VAR_1, VAR_2 + 1);
 case 'c':
  return FUNC_2 (VAR_1, VAR_2 + 1);
 case 's':
  return FUNC_7 (VAR_1, VAR_2 + 1);
 case 'i':
  return FUNC_4 (VAR_1, VAR_2 + 1);
 case '?':
  FUNC_9 (VAR_3, VAR_0);
  break;
 default:
  FUNC_9 (VAR_3, VAR_0);
  return 0;
 }

 return 1;
}
