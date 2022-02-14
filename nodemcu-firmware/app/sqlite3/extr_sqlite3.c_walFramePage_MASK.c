
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;

__attribute__((used)) static int FUNC_1(u32 VAR_2){
  int VAR_3 = (VAR_2+VAR_0-VAR_1-1) / VAR_0;
  FUNC_0( (VAR_3==0 || VAR_2>VAR_1)
       && (VAR_3>=1 || VAR_2<=VAR_1)
       && (VAR_3<=1 || VAR_2>(VAR_1+VAR_0))
       && (VAR_3>=2 || VAR_2<=VAR_1+VAR_0)
       && (VAR_3<=2 || VAR_2>(VAR_1+2*VAR_0))
  );
  return VAR_3;
}
