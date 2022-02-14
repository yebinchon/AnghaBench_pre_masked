
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int MemoryContext ;
typedef int LLVMJITEventListenerRef ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (int ,int ,char*,char*,int ,int ,int ) ;
 int FUNC_3 (char*) ;
 char* FUNC_4 () ;
 char* FUNC_5 () ;
 scalar_t__ FUNC_6 (int ,int *,char**) ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 int FUNC_9 () ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ,int ) ;
 int VAR_5 ;
 int FUNC_13 (int ) ;
 int VAR_6 ;
 int FUNC_14 (int ,int ) ;
 int FUNC_15 (int ,char*,char*,...) ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_16 () ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;

__attribute__((used)) static void
FUNC_17(void)
{
 MemoryContext VAR_17;
 char *VAR_18 = ((void*)0);
 char *VAR_19 = ((void*)0);
 char *VAR_20 = ((void*)0);

 if (VAR_13)
  return;

 VAR_17 = FUNC_13(VAR_6);

 FUNC_9();
 FUNC_8();
 FUNC_7();





 FUNC_16();

 if (FUNC_6(VAR_16, &VAR_15, &VAR_18) != 0)
 {
  FUNC_15(VAR_1, "failed to query triple %s\n", VAR_18);
 }







 VAR_19 = FUNC_5();
 VAR_20 = FUNC_4();
 FUNC_15(VAR_0, "LLVMJIT detected CPU \"%s\", with features \"%s\"",
   VAR_19, VAR_20);

 VAR_10 =
  FUNC_2(VAR_15, VAR_16, VAR_19, VAR_20,
        VAR_3,
        VAR_5,
        VAR_4);
 VAR_12 =
  FUNC_2(VAR_15, VAR_16, VAR_19, VAR_20,
        VAR_2,
        VAR_5,
        VAR_4);

 FUNC_3(VAR_19);
 VAR_19 = ((void*)0);
 FUNC_3(VAR_20);
 VAR_20 = ((void*)0);


 FUNC_10(((void*)0));

 VAR_9 = FUNC_11(VAR_10);
 VAR_11 = FUNC_11(VAR_12);
 FUNC_14(VAR_14, 0);

 VAR_13 = 1;

 FUNC_13(VAR_17);
}
