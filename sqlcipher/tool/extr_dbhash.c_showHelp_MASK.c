
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char* zArgv0; } ;


 TYPE_1__ VAR_0 ;
 int FUNC_0 (char*,...) ;

__attribute__((used)) static void FUNC_1(void){
  FUNC_0("Usage: %s [options] FILE ...\n", VAR_0.zArgv0);
  FUNC_0(
"Compute a SHA1 hash on the content of database FILE.  System tables such as\n"
"sqlite_stat1, sqlite_stat4, and sqlite_sequence are omitted from the hash.\n"
"Options:\n"
"   --debug N           Set debugging flags to N (experts only)\n"
"   --like PATTERN      Only hash tables whose name is LIKE the pattern\n"
"   --schema-only       Only hash the schema - omit table content\n"
"   --without-schema    Only hash table content - omit the schema\n"
  );
}
