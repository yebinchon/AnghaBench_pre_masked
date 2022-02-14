
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pid_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 char* VAR_4 ;
 int FUNC_0 () ;
 unsigned long FUNC_1 () ;
 int VAR_5 ;
 int FUNC_2 (int ) ;
 int VAR_6 ;
 unsigned long VAR_7 ;
 int FUNC_3 (char*,...) ;
 int FUNC_4 (int) ;
 int FUNC_5 (char*,char*) ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 int FUNC_9 () ;
 int FUNC_10 () ;
 int FUNC_11 () ;
 int FUNC_12 () ;
 int FUNC_13 (char*,char*) ;
 int FUNC_14 (char*,char*) ;
 int FUNC_15 (char*,char*) ;
 int FUNC_16 (char*,char*) ;

int FUNC_17(int VAR_8, char **VAR_9)
{
 pid_t VAR_10;

 if (VAR_8 == 2) {
  if (!FUNC_5(VAR_9[1], "hugetlbfs")) {
   unsigned long VAR_11 = FUNC_1();

   if (!VAR_11) {
    FUNC_3("Unable to determine huge page size\n");
    FUNC_0();
   }

   VAR_5 = 1;
   VAR_6 = VAR_3;
   VAR_7 = VAR_11 * 2;
  } else {
   FUNC_3("Unknown option: %s\n", VAR_9[1]);
   FUNC_0();
  }
 }

 FUNC_7();
 FUNC_6();

 FUNC_12();
 FUNC_8();
 FUNC_11();
 FUNC_9();
 FUNC_10();

 FUNC_13("SHARE-DUP", "");
 FUNC_15("SHARE-MMAP", "");
 FUNC_16("SHARE-OPEN", "");
 FUNC_14("SHARE-FORK", "");



 VAR_10 = FUNC_4(VAR_0 | VAR_1 | VAR_2);
 FUNC_13("SHARE-DUP", VAR_4);
 FUNC_15("SHARE-MMAP", VAR_4);
 FUNC_16("SHARE-OPEN", VAR_4);
 FUNC_14("SHARE-FORK", VAR_4);
 FUNC_2(VAR_10);

 FUNC_3("memfd: DONE\n");

 return 0;
}
