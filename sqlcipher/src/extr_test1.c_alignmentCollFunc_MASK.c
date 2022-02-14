
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (void const*) ;
 int FUNC_1 (void const*,void const*,int) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_2(
  void *VAR_1,
  int VAR_2, const void *VAR_3,
  int VAR_4, const void *VAR_5
){
  int VAR_6, VAR_7;
  VAR_7 = VAR_2<VAR_4 ? VAR_2 : VAR_4;
  if( VAR_2>0 && 1==(1&(FUNC_0(VAR_3))) ) VAR_0++;
  if( VAR_4>0 && 1==(1&(FUNC_0(VAR_5))) ) VAR_0++;
  VAR_6 = FUNC_1(VAR_3, VAR_5, VAR_7);
  if( VAR_6==0 ){
    VAR_6 = VAR_2 - VAR_4;
  }
  return VAR_6;
}
