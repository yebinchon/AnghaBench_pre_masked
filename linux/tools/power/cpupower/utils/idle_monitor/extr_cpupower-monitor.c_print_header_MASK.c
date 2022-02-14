
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* name; } ;
typedef TYPE_1__ cstate_t ;
struct TYPE_4__ {int hw_states_num; char* name; TYPE_1__* hw_states; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (char*,int) ;
 TYPE_2__** VAR_2 ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (char*,char*,char*) ;

void FUNC_3(int VAR_3)
{
 int unsigned VAR_4;
 int VAR_5, VAR_6;
 cstate_t VAR_7;
 char VAR_8[128] = "";

 FUNC_0(VAR_8, VAR_3 * 5 - 1);
 FUNC_1("%s|", VAR_8);

 for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++) {
  VAR_6 = VAR_2[VAR_4]->hw_states_num * (VAR_0 + 1)
   - 1;
  if (VAR_4 != 0)
   FUNC_1("||");
  FUNC_2(VAR_8, "%s", VAR_2[VAR_4]->name);
  FUNC_0(VAR_8, VAR_6);
  FUNC_1("%s", VAR_8);
 }
 FUNC_1("\n");

 if (VAR_3 > 2)
  FUNC_1(" PKG|");
 if (VAR_3 > 1)
  FUNC_1("CORE|");
 if (VAR_3 > 0)
  FUNC_1(" CPU|");

 for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++) {
  if (VAR_4 != 0)
   FUNC_1("||");
  for (VAR_5 = 0; VAR_5 < VAR_2[VAR_4]->hw_states_num; VAR_5++) {
   if (VAR_5 != 0)
    FUNC_1("|");
   VAR_7 = VAR_2[VAR_4]->hw_states[VAR_5];
   FUNC_2(VAR_8, "%s", VAR_7.name);
   FUNC_0(VAR_8, VAR_0);
   FUNC_1("%s", VAR_8);
  }
  FUNC_1(" ");
 }
 FUNC_1("\n");
}
