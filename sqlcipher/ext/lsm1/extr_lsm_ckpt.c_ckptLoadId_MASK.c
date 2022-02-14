
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int i64 ;
typedef int MetaPage ;


 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (int *,int*) ;
 scalar_t__ FUNC_1 (int *) ;

__attribute__((used)) static i64 FUNC_2(MetaPage *VAR_2){
  i64 VAR_3 = 0;
  if( VAR_2 ){
    int VAR_4;
    u8 *VAR_5 = FUNC_0(VAR_2, &VAR_4);
    VAR_3 = (((i64)FUNC_1(&VAR_5[VAR_1*4])) << 32) +
          ((i64)FUNC_1(&VAR_5[VAR_0*4]));
  }
  return VAR_3;
}
