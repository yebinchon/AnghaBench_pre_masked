
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned long VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*,...) ;
 char* FUNC_4 (int,int ,int ) ;
 int FUNC_5 (int,int ,int *) ;
 scalar_t__ FUNC_6 (void const*) ;
 int FUNC_7 (int,unsigned long,int) ;

int FUNC_8(void)
{
 int VAR_8;
 unsigned long VAR_9;
 char *VAR_10;

 VAR_8 = FUNC_7(2, VAR_3, VAR_5 | VAR_1 | VAR_6 | VAR_7);
 if (VAR_8 < 0) {
  FUNC_2("shmget");
  FUNC_1(1);
 }
 FUNC_3("shmid: 0x%x\n", VAR_8);

 VAR_10 = FUNC_4(VAR_8, VAR_0, VAR_4);
 if (VAR_10 == (char *)-1) {
  FUNC_2("Shared memory attach failure");
  FUNC_5(VAR_8, VAR_2, ((void*)0));
  FUNC_1(2);
 }
 FUNC_3("shmaddr: %p\n", VAR_10);

 FUNC_0("Starting the writes:\n");
 for (VAR_9 = 0; VAR_9 < VAR_3; VAR_9++) {
  VAR_10[VAR_9] = (char)(VAR_9);
  if (!(VAR_9 % (1024 * 1024)))
   FUNC_0(".");
 }
 FUNC_0("\n");

 FUNC_0("Starting the Check...");
 for (VAR_9 = 0; VAR_9 < VAR_3; VAR_9++)
  if (VAR_10[VAR_9] != (char)VAR_9) {
   FUNC_3("\nIndex %lu mismatched\n", VAR_9);
   FUNC_1(3);
  }
 FUNC_0("Done.\n");

 if (FUNC_6((const void *)VAR_10) != 0) {
  FUNC_2("Detach failure");
  FUNC_5(VAR_8, VAR_2, ((void*)0));
  FUNC_1(4);
 }

 FUNC_5(VAR_8, VAR_2, ((void*)0));

 return 0;
}
