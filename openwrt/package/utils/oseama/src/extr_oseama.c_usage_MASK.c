
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;

__attribute__((used)) static void FUNC_1() {
 FUNC_0("Usage:\n");
 FUNC_0("\n");
 FUNC_0("Info about Seama seal (container):\n");
 FUNC_0("\toseama info <file> [options]\n");
 FUNC_0("\t-e\t\t\t\tprint info about specified entity only\n");
 FUNC_0("\n");
 FUNC_0("Create Seama entity:\n");
 FUNC_0("\toseama entity <file> [options]\n");
 FUNC_0("\t-m meta\t\t\t\tmeta into to put in header\n");
 FUNC_0("\t-f file\t\t\t\tappend content from file\n");
 FUNC_0("\t-b offset\t\t\tappend zeros till reaching absolute offset\n");
 FUNC_0("\n");
 FUNC_0("Extract from Seama seal (container):\n");
 FUNC_0("\toseama extract <file> [options]\n");
 FUNC_0("\t-e\t\t\t\tindex of entity to extract\n");
 FUNC_0("\t-o file\t\t\t\toutput file\n");
}
