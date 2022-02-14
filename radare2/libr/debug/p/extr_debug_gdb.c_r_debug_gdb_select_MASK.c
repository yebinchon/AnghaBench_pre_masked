
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int RDebug ;


 int * VAR_0 ;
 scalar_t__ FUNC_0 (int *,int,int) ;
 int * VAR_1 ;

__attribute__((used)) static bool FUNC_1(RDebug *VAR_2, int VAR_3, int VAR_4) {
 if (!VAR_0 || !*VAR_1) {
  VAR_0 = ((void*)0);
  return 0;
 }

 return FUNC_0 (VAR_0, VAR_3, VAR_4) >= 0;
}
