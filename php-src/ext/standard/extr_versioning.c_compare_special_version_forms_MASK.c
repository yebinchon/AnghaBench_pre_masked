
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char* member_0; int member_1; int order; scalar_t__ name; } ;
typedef TYPE_1__ special_forms_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (char*,scalar_t__,int ) ;

__attribute__((used)) static int
FUNC_3(char *VAR_0, char *VAR_1)
{
 int VAR_2 = -1, VAR_3 = -1;
 special_forms_t VAR_4[11] = {
  {"dev", 0},
  {"alpha", 1},
  {"a", 1},
  {"beta", 2},
  {"b", 2},
  {"RC", 3},
  {"rc", 3},
  {"#", 4},
  {"pl", 5},
  {"p", 5},
  {((void*)0), 0},
 };
 special_forms_t *VAR_5;

 for (VAR_5 = VAR_4; VAR_5 && VAR_5->name; VAR_5++) {
  if (FUNC_2(VAR_0, VAR_5->name, FUNC_1(VAR_5->name)) == 0) {
   VAR_2 = VAR_5->order;
   break;
  }
 }
 for (VAR_5 = VAR_4; VAR_5 && VAR_5->name; VAR_5++) {
  if (FUNC_2(VAR_1, VAR_5->name, FUNC_1(VAR_5->name)) == 0) {
   VAR_3 = VAR_5->order;
   break;
  }
 }
 return FUNC_0(VAR_2 - VAR_3);
}
