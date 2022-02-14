
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,unsigned long,unsigned long,float) ;
 scalar_t__ FUNC_1 () ;
 scalar_t__ FUNC_2 () ;

int FUNC_3(int VAR_0, char **VAR_1)
{
 (void)VAR_0; (void)VAR_1;

 int VAR_2, VAR_3 = 1000000;

 unsigned long VAR_4 = 0;
 FUNC_2();
 for(VAR_2 = 0; VAR_2 < VAR_3 ; VAR_2++)
  VAR_4 += FUNC_2();

 unsigned long VAR_5 = 0;
 FUNC_1();
 for(VAR_2 = 0; VAR_2 < VAR_3 ; VAR_2++)
  VAR_5 += FUNC_1();

 FUNC_0("netdata internal: completed in %lu cycles, %lu cycles per read, %0.2f %%.\n", VAR_4, VAR_4 / VAR_3, (float)VAR_4 * 100.0 / (float)VAR_4);
 FUNC_0("method1         : completed in %lu cycles, %lu cycles per read, %0.2f %%.\n", VAR_5, VAR_5 / VAR_3, (float)VAR_5 * 100.0 / (float)VAR_4);

 return 0;
}
