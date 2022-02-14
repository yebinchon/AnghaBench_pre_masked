
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (char*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (char*) ;

void FUNC_4(char VAR_0[], int VAR_1)
{
 FUNC_2("Usage:\n");
 FUNC_2("1) %s -r [-s sleep]\n", FUNC_0(VAR_0));
 FUNC_2("2) %s -b byte_offset\n", FUNC_0(VAR_0));
 FUNC_2("3) %s -w byte_offset -v value\n\n", FUNC_0(VAR_0));

 FUNC_3("\t-r [-s sleep]      : Dump EC registers");
 FUNC_3("\t                     If sleep is given, sleep x seconds,");
 FUNC_3("\t                     re-read EC registers and show changes");
 FUNC_3("\t-b offset          : Read value at byte_offset (in hex)");
 FUNC_3("\t-w offset -v value : Write value at byte_offset");
 FUNC_3("\t-h                 : Print this help\n\n");
 FUNC_3("Offsets and values are in hexadecimal number system.");
 FUNC_3("The offset and value must be between 0 and 0xff.");
 FUNC_1(VAR_1);
}
