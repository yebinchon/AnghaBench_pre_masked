
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int,char*,int) ;

int FUNC_4(void)
{
 char VAR_2;
 int VAR_3;

 VAR_3 = FUNC_1("/proc/sys/vm/compact_unevictable_allowed",
    VAR_1 | VAR_0);
 if (VAR_3 < 0) {
  FUNC_2("Failed to open\n"
         "/proc/sys/vm/compact_unevictable_allowed\n");
  return -1;
 }

 if (FUNC_3(VAR_3, &VAR_2, sizeof(char)) != sizeof(char)) {
  FUNC_2("Failed to read from\n"
         "/proc/sys/vm/compact_unevictable_allowed\n");
  FUNC_0(VAR_3);
  return -1;
 }

 FUNC_0(VAR_3);
 if (VAR_2 == '1')
  return 0;

 return -1;
}
