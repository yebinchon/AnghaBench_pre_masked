
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
 int FUNC_9 (int,int) ;

int FUNC_10(void)
{
 int VAR_2, VAR_3, VAR_4;
 int VAR_5, VAR_6, VAR_7, VAR_8;
 int VAR_9, VAR_10, VAR_11, VAR_12;

 VAR_2 = FUNC_4();
 VAR_3 = FUNC_4();
 VAR_4 = FUNC_4();

 VAR_5 = FUNC_1(VAR_2, "fenceA", 5);
 VAR_6 = FUNC_1(VAR_3, "fenceB", 5);
 VAR_7 = FUNC_1(VAR_4, "fenceC", 5);

 VAR_8 = FUNC_8("mergeFence", VAR_6, VAR_5);
 VAR_8 = FUNC_8("mergeFence", VAR_7, VAR_8);

 VAR_9 = FUNC_3(VAR_8);
 FUNC_0(VAR_9, "Failure merging fence from various timelines\n");


 VAR_10 = FUNC_7(VAR_8, VAR_0);
 FUNC_0(VAR_10 == 3, "Fence signaled too early!\n");

 VAR_12 = FUNC_9(VAR_8, 0);
 FUNC_0(VAR_12 == 0,
        "Failure waiting on fence until timeout\n");

 VAR_12 = FUNC_6(VAR_2, 5);
 VAR_10 = FUNC_7(VAR_8, VAR_0);
 VAR_11 = FUNC_7(VAR_8, VAR_1);
 FUNC_0(VAR_10 == 2 && VAR_11 == 1,
        "Fence did not signal properly!\n");

 VAR_12 = FUNC_6(VAR_3, 5);
 VAR_10 = FUNC_7(VAR_8, VAR_0);
 VAR_11 = FUNC_7(VAR_8, VAR_1);
 FUNC_0(VAR_10 == 1 && VAR_11 == 2,
        "Fence did not signal properly!\n");

 VAR_12 = FUNC_6(VAR_4, 5);
 VAR_10 = FUNC_7(VAR_8, VAR_0);
 VAR_11 = FUNC_7(VAR_8, VAR_1);
 FUNC_0(VAR_10 == 0 && VAR_11 == 3,
        "Fence did not signal properly!\n");


 VAR_12 = FUNC_9(VAR_8, 100);
 FUNC_0(VAR_12 > 0, "Failure waiting on signaled fence\n");

 FUNC_2(VAR_8);
 FUNC_2(VAR_7);
 FUNC_2(VAR_6);
 FUNC_2(VAR_5);
 FUNC_5(VAR_4);
 FUNC_5(VAR_3);
 FUNC_5(VAR_2);

 return 0;
}
