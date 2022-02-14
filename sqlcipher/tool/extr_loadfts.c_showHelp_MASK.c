
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 int FUNC_1 (char*,char const*) ;

__attribute__((used)) static void FUNC_2(const char *VAR_0){
  FUNC_1("\n"
"Usage: %s SWITCHES... DB\n"
"\n"
"  This program opens the database named on the command line and attempts to\n"
"  create an FTS table named \"fts\" with a single column. If successful, it\n"
"  recursively traverses the directory named by the -dir option and inserts\n"
"  the contents of each file into the fts table. All files are assumed to\n"
"  contain UTF-8 text.\n"
"\n"
"Switches are:\n"
"  -fts [345]       FTS version to use (default=5)\n"
"  -idx [01]        Create a mapping from filename to rowid (default=0)\n"
"  -dir <path>      Root of directory tree to load data from (default=.)\n"
"  -trans <integer> Number of inserts per transaction (default=1)\n"
, VAR_0
);
  FUNC_0(1);
}
