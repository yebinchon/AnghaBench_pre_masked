
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pid_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 () ;
 char* FUNC_1 (int,unsigned long) ;
 int FUNC_2 (int) ;
 unsigned long FUNC_3 () ;
 int FUNC_4 (char*) ;
 int VAR_5 ;
 void* VAR_6 ;
 int VAR_7 ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (void*,char*,unsigned long) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int,int) ;
 void* FUNC_9 (int) ;
 void* FUNC_10 (int) ;
 int FUNC_11 (char*,unsigned long,int) ;
 unsigned long VAR_8 ;
 int FUNC_12 (char*,int) ;
 int FUNC_13 (char*,...) ;
 int FUNC_14 (int,void*,unsigned long) ;
 int FUNC_15 () ;
 int FUNC_16 (char*,char*) ;

int FUNC_17(int VAR_9, char **VAR_10)
{
 char *VAR_11;
 int VAR_12, VAR_13, VAR_14;
 void *VAR_15;
 int VAR_16;
 pid_t VAR_17;

 if (VAR_9 < 2) {
  FUNC_13("error: please pass path to file in fuse_mnt mount-point\n");
  FUNC_0();
 }

 if (VAR_9 >= 3) {
  if (!FUNC_16(VAR_10[2], "hugetlbfs")) {
   unsigned long VAR_18 = FUNC_3();

   if (!VAR_18) {
    FUNC_13("Unable to determine huge page size\n");
    FUNC_0();
   }

   VAR_7 = 1;
   VAR_8 = VAR_18 * 2;
  } else {
   FUNC_13("Unknown option: %s\n", VAR_10[2]);
   FUNC_0();
  }
 }

 VAR_11 = FUNC_1(sizeof(*VAR_11), VAR_8);


 FUNC_13("opening: %s\n", VAR_10[1]);
 VAR_12 = FUNC_12(VAR_10[1], VAR_4 | VAR_3);
 if (VAR_12 < 0) {
  FUNC_13("cannot open(\"%s\"): %m\n", VAR_10[1]);
  FUNC_0();
 }


 VAR_13 = FUNC_11("kern_memfd_fuse",
        VAR_8,
        VAR_2 | VAR_1);


 VAR_15 = FUNC_10(VAR_13);



 VAR_5 = VAR_13;
 VAR_6 = VAR_15;
 VAR_17 = FUNC_15();
 VAR_14 = FUNC_14(VAR_12, VAR_15, VAR_8);
 if (VAR_14 < 0) {
  FUNC_13("read() failed: %m\n");
  FUNC_0();
 } else if (!VAR_14) {
  FUNC_13("unexpected EOF on read()\n");
  FUNC_0();
 }

 VAR_16 = FUNC_7(VAR_13) & VAR_0;



 FUNC_5(VAR_17);
 FUNC_8(VAR_13, VAR_0);
 VAR_15 = FUNC_9(VAR_13);
 if (VAR_16 && FUNC_6(VAR_15, VAR_11, VAR_8)) {
  FUNC_13("memfd sealed during read() but data not discarded\n");
  FUNC_0();
 } else if (!VAR_16 && !FUNC_6(VAR_15, VAR_11, VAR_8)) {
  FUNC_13("memfd sealed after read() but data discarded\n");
  FUNC_0();
 }

 FUNC_2(VAR_13);
 FUNC_2(VAR_12);

 FUNC_13("fuse: DONE\n");
 FUNC_4(VAR_11);

 return 0;
}
