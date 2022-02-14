
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int __u32 ;


 int FUNC_0 (int,int,char*) ;
 int FUNC_1 (int,int*,int*) ;

int FUNC_2(int VAR_0)
{
 __u32 VAR_1 = 0;
 int VAR_2;
 int VAR_3;


 VAR_3 = FUNC_1(VAR_0, &VAR_1, &VAR_2);
 FUNC_0(0, VAR_3, "d");
 FUNC_0(0, VAR_2, "d");
 VAR_1 = 1;

 VAR_3 = FUNC_1(VAR_0, &VAR_1, &VAR_2);
 FUNC_0(0, VAR_3, "d");
 FUNC_0(1, VAR_2, "d");
 return 0;
err:
 return -1;
}
