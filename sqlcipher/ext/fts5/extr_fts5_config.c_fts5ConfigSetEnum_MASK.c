
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int eVal; scalar_t__ zName; } ;
typedef TYPE_1__ Fts5Enum ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__,char const*,int) ;
 scalar_t__ FUNC_1 (char const*) ;

__attribute__((used)) static int FUNC_2(
  const Fts5Enum *VAR_2,
  const char *VAR_3,
  int *VAR_4
){
  int VAR_5 = (int)FUNC_1(VAR_3);
  int VAR_6;
  int VAR_7 = -1;

  for(VAR_6=0; VAR_2[VAR_6].zName; VAR_6++){
    if( FUNC_0(VAR_2[VAR_6].zName, VAR_3, VAR_5)==0 ){
      if( VAR_7>=0 ) return VAR_0;
      VAR_7 = VAR_2[VAR_6].eVal;
    }
  }

  *VAR_4 = VAR_7;
  return VAR_7<0 ? VAR_0 : VAR_1;
}
