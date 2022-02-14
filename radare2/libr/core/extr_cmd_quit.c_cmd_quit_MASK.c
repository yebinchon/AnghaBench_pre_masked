
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {long long value; } ;
struct TYPE_5__ {TYPE_2__* num; } ;
typedef TYPE_1__ RCore ;


 int FUNC_0 (TYPE_1__*,char const*) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_1__*,int ) ;
 int FUNC_2 (TYPE_2__*,char const*) ;

__attribute__((used)) static int FUNC_3(void *VAR_1, const char *VAR_2) {
 RCore *VAR_3 = (RCore *)VAR_1;
 if (VAR_2)
 switch (*VAR_2) {
 case '?':
  FUNC_1 (VAR_3, VAR_0);
  break;
 case '!':
  return FUNC_0 (VAR_3, VAR_2);
 case '\0':
  VAR_3->num->value = 0LL;
  return -2;
 default:
  while (*VAR_2 == ' ') {
   VAR_2++;
  }
  if (*VAR_2) {
   FUNC_2 (VAR_3->num, VAR_2);
  } else {
   VAR_3->num->value = 0LL;
  }

  if (*VAR_2 == 'y') {
   VAR_3->num->value = 5;
  } else if (*VAR_2 == 'n') {
   VAR_3->num->value = 1;
  }

  if (VAR_2[1] == 'y') {
   VAR_3->num->value += 10;
  } else if (VAR_2[1] == 'n') {
   VAR_3->num->value += 2;
  }


  return -2;
 }
 return 0;
}
