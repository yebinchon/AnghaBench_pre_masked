
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int,char*,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 () ;
 int FUNC_5 (int) ;
 int FUNC_6 (int,int) ;
 int FUNC_7 (int,int ) ;
 int FUNC_8 (char*,int,int) ;

int FUNC_9(void)
{
 int VAR_2, VAR_3, VAR_4, VAR_5, VAR_6;
 int VAR_7 = FUNC_4();


 VAR_2 = FUNC_1(VAR_7, "allocFence", 1);
 VAR_3 = FUNC_1(VAR_7, "allocFence", 2);
 VAR_4 = FUNC_1(VAR_7, "allocFence", 3);

 VAR_6 = FUNC_3(VAR_2) &&
  FUNC_3(VAR_3) &&
  FUNC_3(VAR_4);
 FUNC_0(VAR_6, "Failure allocating fences\n");

 VAR_5 = FUNC_8("mergeFence", VAR_3, VAR_2);
 VAR_5 = FUNC_8("mergeFence", VAR_4, VAR_5);
 VAR_6 = FUNC_3(VAR_5);
 FUNC_0(VAR_6, "Failure merging fences\n");


 FUNC_0(FUNC_7(VAR_2, VAR_0) == 1,
        "a has too many active fences!\n");
 FUNC_0(FUNC_7(VAR_2, VAR_0) == 1,
        "b has too many active fences!\n");
 FUNC_0(FUNC_7(VAR_2, VAR_0) == 1,
        "c has too many active fences!\n");
 FUNC_0(FUNC_7(VAR_2, VAR_0) == 1,
        "d has too many active fences!\n");


 FUNC_6(VAR_7, 1);
 FUNC_0(FUNC_7(VAR_2, VAR_1) == 1,
        "a did not signal!\n");
 FUNC_0(FUNC_7(VAR_5, VAR_0) == 1,
        "d signaled too early!\n");

 FUNC_6(VAR_7, 1);
 FUNC_0(FUNC_7(VAR_3, VAR_1) == 1,
        "b did not signal!\n");
 FUNC_0(FUNC_7(VAR_5, VAR_0) == 1,
        "d signaled too early!\n");

 FUNC_6(VAR_7, 1);
 FUNC_0(FUNC_7(VAR_4, VAR_1) == 1,
        "c did not signal!\n");
 FUNC_0(FUNC_7(VAR_5, VAR_0) == 0 &&
        FUNC_7(VAR_5, VAR_1) == 1,
        "d did not signal!\n");

 FUNC_2(VAR_5);
 FUNC_2(VAR_4);
 FUNC_2(VAR_3);
 FUNC_2(VAR_2);
 FUNC_5(VAR_7);
 return 0;
}
