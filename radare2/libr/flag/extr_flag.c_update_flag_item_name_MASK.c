
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int ht_name; } ;
struct TYPE_7__ {char const* name; } ;
typedef TYPE_1__ RFlagItem ;
typedef TYPE_2__ RFlag ;


 char* FUNC_0 (char const*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ,char*,TYPE_1__*) ;
 int FUNC_3 (int ,char const*,char*) ;
 int FUNC_4 (TYPE_1__*,char*) ;
 int FUNC_5 (char const*,char const*) ;

__attribute__((used)) static bool FUNC_6(RFlag *VAR_0, RFlagItem *VAR_1, const char *VAR_2, bool VAR_3) {
 if (!VAR_0 || !VAR_1 || !VAR_2) {
  return 0;
 }
 if (!VAR_3 && (VAR_1->name == VAR_2 || (VAR_1->name && !FUNC_5 (VAR_1->name, VAR_2)))) {
  return 0;
 }
 char *VAR_4 = FUNC_0 (VAR_2);
 if (!VAR_4) {
  return 0;
 }
 bool VAR_5 = (VAR_1->name)
  ? FUNC_3 (VAR_0->ht_name, VAR_1->name, VAR_4)
  : FUNC_2 (VAR_0->ht_name, VAR_4, VAR_1);
 if (VAR_5) {
  FUNC_4 (VAR_1, VAR_4);
  return 1;
 }
 FUNC_1 (VAR_4);
 return 0;
}
