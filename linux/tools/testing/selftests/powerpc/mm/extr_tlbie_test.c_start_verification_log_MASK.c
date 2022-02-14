
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 char* FUNC_0 (unsigned int) ;
 int FUNC_1 (char*) ;
 int * FUNC_2 (char*,char*) ;
 int ** VAR_2 ;
 int FUNC_3 (int *,char*,...) ;
 int VAR_3 ;
 char* VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (char*,char*,unsigned int) ;
 int FUNC_5 (char*,char*) ;
 int FUNC_6 (char*,int ) ;

__attribute__((used)) static inline void FUNC_7(unsigned int VAR_6,
       unsigned int *VAR_7,
       unsigned int VAR_8,
       unsigned int VAR_9)
{
 FILE *VAR_10;
 char VAR_11[30];
 char VAR_12[VAR_0 + 30];
 char VAR_13[2] = "/";
 char *VAR_14 = FUNC_0(VAR_6);
 unsigned int VAR_15 = VAR_1;

 FUNC_4(VAR_11, VAR_4, VAR_6);
 FUNC_6(VAR_12, VAR_3);
 FUNC_5(VAR_12, VAR_13);
 FUNC_5(VAR_12, VAR_11);
 VAR_10 = FUNC_2(VAR_12, "w");

 if (!VAR_10) {
  FUNC_1("Unable to create logfile\n");
 }

 VAR_2[VAR_6] = VAR_10;

 FUNC_3(VAR_10, "----------------------------------------------------------\n");
 FUNC_3(VAR_10, "PID                = %d\n", VAR_5);
 FUNC_3(VAR_10, "Thread id          = %02d\n", VAR_6);
 FUNC_3(VAR_10, "Chunk Start Addr   = 0x%016lx\n", (unsigned long)VAR_14);
 FUNC_3(VAR_10, "Chunk Size         = %d\n", VAR_15);
 FUNC_3(VAR_10, "Next Store Addr    = 0x%016lx\n", (unsigned long)VAR_7);
 FUNC_3(VAR_10, "Current sweep-id   = 0x%08x\n", VAR_8);
 FUNC_3(VAR_10, "Previous sweep-id  = 0x%08x\n", VAR_9);
 FUNC_3(VAR_10, "----------------------------------------------------------\n");
}
