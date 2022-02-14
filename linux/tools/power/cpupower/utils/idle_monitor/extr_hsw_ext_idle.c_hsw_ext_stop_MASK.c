
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned long long** VAR_4 ;
 int FUNC_0 (int,unsigned long long*,int) ;
 int* VAR_5 ;
 unsigned long long VAR_6 ;

__attribute__((used)) static int FUNC_1(void)
{
 unsigned long long VAR_7;
 int VAR_8, VAR_9;

 FUNC_0(VAR_1, &VAR_6, VAR_2);

 for (VAR_8 = 0; VAR_8 < VAR_0; VAR_8++) {
  for (VAR_9 = 0; VAR_9 < VAR_3; VAR_9++) {
   VAR_5[VAR_9] = !FUNC_0(VAR_8, &VAR_7, VAR_9);
   VAR_4[VAR_8][VAR_9] = VAR_7;
  }
 }
 return 0;
}
