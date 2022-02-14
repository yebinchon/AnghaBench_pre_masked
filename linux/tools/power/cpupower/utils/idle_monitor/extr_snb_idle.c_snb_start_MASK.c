
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
 unsigned long long VAR_5 ;

__attribute__((used)) static int FUNC_1(void)
{
 int VAR_6, VAR_7;
 unsigned long long VAR_8;

 for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++) {
  for (VAR_7 = 0; VAR_7 < VAR_3; VAR_7++) {
   FUNC_0(VAR_6, &VAR_8, VAR_7);
   VAR_4[VAR_6][VAR_7] = VAR_8;
  }
 }
 FUNC_0(VAR_1, &VAR_5, VAR_2);
 return 0;
}
