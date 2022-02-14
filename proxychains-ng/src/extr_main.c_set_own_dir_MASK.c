
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (scalar_t__*,char const*,size_t) ;
 scalar_t__* VAR_0 ;
 size_t FUNC_1 (char const*) ;

__attribute__((used)) static void FUNC_2(const char *VAR_1) {
 size_t VAR_2 = FUNC_1(VAR_1);
 while(VAR_2 && VAR_1[VAR_2 - 1] != '/')
  VAR_2--;
 if(VAR_2 == 0)



  FUNC_0(VAR_0, ".", 2);

 else {
  FUNC_0(VAR_0, VAR_1, VAR_2 - 1);
  VAR_0[VAR_2] = 0;
 }
}
