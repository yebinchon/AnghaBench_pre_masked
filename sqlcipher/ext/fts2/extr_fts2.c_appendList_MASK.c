
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int StringBuffer ;


 int FUNC_0 (int *,char*) ;

__attribute__((used)) static void FUNC_1(StringBuffer *VAR_0, int VAR_1, char **VAR_2){
  int VAR_3;
  for(VAR_3=0; VAR_3<VAR_1; ++VAR_3){
    if( VAR_3>0 ) FUNC_0(VAR_0, ", ");
    FUNC_0(VAR_0, VAR_2[VAR_3]);
  }
}
