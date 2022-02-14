
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int,char*) ;
 int VAR_0 ;
 int FUNC_1 (int,char*,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 () ;
 int FUNC_5 (int) ;
 int FUNC_6 (int,int) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int,int ) ;
 int FUNC_9 (char*,int,int) ;

int FUNC_10(void)
{
 int VAR_1, VAR_2, VAR_3;
 int VAR_4 = FUNC_4();

 VAR_2 = FUNC_7(VAR_4);
 FUNC_0(VAR_2, "Failure allocating timeline\n");

 VAR_1 = FUNC_1(VAR_4, "allocFence", 5);
 VAR_2 = FUNC_3(VAR_1);
 FUNC_0(VAR_2, "Failure allocating fence\n");

 VAR_3 = FUNC_9("mergeFence", VAR_1, VAR_1);
 VAR_2 = FUNC_3(VAR_1);
 FUNC_0(VAR_2, "Failure merging fence\n");

 FUNC_0(FUNC_8(VAR_3, VAR_0) == 0,
        "fence signaled too early!\n");

 FUNC_6(VAR_4, 5);
 FUNC_0(FUNC_8(VAR_3, VAR_0) == 1,
        "fence did not signal!\n");

 FUNC_2(VAR_3);
 FUNC_2(VAR_1);
 FUNC_5(VAR_4);

 return 0;
}
