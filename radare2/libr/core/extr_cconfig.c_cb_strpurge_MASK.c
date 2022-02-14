
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {char* value; } ;
struct TYPE_5__ {TYPE_1__* bin; } ;
struct TYPE_4__ {int * strpurge; } ;
typedef TYPE_2__ RCore ;
typedef TYPE_3__ RConfigNode ;


 int FUNC_0 (int *) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,char*) ;
 int * FUNC_3 (char*) ;

__attribute__((used)) static bool FUNC_4(void *VAR_0, void *VAR_1) {
 RCore *VAR_2 = (RCore*) VAR_0;
 RConfigNode *VAR_3 = (RConfigNode*) VAR_1;
 if (*VAR_3->value == '?') {
  FUNC_1 (
      "There can be multiple entries separated by commas. No whitespace before/after entries.\n"
      "Possible entries:\n"
      "  all          : purge all strings\n"
      "  true         : use the false_positive() classifier in cbin.c\n"
      "  addr         : purge string at addr\n"
      "  addr1-addr2  : purge all strings in the range addr1-addr2 inclusive\n"
      "  !addr        : prevent purge of string at addr by prev entries\n"
      "  !addr1-addr2 : prevent purge of strings in range addr1-addr2 inclusive by prev entries\n"
      "Neither !true nor !false is supported.\n"
      "\n"
      "Examples:\n"
      "  e bin.str.purge=true,0-0xff,!0x1a\n"
      "    -- purge strings using the false_positive() classifier in cbin.c and also strings \n"
      "       with addresses in the range 0-0xff, but not the string at 0x1a.\n"
      "  e bin.str.purge=all,!0x1000-0x1fff\n"
      "    -- purge all strings except the strings with addresses in the range 0x1000-0x1fff.\n");
  return 0;
 }
 FUNC_0 (VAR_2->bin->strpurge);
 VAR_2->bin->strpurge = !*VAR_3->value || !FUNC_2 (VAR_3->value, "false")
                 ? ((void*)0) : FUNC_3 (VAR_3->value);
 return 1;
}
