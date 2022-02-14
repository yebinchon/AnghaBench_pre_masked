
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char* zArgv0; } ;


 TYPE_1__ VAR_0 ;
 int FUNC_0 (char*,...) ;

__attribute__((used)) static void FUNC_1(void){
  FUNC_0("Usage: %s [options] ?FILE...?\n", VAR_0.zArgv0);
  FUNC_0(
"Read SQL text from FILE... (or from standard input if FILE... is omitted)\n"
"and then evaluate each block of SQL contained therein.\n"
"Options:\n"
"  --autovacuum          Enable AUTOVACUUM mode\n"
"  --database FILE       Use database FILE instead of an in-memory database\n"
"  --disable-lookaside   Turn off lookaside memory\n"
"  --heap SZ MIN         Memory allocator uses SZ bytes & min allocation MIN\n"
"  --help                Show this help text\n"
"  --lookaside N SZ      Configure lookaside for N slots of SZ bytes each\n"
"  --oom                 Run each test multiple times in a simulated OOM loop\n"
"  --pagesize N          Set the page size to N\n"
"  --pcache N SZ         Configure N pages of pagecache each of size SZ bytes\n"
"  -q                    Reduced output\n"
"  --quiet               Reduced output\n"
"  --scratch N SZ        Configure scratch memory for N slots of SZ bytes each\n"
"  --unique-cases FILE   Write all unique test cases to FILE\n"
"  --utf16be             Set text encoding to UTF-16BE\n"
"  --utf16le             Set text encoding to UTF-16LE\n"
"  -v                    Increased output\n"
"  --verbose             Increased output\n"
  );
}
