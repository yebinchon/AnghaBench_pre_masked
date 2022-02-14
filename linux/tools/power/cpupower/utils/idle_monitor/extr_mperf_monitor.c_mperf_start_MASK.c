
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int ,int *) ;
 int VAR_1 ;
 int FUNC_1 (char*,unsigned long long) ;
 int FUNC_2 (unsigned long long*) ;
 int FUNC_3 (int) ;
 int VAR_2 ;
 unsigned long long VAR_3 ;

__attribute__((used)) static int FUNC_4(void)
{
 int VAR_4;
 unsigned long long VAR_5;

 FUNC_0(VAR_0, &VAR_2);
 FUNC_2(&VAR_3);

 for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++)
  FUNC_3(VAR_4);

 FUNC_2(&VAR_5);
 FUNC_1("TSC diff: %llu\n", VAR_5 - VAR_3);
 return 0;
}
