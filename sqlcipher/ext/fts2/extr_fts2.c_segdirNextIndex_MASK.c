
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int fulltext_vtab ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int,int*) ;
 int FUNC_1 (int *,int) ;

__attribute__((used)) static int FUNC_2(fulltext_vtab *VAR_4, int VAR_5, int *VAR_6){
  int VAR_7 = FUNC_0(VAR_4, VAR_5, VAR_6);
  if( VAR_7==VAR_1 ){
    *VAR_6 = 0;
  }else if( VAR_7==VAR_3 ){
    if( *VAR_6==(VAR_0-1) ){
      VAR_7 = FUNC_1(VAR_4, VAR_5);
      if( VAR_7!=VAR_2 ) return VAR_7;
      *VAR_6 = 0;
    }else{
      (*VAR_6)++;
    }
  }else{
    return VAR_7;
  }
  return VAR_2;
}
