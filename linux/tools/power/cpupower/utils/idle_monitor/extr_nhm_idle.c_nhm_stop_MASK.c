
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned long long** VAR_4 ;
 int FUNC_0 (char*,unsigned long long) ;
 int* VAR_5 ;
 int FUNC_1 (int,unsigned long long*,int) ;
 unsigned long long VAR_6 ;

__attribute__((used)) static int FUNC_2(void)
{
 unsigned long long VAR_7;
 unsigned long long VAR_8;
 int VAR_9, VAR_10;

 FUNC_1(VAR_1, &VAR_6, VAR_2);

 for (VAR_9 = 0; VAR_9 < VAR_0; VAR_9++) {
  for (VAR_10 = 0; VAR_10 < VAR_3; VAR_10++) {
   VAR_5[VAR_10] = !FUNC_1(VAR_9, &VAR_7, VAR_10);
   VAR_4[VAR_9][VAR_10] = VAR_7;
  }
 }
 FUNC_1(VAR_1, &VAR_8, VAR_2);
 FUNC_0("TSC diff: %llu\n", VAR_8 - VAR_6);

 return 0;
}
