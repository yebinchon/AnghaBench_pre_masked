
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned char* FUNC_0 (int ,int,int ) ;
 int FUNC_1 (unsigned char*,int,int,char*) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static void FUNC_3(void){
  unsigned char *VAR_0;
  VAR_0 = FUNC_0(0, 100, 0);
  FUNC_2("Decoded:\n");
  FUNC_1(VAR_0, 16, 2, "Database page size");
  FUNC_1(VAR_0, 18, 1, "File format write version");
  FUNC_1(VAR_0, 19, 1, "File format read version");
  FUNC_1(VAR_0, 20, 1, "Reserved space at end of page");
  FUNC_1(VAR_0, 24, 4, "File change counter");
  FUNC_1(VAR_0, 28, 4, "Size of database in pages");
  FUNC_1(VAR_0, 32, 4, "Page number of first freelist page");
  FUNC_1(VAR_0, 36, 4, "Number of freelist pages");
  FUNC_1(VAR_0, 40, 4, "Schema cookie");
  FUNC_1(VAR_0, 44, 4, "Schema format version");
  FUNC_1(VAR_0, 48, 4, "Default page cache size");
  FUNC_1(VAR_0, 52, 4, "Largest auto-vac root page");
  FUNC_1(VAR_0, 56, 4, "Text encoding");
  FUNC_1(VAR_0, 60, 4, "User version");
  FUNC_1(VAR_0, 64, 4, "Incremental-vacuum mode");
  FUNC_1(VAR_0, 68, 4, "Application ID");
  FUNC_1(VAR_0, 72, 4, "meta[8]");
  FUNC_1(VAR_0, 76, 4, "meta[9]");
  FUNC_1(VAR_0, 80, 4, "meta[10]");
  FUNC_1(VAR_0, 84, 4, "meta[11]");
  FUNC_1(VAR_0, 88, 4, "meta[12]");
  FUNC_1(VAR_0, 92, 4, "Change counter for version number");
  FUNC_1(VAR_0, 96, 4, "SQLite version number");
}
