
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,char*,int*) ;
 int * FUNC_2 (char*,char*) ;

int FUNC_3(void)
{
 int VAR_0;
 FILE *VAR_1;

 VAR_1 = FUNC_2("dmesg | grep \"WARNING:\" | wc -l", "r");
 FUNC_1(VAR_1, "%d", &VAR_0);
 FUNC_0(VAR_1);

 return VAR_0;
}
