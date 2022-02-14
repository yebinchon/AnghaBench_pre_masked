
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sqlite3_value ;
typedef float RtreeValue ;


 double VAR_0 ;
 double VAR_1 ;
 double FUNC_0 (int *) ;

__attribute__((used)) static RtreeValue FUNC_1(sqlite3_value *VAR_2){
  double VAR_3 = FUNC_0(VAR_2);
  float VAR_4 = (float)VAR_3;
  if( VAR_4>VAR_3 ){
    VAR_4 = (float)(VAR_3*(VAR_3<0 ? VAR_0 : VAR_1));
  }
  return VAR_4;
}
