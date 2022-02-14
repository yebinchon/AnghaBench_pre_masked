
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (int,char*,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 () ;
 int FUNC_5 (int) ;
 int FUNC_6 (int,int) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int,int ) ;

int FUNC_9(void)
{
 int VAR_0, VAR_1, VAR_2;
 int VAR_3 = FUNC_4();

 VAR_1 = FUNC_7(VAR_3);
 FUNC_0(VAR_1, "Failure allocating timeline\n");

 VAR_0 = FUNC_1(VAR_3, "allocFence", 5);
 VAR_1 = FUNC_3(VAR_0);
 FUNC_0(VAR_1, "Failure allocating fence\n");


 VAR_2 = FUNC_8(VAR_0, 0);
 FUNC_0(VAR_2 == 0, "Failure waiting on fence until timeout\n");


 VAR_2 = FUNC_6(VAR_3, 1);
 FUNC_0(VAR_2 == 0, "Failure advancing timeline\n");


 VAR_2 = FUNC_8(VAR_0, 0);
 FUNC_0(VAR_2 == 0, "Failure waiting on fence until timeout\n");


 VAR_2 = FUNC_6(VAR_3, 4);
 FUNC_0(VAR_2 == 0, "Failure signaling the fence\n");


 VAR_2 = FUNC_8(VAR_0, 0);
 FUNC_0(VAR_2 > 0, "Failure waiting on fence\n");


 VAR_2 = FUNC_6(VAR_3, 10);
 FUNC_0(VAR_2 == 0, "Failure going further\n");
 VAR_2 = FUNC_8(VAR_0, 0);
 FUNC_0(VAR_2 > 0, "Failure waiting ahead\n");

 FUNC_2(VAR_0);
 FUNC_5(VAR_3);

 return 0;
}
