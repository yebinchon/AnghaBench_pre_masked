
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int TValue ;


 int FUNC_0 (int const*) ;
 size_t FUNC_1 (int) ;

__attribute__((used)) static int FUNC_2(const TValue*VAR_0,int*VAR_1){
int VAR_2=FUNC_0(VAR_0);
if(0<VAR_2&&VAR_2<=(1<<(32-2))){
VAR_1[FUNC_1(VAR_2)]++;
return 1;
}
else
return 0;
}
