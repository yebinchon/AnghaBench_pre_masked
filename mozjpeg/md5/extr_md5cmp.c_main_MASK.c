
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (char*,char*) ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (char*) ;
 int VAR_0 ;
 int FUNC_3 (char*,char*) ;
 int FUNC_4 (char*) ;

int FUNC_5(int VAR_1, char *VAR_2[])
{
  char *VAR_3 = ((void*)0), VAR_4[65];

  if (VAR_1 < 3) {
    FUNC_1(VAR_0, "USAGE: %s <correct MD5 sum> <file>\n", VAR_2[0]);
    return -1;
  }

  if (FUNC_4(VAR_2[1]) != 32)
    FUNC_1(VAR_0, "WARNING: MD5 hash size is wrong.\n");

  VAR_3 = FUNC_0(VAR_2[2], VAR_4);
  if (!VAR_3) {
    FUNC_2("Could not obtain MD5 sum");
    return -1;
  }

  if (!FUNC_3(VAR_3, VAR_2[1])) {
    FUNC_1(VAR_0, "%s: OK\n", VAR_2[2]);
    return 0;
  } else {
    FUNC_1(VAR_0, "%s: FAILED.  Checksum is %s\n", VAR_2[2], VAR_3);
    return -1;
  }
}
