
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (char*,scalar_t__) ;

__attribute__((used)) static int FUNC_1(void *VAR_3){
  VAR_2++;
  if( VAR_2<VAR_1 ) return 0;
  if( VAR_0>=1 ){
    FUNC_0("-- Progress limit of %d reached\n", VAR_1);
  }
  return 1;
}
