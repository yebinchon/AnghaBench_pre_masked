
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Size ;
typedef int PROCLOCK ;
typedef int LOCK ;


 long FUNC_0 () ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (long,int) ;

Size
FUNC_3(void)
{
 Size VAR_0 = 0;
 long VAR_1;


 VAR_1 = FUNC_0();
 VAR_0 = FUNC_1(VAR_0, FUNC_2(VAR_1, sizeof(LOCK)));


 VAR_1 *= 2;
 VAR_0 = FUNC_1(VAR_0, FUNC_2(VAR_1, sizeof(PROCLOCK)));




 VAR_0 = FUNC_1(VAR_0, VAR_0 / 10);

 return VAR_0;
}
