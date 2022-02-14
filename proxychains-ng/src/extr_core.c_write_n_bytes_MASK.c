
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int,char*,size_t) ;

__attribute__((used)) static int FUNC_1(int VAR_0, char *VAR_1, size_t VAR_2) {
 int VAR_3 = 0;
 size_t VAR_4 = 0;
 for(;;) {
  VAR_3 = FUNC_0(VAR_0, &VAR_1[VAR_4], VAR_2 - VAR_4);
  if(VAR_3 <= 0)
   return VAR_3;
  VAR_4 += VAR_3;
  if(VAR_4 == VAR_2)
   return VAR_4;
 }
}
